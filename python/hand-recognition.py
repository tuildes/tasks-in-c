import cv2
import mediapipe as mp

# Initialize MediaPipe for hands detection
mp_hands = mp.solutions.hands
hands = mp_hands.Hands(min_detection_confidence=0.8, min_tracking_confidence=0.8, max_num_hands=1)
mp_draw = mp.solutions.drawing_utils

# Recognize Gesture
def recognize_gesture(hand_landmarks):
    thumb_tip = hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_TIP]
    # index_tip =

    return f"Achado thumb tip: {thumb_tip.y}"

# Camera settings
cap = cv2.VideoCapture(0)

while True:
    success, frame = cap.read()
    if not success:
        break

    height, width, _ = frame.shape

    img_rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

    results = hands.process(img_rgb)

    if results.multi_hand_landmarks:
        for hand_landmarks in results.multi_hand_landmarks:
            mp_draw.draw_landmarks(frame, hand_landmarks, mp_hands.HAND_CONNECTIONS)
            gestureText = recognize_gesture(hand_landmarks)
            cv2.putText(frame, gestureText, (10, 70), cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 0, 0), 2)


    # Texts configuration
    (text_width, text_height), _ = cv2.getTextSize("Press 'Q'to exit", cv2.FONT_HERSHEY_SIMPLEX, 1, 2)
    cv2.putText(frame, "Press 'Q' to exit", (width - text_width - 40, height - text_height - 20), cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 0, 0), 2)


    cv2.imshow("Hand Gesture Recognition", frame)

    # Press 'q' to quit the video feed
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

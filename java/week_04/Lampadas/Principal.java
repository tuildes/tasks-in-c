public class Principal {
    public static void main(String[] args) {
        LED led = new LED(true, 20);
        System.out.printf("LED: %b\n", led.isLigado());
        led.setLigado(!led.isLigado());
        System.out.printf("LED: %b\n", led.isLigado());
    }
}

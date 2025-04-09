public class Main {
    public static void main(String[] args) {
        LampadaLed led = new LampadaLed(true);

        System.out.printf("Led: %b\n", led.getLigado());
        led.ligaDesliga();
        System.out.printf("Led: %b\n", led.getLigado());
    }
}
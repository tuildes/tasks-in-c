public class Principal {
    public static void main(String[] args) {
        Tempo tempo = new Tempo();
        tempo.setHoras(12);
        tempo.setMinutos(40);

        System.out.printf("%s\n", tempo.toString());
    }
}

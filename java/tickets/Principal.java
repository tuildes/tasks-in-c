public class Principal {
    public static void main(String[] args) {
        IngressoVip vip = new IngressoVip(20, 30);
        Ingresso ingresso = new Ingresso(20);

        vip.exibir();
        ingresso.exibir();
    }
}

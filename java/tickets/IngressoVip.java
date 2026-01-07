public class IngressoVip extends Ingresso {
    private int valorAdicional;

    public IngressoVip() {}
    public IngressoVip(int valor, int valorAdicional) {
        super(valor);
        this.valorAdicional = valorAdicional;
    }

    public void exibir() {
        super.exibir();
        System.out.printf("Valor: %d (+ adicional)\n", (this.valor + this.valorAdicional));
    }
}

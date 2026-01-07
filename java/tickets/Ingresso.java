public class Ingresso {
    protected int valor;

    public Ingresso() {
        this(0);
    }
    public Ingresso(int valor) {
        this.valor = valor;
    }

    public void exibir() {
        System.out.printf("Valor: %d\n", this.valor);
    }
}

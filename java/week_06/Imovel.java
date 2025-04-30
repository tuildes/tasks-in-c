public abstract class Imovel {
    private Endereco endereco;
    private int preco;

    public Imovel(Endereco endereco, int preco) {
        this.endereco = endereco;
        this.preco = preco;
    }

    public int getPreco() {
        return this.preco;
    }

    public abstract int calcularValor();
}

public class ImovelNovo extends Imovel {
    public int calcularValor() {
        return this.getPreco() + 100;
    }

    public ImovelNovo(Endereco endereco, int valor) {
        super(endereco, valor);
    }

    public void exibir() {
        System.out.printf("Imovel novo!\n");
    }
}
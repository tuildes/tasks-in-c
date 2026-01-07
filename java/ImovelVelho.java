public class ImovelVelho extends Imovel {
    public int calcularValor() {
        return this.getPreco();
    }

    public ImovelVelho(Endereco endereco, int valor) {
        super(endereco, valor);
    }
}
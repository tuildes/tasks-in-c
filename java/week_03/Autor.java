public class Autor {
    private String nome;
    private String nacionalidade;

    public Autor() {}
    public Autor(String nome, String nacionalidade) {
        this.nome = nome;
        this.nacionalidade = nacionalidade;
    }

    public void exibir() {
        System.out.printf("Autor: %s (%s)\n", this.nome, this.nacionalidade);
    }
}

public class Autor {
    private String nome;
    private String nacionalidade;

    // Construtores
    public Autor() {}
    public Autor(String nome) {
        this.setNome(nome);
    }
    public Autor(String nome, String nacionalidade) {
        this.setNome(nome);
        this.setNacionalidade(nacionalidade);
    }

    // Metodos SET
    public void setNome(String nome) {
        this.nome = nome;
    }
    public void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }

    // Metodos GET
    public String getNome() {
        return this.nome;
    }
    public String getNacionalidade() {
        return this.nacionalidade;
    }
}
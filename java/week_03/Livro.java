public class Livro {
    private String titulo;
    private int ano;
    private Autor autor;

    public Livro() {}
    public Livro(String titulo, int ano, Autor autor) {
        this.titulo = titulo;
        this.ano = ano;
        this.autor = autor;
    }

    public void exibir() {
        this.autor.exibir();
        System.out.printf("%s (%d)\n", this.titulo, this.ano);
    }
}

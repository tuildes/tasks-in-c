public class Livro {
    private String titulo;
    private int ano;
    private Autor autor;

    // Construtores
    public Livro() {}
    public Livro(int ano) {
        this.setAno(ano);
    }
    public Livro(String titulo, int ano, Autor autor) {
        this.setTitulo(titulo);
        this.setAno(ano);
        this.setAutor(autor);
    }

    // Metodos SET
    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }
    public void setAno(int ano) {
        this.ano = ano;
    }
    public void setAutor(Autor autor) {
        this.autor = autor;
    }

    // Metodos GET
    public String getTitulo() {
        return this.titulo;
    }
    public int getAno() {
        return this.ano;
    }
    public Autor getAutor() {
        return this.autor;
    }

    public void exibir() {
        System.out.printf("Titulo: %s\nAno: %d\nAutor: %s\nNacionalidade: %s\n",
            this.getTitulo(), this.getAno(), 
            this.autor.getNome(), this.getAutor().getNacionalidade());
    }
}
public class Principal {
    public static void main(String[] args) {
        Livro livro = new Livro("Cinco Linguagens do Amor", 2013, new Autor("Gary Chapman", "Ingles"));
        livro.exibir();
    }
}

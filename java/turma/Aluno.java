public class Aluno {
    private String nome;
    private int cr;

    public Aluno() {}
    public Aluno(String nome, int cr) {
        this.nome = nome;
        this.cr = cr;
    }

    public void exibir(int i) {
        System.err.printf("%d | Nome: %s | CR: %d\n", i, this.nome, this.cr);
    }
}
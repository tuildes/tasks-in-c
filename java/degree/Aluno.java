public class Aluno implements Comparable<Aluno> {
    private String nome;
    private int grr;
    private String materia;

    public Aluno() {}
    public Aluno(String nome, int grr, String materia) {
        this.nome = nome;
        this.grr = grr;
        this.materia = materia;
    }

    public String toString() {
        return this.nome + " - " + this.materia + " - " + this.grr;
    }

    public int compareTo(Aluno a) {
        return this.grr - a.grr;
    }
}
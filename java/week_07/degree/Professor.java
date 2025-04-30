public class Professor {
    private String nome;
    private int grr;

    public Professor() {};
    public Professor(String nome, int grr) {
        this.nome = nome;
        this.grr = grr;
    }

    public int getGrr() {
        return this.grr;
    }

    public String toString() {
        return this.nome + " - " + this.grr;
    }
}
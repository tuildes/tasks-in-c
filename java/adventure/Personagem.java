public abstract class Personagem implements Comparable<Personagem> {
    protected String nome;
    protected int level;
    protected int forca;

    public Personagem() {}
    public Personagem(String nome, int level, int forca) {
        this.nome = nome;
        this.level = level;
        this.forca = forca;
    }

    public String getNome() {
        return this.nome;
    }

    public abstract int calcularDano();

    public int compareTo(Personagem p) {
	     return p.level - this.level;
	}
}
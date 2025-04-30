public class Guerreiro extends Personagem {
    public Guerreiro(String nome, int level, int forca) {
        super(nome, level, forca);
    }

    public int calcularDano() {
        return (this.forca * this.level);
    }
}
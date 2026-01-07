public class Mago extends Personagem {
    public Mago(String nome, int level, int forca) {
        super(nome, level, forca);
    }

    public int calcularDano() {
        return (this.forca * this.level - 10);
    }
}
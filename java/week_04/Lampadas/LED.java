public class LED extends Lampada {
    public int comprimento;

    public LED() {
        this(false, 0);
    }
    public LED(boolean ligado, int comprimento) {
        super(ligado);
        this.comprimento = comprimento;
    }
}

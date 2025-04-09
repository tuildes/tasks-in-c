public class Lampada {
    protected boolean ligado;

    public Lampada() {}
    public Lampada(boolean ligado) {
        this.ligado = ligado;
    }

    public void ligaDesliga() {
        this.ligado = !this.ligado;
    }

    public boolean getLigado() {
        return this.ligado;
    }
}
public class Lampada {
    private boolean ligado;
    
    public Lampada() {}
    public Lampada(boolean ligado) {
        this.setLigado(ligado);
    }

    public void setLigado(boolean ligado) {
        this.ligado = ligado;
    }
    public boolean isLigado() {
        return this.ligado;
    }
}

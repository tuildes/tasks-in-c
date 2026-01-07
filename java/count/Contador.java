package week_02.count;
public class Contador {
    private int contagem;

    public Contador() {
        this.contagem = 0;
    }

    public void setContagem(int c) {
        if(c >= 0) this.contagem = c;
    }
    public int getContagem() {
        return this.contagem;
    }

    public void zerarContador() {
        this.contagem = 0;
    }

    public void incrementarContador() {
        this.contagem += 1;
    }

    public void decrementarContador() {
        if(this.contagem != 0) this.contagem -= 1;
    }
}

public class Tempo {
    private int horas;
    private int minutos;

    public void setHoras(int h) {
        if((h >= 0) && (h <= 60)) this.horas = h;
    }

    public void setMinutos(int m) {
        if((m>= 0) && (m <= 60)) this.minutos = m;
    }

    public int getHoras() {
        return this.horas;
    }

    public int getMinutos() {
        return this.minutos;
    }

    public boolean anterior(int h, int m) {
        if(h < this.horas) return true;
        if((h == this.horas) && (m < this.minutos))
            return true;
        
        return false;
    }

    public String toString() {
        return this.horas + ":"+ this.minutos;
    }
}

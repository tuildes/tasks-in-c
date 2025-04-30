public class Pessoa {
    private String nome;
    private int idade;
    private Data nascimento;

    public Pessoa(String nome, int mes, int ano) {
        this.nome = nome;
        this.nascimento = new Data();
        nascimento.ajustarData(mes, ano);
        this.idade = this.calcularIdade(4, 2025);
    }

    public String getNome() {
        return this.nome;
    }

    public int getIdade() {
        return this.idade;
    }

    public int calcularIdade(int mes, int ano) {
        int idade = 0;
        idade += (ano - this.nascimento.getAno());
        if(this.nascimento.getMes() > mes) idade -= 1;
        return idade;
    }

}

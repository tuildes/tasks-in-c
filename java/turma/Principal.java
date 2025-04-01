public class Principal {
    public static void main(String[] args) {
        Turma turma = new Turma(404, "Rodrigo", new Aluno[]{ 
            new Aluno("Sergio", 0),
            new Aluno("Sergio 2", 144),
            new Aluno("Sergio 3", 255),
            new Aluno("Sergio 4", 777),
        });
        turma.exibir();
    }
}
public class Turma {
    private int codigo;
    private String professor;
    private Aluno[] alunos;

    public Turma() {}
    public Turma(int codigo, String professor, Aluno[] alunos) {
        this.codigo = codigo;
        this.professor = professor;
        this.alunos = alunos;
    }

    public void exibir() {
        System.out.printf("Codigo: %d\nProfessor: %s\n", this.codigo, this.professor);
        for(int i = 0; i < this.alunos.length; i++)
            this.alunos[i].exibir((i + 1));
    }
}
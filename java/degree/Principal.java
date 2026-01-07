import java.util.*;
public class Principal {
    public static void main(String[] args) {
        ArrayList<Aluno> arr = new ArrayList<Aluno>(10);
        LinkedList<Professor> prof = new LinkedList<Professor>();

        for(int i = 0; i < 10; i++)
            arr.add(new Aluno("Julio", i, "Paradigmas"));

        for(int i = 1; i <= 5; i++) 
            prof.add(new Professor("Professor", i));

        System.out.printf("%s\n\n", prof);

        Professor remove = null;
        for(Professor professor: prof) {
            if(professor.getGrr() == 3) {
                remove = professor;
            }
        }

        if (remove != null) {
            prof.remove(remove);
        }

        System.out.printf("%s\n\n", prof);
        
        for(Aluno aluno: arr) {
            System.out.printf("Aluno (%s)\n", aluno.toString());
        }

    }
}
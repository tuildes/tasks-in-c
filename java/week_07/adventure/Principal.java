import java.util.*;
public class Principal {
    public static void main(String[] args) {
        TreeSet<Personagem> arvore = new TreeSet<Personagem>();

        for(int i = 0; i <= 10; i += 2 ) {
            arvore.add(new Guerreiro("Guerreiro", i * 2, 20));
            arvore.add(new Mago("Mago", i, 20));
        }

        for(Personagem p: arvore) {
            System.out.printf("%s - %d\n", p.getNome(), p.calcularDano());
        }
    }
}
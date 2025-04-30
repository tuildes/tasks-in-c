import java.util.Scanner;
public class Principal {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Imovel novo[] = new Imovel[200];
        int preco;

        // Sem parametrico e sem sobrecarga
        for(int i = 0; i < 200; i++) {
            preco = input.nextInt();

            // Casting (coercao) de upcast (especifico -> generico
            // Inclusao - todos os filhos tem sua implementacao
            if(i % 2 == 0)
                novo[i] = new ImovelNovo(new Endereco(), preco);
            else
                novo[i] = new ImovelVelho(new Endereco(), preco);

            if(novo[i] instanceof ImovelNovo) { // Casting (coercao) de downcast (generico -> especifico)
                ImovelNovo temp = (ImovelNovo) novo[i];
                temp.exibir();
            }

            // Inclusao
            System.out.printf("Imovel %d com valor %d\n", i, novo[i].calcularValor());
        }
    }
}
import java.util.Scanner;

public class ehPar {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.printf("Escreva o numero de entrada:");
        int num = input.nextInt();

        if(num % 2 == 0) {
            System.out.printf("Par!\n");
        } else {
            System.out.printf("Impar!\n");
        }
    }
}
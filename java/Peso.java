import java.util.Scanner;
public class Peso {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float peso, altura;

        peso = input.nextFloat();
        altura = input.nextFloat();

        System.out.printf("%f\n", (peso / (altura * altura)));

        input.close();
    }
}
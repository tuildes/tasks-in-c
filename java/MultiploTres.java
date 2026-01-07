// Retorna a soma de [3..30]
public class MultiploTres {
    public static void main(String[] args) {
        int sum = 0;
        for(int j = 1; j <= 10; j++) {
            sum += (j * 3);
        }

        System.out.printf("Soma: %d\n", sum);
    }
}
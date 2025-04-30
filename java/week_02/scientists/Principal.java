public class Principal {
    public static void main(String[] args) {

        Pessoa cientistas[] = new Pessoa[2];

        cientistas[0] = new Pessoa("Ada", 12, 1815);
        cientistas[1] = new Pessoa("Grace", 12, 1906);

        for(int i = 0; i < 2; i++) {
            System.out.printf("%s: %d\n", cientistas[i].getNome(), cientistas[i].getIdade());
        }
    }
}

import java.util.Scanner;

public class teste_Scanner {
    public static void main(String[] args)
    {
        Scanner ner = new Scanner(System.in);

        System.out.println("Dgite seu nome:");
        String nome = ner.nextLine();

        System.out.println("Digite seu numero:");
        String Telefone = ner .nextLine();
        
        System.out.println("Digite a sua rua:");
        String rua = ner.nextLine();

        System.out.println("Digite o numero da sua casa:");
        String numerocasa = ner.nextLine();

        System.out.println("\n-Suas Informacoes pessoais-");
        System.out.println("Nome: " + nome);
        System.out.println("Telefone: " + Telefone);
        System.out.println("Rua: " + rua + "," + numerocasa);

    }
}

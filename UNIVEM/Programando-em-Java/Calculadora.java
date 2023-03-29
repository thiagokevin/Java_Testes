import java.util.Scanner;

public class Calculadora
{
    public static void main(String[] agrs)
    {
        Scanner input = new Scanner(System.in);
        double nu1, nu2, resultado;
        char operador;

        System.out.print("Informe seu primeiro Número:-> ");
        nu1 = input.nextDouble();

        System.out.print("Digite o operador (+,-,*,/):-> ");
        operador = input.next().charAt(0);

        System.out.print("Informe seu segundo Número:-> ");
        nu2 = input.nextDouble();

        switch(operador)
        {
            case '+':
            resultado = nu1 + nu2;
            System.out.println(nu1 + " + " + nu2 + " =\n" + resultado);
            break;

            case '-':
            resultado = nu1 - nu2;
            System.out.println(nu1 + " - " + nu2 + " =\n" + resultado);
            break;

            case '*':
            resultado = nu1 * nu2;
            System.out.println(nu1 + " * " + nu2 + " =\n" + resultado);
            break;

            case '/':
            resultado = nu1 / nu2;
            System.out.println(nu1 + " / " + nu2 + " =\n" + resultado);
            break;


            default:
            System.out.println("Operador Inválido");


        }
        input.close();
    }
}
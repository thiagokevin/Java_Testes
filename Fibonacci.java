public class Fibonacci 
{
    public static void main(String[] agrs)
    {
        int num1 =1, num2 = 1;

        System.out.println(num2);
        System.out.println(num1);




        for(int i = 0; i<8; i++)
        {
            num1 = num1 + num2;
            num2 = num1 - num2;
            System.out.println(num1);
        }
    }
}

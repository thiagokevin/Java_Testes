public class sequencia_fibonacci {
    public static void main(String[] args)
    {
        int n1 = 0, n2 = 1, count = 20, n3;
        System.out.println("-Sequencia de Fibonacci-");
        for (int i=0; i < count; i++)
        {
            if (i==0)
            {
                System.out.println(n1 + " (Impar)\t");
            }else if (i == 1)
            {
                System.out.println(n2 + " (Impar)\t");
            }else
            {
                n3 = n1 + n2;
                n1 = n2;
                n2 = n3;
                if (n3 % 2 == 0)
                {
                    System.out.println(n3 + " (Par)\t");
                }else{
                    System.out.println(n3 + " (Impar)\t");
                }
            }

        }

    }
}

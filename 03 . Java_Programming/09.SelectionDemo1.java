import java.util.Scanner;

class SelectionDemo1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter your age : ");
        iNo = sobj.nextInt();

        if(iNo >= 18)
        {
            System.out.println("You are eligeble candidate for voting");
        }
        else
        {
            System.out.println("You are not an eligeble candidate for voting");
        }

    }
}
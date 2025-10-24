import java.util.Scanner;

class Dynamic
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0;
        int Arr[];

        System.out.println("enter the number of elments :");
        iLength = sobj.nextInt();

        Arr = new int[iLength];

        if(Arr == null)
        {
            System.out.println("Unable to allocate memory");
        }
        else
        {
            System.out.println("Memory gets successsfully allocated");
        }

        Arr = null;
        System.gc();

    }
}
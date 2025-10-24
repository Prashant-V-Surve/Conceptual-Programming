/*
    1st std -> 9
    2nd std -> 10
    3rd std -> 11
    4th std -> 12
    

*/
import java.util.Scanner;

class SelectionDemo2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iStd = 0;

        System.out.println("Enter your Standard: ");
        iStd = sobj.nextInt();

        if(iStd == 1)
        {
            System.out.println("Your Exam at 9am");
        }
        else if(iStd == 2)
        {
            System.out.println("Your exam is at 10 am");
        }
        else if(iStd == 3)
        {
            System.out.println("Your exam is at 11 am");
        }
        else if(iStd == 4)
        {
            System.out.println("Your exam is at 12 noon");
        }
        else
        {
            System.out.println("Invalid Standard");
        }

    }
}
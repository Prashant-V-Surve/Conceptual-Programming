/*
    1st std -> 9
    2nd std -> 10
    3rd std -> 11
    4th std -> 12
    

*/
import java.util.Scanner;

class SwitchDemo
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iStd = 0;

        System.out.println("Enter your Standard: ");
        iStd = sobj.nextInt();

        switch(iStd)
        {
            case 1 :
                System.out.println("Exam at 9 am");
                break;
            
            case 2 :
                System.out.println("Exam at 10 am");
                break;

            case 3 :
                System.out.println("Exam at 11 am");
                break;

            case 4 :
                System.out.println("Exam at 12 noon");
                break;

            default:
                System.out.println("Invalid Standard");    
        }

    }
}
class Base                // 8 byte
{
    public int i;
    public int j;

    public void Fun()
    {
        System.out.println("Inside Fun \n");
    }
}

class Derived extends Base                 // 12 byte
{
    public int x;

    public void Gun()
    {
        System.out.println("Inside Gun \n");
    }
}

class Single
{
    public static void main(String A[])
    {
        Base bobj = new Base();
        Derived dobj = new Derived();

        bobj.Fun();

        dobj.Fun();
        dobj.Gun();
        
    }
}
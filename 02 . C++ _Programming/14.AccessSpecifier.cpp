#include <iostream>

using namespace std;

class Base             //12
{
    public:
        int i;    
    private:
        int j;
    protected:
        int k;

    public:
        Base()
        {
            i = 10;
            j = 20;
            k = 30;
        }

        void Fun()
        {
            cout<<i<<"\n";          //Allowed
            cout<<j<<"\n";          //Allowed
            cout<<k<<"\n";          //Allowed
        }

        

};

class Derived : public Base              //16
{
    public:
        int x;

        void Display()
        {
            cout<<i<<"\n";          //Allowed
            cout<<j<<"\n";          //Disallowed Error 1
            cout<<k<<"\n";          //Allowed
        }
};


int main()
{
    Base bobj;
    Derived dobj;
    
    cout<<bobj.i<<"\n";             //Allowed
    cout<<bobj.j<<"\n";             //DisAllowed Error 2
    cout<<bobj.k<<"\n";             //DisAllowed Error 3

    cout<<dobj.i<<"\n";             //Allowed
    cout<<dobj.j<<"\n";             //DisAllowed error 4
    cout<<dobj.k<<"\n";             //DisAllowed error 5

    dobj.Fun();                     //Allowed
    dobj.Display();                 //Allowed

    return 0;
}











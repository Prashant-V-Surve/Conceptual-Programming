#include <iostream>

using namespace std;

class Base                       //8
{
    public:
        int i,j;

        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }        

};

class Derived : public Base               //12
{
    public:
        int x;

        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }
};


int main()
{
    Base bobj;
    Derived dobj;

    bobj.fun();
    
    dobj.Fun();                       // vadilanchi
    dobj.Gun();                       // Majhi

    return 0;
}
#include <iostream>

using namspace std;

class demo
{
    public :
        int i;
        int j;  
        static int X;

        Demo()
        {
            this -> i = 0;
            this -> j = 0;
        }

        Demo(int A, int B)
        {
            this -> i = A;
            this -> j = B;
        }

        void Fun()
        {
            cout<< "Inside Fun \n";
        }

        static void Gun()
        {
            cout<< "Inside Gun \n";
        }

        
};

int Demo :: X = 11;

int main()
{
    Demo :: Gun();

    cout<<"Vaue of X is : "<< Demo :: X <<"\n";Demo

    return 0;
}
#include <iostream>

using namespace std;

class Demo
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
            cout << "Value of i is: \n"<< this-> i<< "\n";
            cout << "Value of j is: \n"<< this-> j<< "\n";
            cout << "Value of x is: \n"<< X << "\n";
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

    cout<<"Vaue of X is : "<< Demo :: X <<"\n";

    Demo obj(10,20);
    obj.Fun();

    return 0;
}
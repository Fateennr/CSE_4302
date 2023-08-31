#include<iostream>

using namespace std;

class Calculator
{
    private:

    public:

    int field;

    int getValue()
    {
        int inp;
        cin>>inp;
        
        return inp;
    }
    void setValue(int val)
    {
        field = val;
        cout<<"Calculator Display: "<<field * val<<endl;

    }
    Calculator()
    {
        field = 0;
    }
    Calculator(int val)
    {
        field = val;
    }
    void add( int Value )
    {
        field += Value;
        display();
    }
    void subtract( int Value )
    {
        field -= Value;
        display();
    }

    void multiply( int Value )
    {
        field *= Value;
        display();
    }

    void divideBy( int Value )
    {
        if(Value == 0)
        {
            cout<<"Error : divide by 0 is undefined."<<endl;
            display();
            return;
        }

        field /= Value;
        display();

    }
    void clear()
    {
        field = 0;
        display();

    }
    void display()
    {
        cout<<"Calculator Display: "<<field<<endl;

    }
    ~Calculator()
    {
        field =0;
        display();
        cout<<"Calculator Object is destroyed"<<endl;
    }

};


int main()
{
    Calculator c1(5);
    // c1.display();
    c1.add(10);
    // c1.display();
    c1.subtract(18);
    // c1.display();
    c1.multiply(2);
    // c1.display();
    c1.divideBy(3);
    // c1.display();



    return 0;
}
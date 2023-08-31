#include<iostream>

using namespace std;

class BankAccount
{
    private:
    
    int Account_number;
    string Acc_holdername;
    string Acc_type;
    float currBalance;
    float minBalance;


    public:
    int interest;

    BankAccount()
    {
        Account_number = 0;
        Acc_holdername ="";
        Acc_type ="";
        currBalance = 0;
        minBalance = 1000;
        interest = 3;
    }

    BankAccount(int val)
    {
        interest = val;
    }

    void FeedInfo()
    {
        cout<<"Enter Account Number: ";
        cin>>Account_number;
        cout<<"Enter Name: ";
        cin>>Acc_holdername;
        cout<<"Enter Type: ";
        cin>>Acc_type;
        cout<<"Enter minBalance: ";
        cin>>minBalance;

    }
    int giveInterest()
    {
        int val;
        cout<<"Give an interest amount: "<<endl;
        cin>>val;

        return val;
    }
    void deposit( float Value )
    {
        if(Value < 0)
        {
            cout<<"Invalid deposit amount"<<endl;
            return;
        }
        currBalance += Value;
        ShowBalance();
    }
    void withdrawal( float Value )
    {
        if(Value < 0)
        {
            cout<<"Invalid wothdrawal amount"<<endl;
            return ;
        }
        float m = currBalance -=  Value;
        
        if(m <= 0)
        {
            currBalance = 0;
        }
        ShowBalance();
    }
    void ShowBalance()
    {
        cout<<"The Current Balance is: "<<currBalance<<endl;

    }
    ~BankAccount()
    {
        cout<<"Account of "<<Acc_holdername<<" with account no "<<Account_number<<" is destroyed with a balance BDT"<<currBalance<<endl;
    }

};

int main()
{
    BankAccount b1;
    b1.FeedInfo();
    b1.ShowBalance();
    return 0;
}

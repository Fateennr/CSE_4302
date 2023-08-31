#include<iostream>

using namespace std;

class ZooAnimal
{
    private:
    
    int birthYear;
    int cageNumber;
    string nameOfAnimal;
    float weight;
    int height;


    public:
    int Age;

    ZooAnimal()
    {
        nameOfAnimal ="";
        birthYear = 0;
        cageNumber = 0;
        weight = 0;
        height = 0;
    }

    void getAge()
    {
        int Age1;
        cout<<"Enter Age: ";
        cin>>Age1;

        Age = Age1;

    }
    string getName()
    {
        string Name1;
        cout<<"Enter Name: ";
        cin>>Name1;

        return Name1;
    }
    void setName()
    {
        nameOfAnimal = getName();
    }


    int getBirthyear()
    {
        int birth;
        cout<<"Enter Birthyear: ";
        cin>>birth;

        return birth;
    }
    void setBirthyear()
    {
        nameOfAnimal = getBirthyear();
    }

    int getCagenum()
    {
        int cage;
        cout<<"Enter Cagenum: ";
        cin>>cage;

        return cage;
    }
    void setCagenum()
    {
        nameOfAnimal = getCagenum();
    }

    void displayInfo()
    {
        cout<<"nameOfAnimal: "<<nameOfAnimal<<endl;
        cout<<"Birth Year: "<<birthYear<<endl;
        cout<<"Cage Number: "<<cageNumber<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Height: "<<height<<endl;
    }

    ~ZooAnimal()
    {   
        cout<<"nameOfAnimal: "<<nameOfAnimal<<endl;
        cout<<"Birth Year: "<<birthYear<<endl;
        cout<<"Cage Number: "<<cageNumber<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Height: "<<height<<endl;
    }

};

int main()
{
    ZooAnimal b1;
    b1.FeedInfo();
    b1.ShowBalance();
    return 0;
}
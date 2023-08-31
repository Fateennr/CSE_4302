#include<iostream>

using namespace std;

class Plane
{
    private:
    
    string Flight_number;
    string Destination;
    float Distance;
    float MaxFuelCapacity;

    double CalFuel()
    {
        if(Distance<=1000)
        {
            fuel+= 500;
        }else if(Distance>1000 && Distance<=2000)
        {
            fuel+= 1100;
        }else{
            fuel += 2200;
        }

        return fuel;
    }

    public:

    int fuel;

    Plane()
    {
        fuel = 0;
        Flight_number ="";
        Destination ="";
        Distance =0;
        MaxFuelCapacity =0;
    }

    void FeedInfo()
    {
        cout<<"Enter Flight Number: ";
        cin>>Flight_number;
        cout<<"Enter Destination: ";
        cin>>Destination;
        cout<<"Enter Distance: ";
        cin>>Distance;
        cout<<"Enter MaxFuelCapacity: ";
        cin>>MaxFuelCapacity;

    }
    void ShowInfo()
    {
        cout<<"Flight Number: "<<Flight_number<<endl;
        cout<<"Destination: "<<Destination<<endl;
        cout<<"Distance: "<<Distance<<endl;
        cout<<"MaxFuelCapacity: "<<MaxFuelCapacity<<endl;

        float currentfuel = CalFuel();

        if(currentfuel > MaxFuelCapacity)
        {
            cout<<"Not sufficient Fuel Capacity for this flight"<<endl;
        }
        else{
            cout<<"Fuel Capacity is fit for this flight distance"<<endl;
        }

    }

};


int main()
{
    Plane p1;
    p1.FeedInfo();
    p1.ShowInfo()



    return 0;
}
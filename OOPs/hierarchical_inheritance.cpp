
#include<iostream>
#include<string>
using namespace std;


class Vehicle{
    public:
    int topSpeed;
    float mileage;
    string fuel;
};

class TwoWheeler : public Vehicle {
    public:
    int helmet;
};

class ThreeWheeler: public Vehicle{
    public:
    int passengers;
};

class FourWheeler : public Vehicle{
    public:
    int seatBelt;
};


int main(){
    TwoWheeler b1;
    b1.topSpeed = 180;
    b1.mileage = 20;
    b1.fuel = "x";
    b1.helmet = 2;

    ThreeWheeler b2;
    b2.topSpeed = 80;
    b2.mileage = 20;
    b2.fuel = "y";
    b2.passengers = 76 ;

     FourWheeler b3;
    b3.topSpeed = 80;
    b3.mileage = 20;
    b3.fuel = "z";
    b3.seatBelt = 76 ;


    cout << b1.topSpeed << " " << b1.mileage << " " << b1.fuel<< " " << b1.helmet<< endl;
    cout << b2.topSpeed << " " << b2.mileage << " " << b2.fuel<< " " << b2.passengers<< endl;
    cout << b3.topSpeed << " " << b3.mileage << " " << b3.fuel<< " " << b3.seatBelt<< endl;
}



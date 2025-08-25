#include<iostream>
using namespace std;
class Scooty{      /// parent class
    public:
    int topSpeed;
    float mileage;
    int bootSpace;
};

class Bike: public Scooty{    // inheritance from scooty, child class
    public:
    int gears;
};

int main(){
    Bike b1;
    b1.topSpeed = 180;
    b1.mileage = 12.5;
    b1.gears = 6;
    b1.bootSpace = 9;

    cout << "Bike details:" << endl;
    cout << "Top Speed: " << b1.topSpeed << " km/h" << endl;
    cout << "Mileage: " << b1.mileage << " km/l" << endl;
    cout << "Gears: " << b1.gears << endl;
    cout << "BootSpace: " << b1.bootSpace << endl;

 return 0;
}
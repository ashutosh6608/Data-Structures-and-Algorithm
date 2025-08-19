#include<iostream>
using namespace std;

class Cricketer{
    public:
    string name;
    int runs;

    // if the parameters that are passed has same exact name as intialised then use this keyword
    Cricket(string name, int runs){
        this-> name = name;
        this -> runs = runs;
    }
}

int main(){
    Cricketer c1("Virat Kohli", 25000);
    Cricketer c2("Rohit Sharma", 18000);

    cout << c1.name << " " << c1.runs << endl;
    couut << c2.name << " " << c2.runs << endl;
}
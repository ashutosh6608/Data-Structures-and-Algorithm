

// compile time polymorphism   
// FUNCTION OVERLOADING ...


// function overloading means we put different no or 
// differnet type parameters in function which has same name .
#include<iostream>
using namespace std;
class Loading{
    public:

    void Sum(string a, string b){
      cout << a+b << endl;
    }

    void Sum(int a, int b){
        cout << a+b << endl;
    }

    void Sum(int a, int b){
        cout << a + b + c << endl;
    }

};
    int main() {
    Loading a;
    a.Sum(5,8);
    a.Sum(5,8,9);
    a.Sum("Raghav", "Sanjay");
}

/// FUNCTION OVERRIDING //////////

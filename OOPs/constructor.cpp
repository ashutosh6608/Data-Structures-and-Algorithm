#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int RollNo;
    float Cgpa;

    // default constructor
    Student() {
        name = "";
        RollNo = 0;
        Cgpa = 0.0;
    }

    // parameterized constructor
    Student(string N, int R, float Cg) {
        name = N;
        RollNo = R;
        Cgpa = Cg;
    }
};

int main() {
    // parameterized way
    Student A("Ashutosh", 117, 8.69);

    // normal way
    Student B;
    B.name = "Ashutosh";
    B.RollNo = 117;
    B.Cgpa = 8.69;

    // printing values
    cout << A.name << " " << A.RollNo << " " << A.Cgpa << endl;
    cout << B.name << " " << B.RollNo << " " << B.Cgpa << endl;

    return 0;
}

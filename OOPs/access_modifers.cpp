#include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    string name;
    Student ( int r, string n , float m){
        rollno = r;
        name = n;
        marks = m;
    }

    // getter function to get the marks
    float getMarks(){                     // getter
        return marks;
    }

    // setter function to set the marks
    void setMarks(float m){               // setter 
        marks = m
    }
   
   private:
   float marks;
    
};

int main() {
    Student s1(117 , "Ashutosh" , 8.69);
    cout << s1.getMarks() << endl;

    s1.getMarks(98.5); 
    
    
   
    
    
}
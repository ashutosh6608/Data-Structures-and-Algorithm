# include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int RollNo;
    float Cgpa;

};

void print(Student D){
    cout << D.name << "\n" << D.Cgpa << "\n" << D.RollNo << endl;
}


int main(){
  

  Student B;
  B.name = "Shubham";
  B.RollNo = 217;
  B.Cgpa = 8.7; 

  Student C;
  C.name = "Isha";
  C.RollNo = 317;
  C.Cgpa = 8.8; 



  print(B);
  print(C);
}
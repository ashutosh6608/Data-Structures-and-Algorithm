#include<iostream>
using namespace std;

class Cricketer{
    public:
    int runs;
    int wickets;
    int average;
};

class Engineer{
    public:
    int experience;
    string domain;
};

class Hero : public Engineer, Cricketer {// multiple inheritance
  public:
  int acting;
};


int main(){

}
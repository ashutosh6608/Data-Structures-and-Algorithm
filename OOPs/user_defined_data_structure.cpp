#include<iostream>
usinhg namespace std;

class Vector{
    public:
     int size;
     int capacity;
     int *arr;
     Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
     }

     void add(int element){
        if(size == capacity){
            capacity += 2;
            int* arr2 = new int[capacity];
            for ( int i = 0; i < size; i++){
                arr2[i] = arr[i];
            }
             arr = arr2;
        }
        arr[size] = element;
        size++;
     }

     void print(){
        for ( int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
     }
};



int main(){
    Vector v;
    v.add(10);   
    v.print();
    cout << v.size << endl;
}
   
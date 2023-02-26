#include <iostream>
using namespace std;


class ParantClass1{
    public:
    int number1=10;

    void function1(){
        cout << "function1" << endl;
    } 
};

class ParantClass2{
    public:
    int number2=20;

    void function1(){
        cout << "finction2" << endl;
    }
};

class ChildClass:public ParantClass1 , public ParantClass2{
    public:
    
    void function3(){
        cout << "function3" << endl;
    }
};



int main(){
    ChildClass obj1;
    obj1.ParantClass1::function1(); 


    cin.get();
    return 0;
}
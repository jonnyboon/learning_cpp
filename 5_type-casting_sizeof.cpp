//playing with typecasting and sizeof

#include <iostream>

using namespace std;

int main(){

    float foo = 5.234;
    int fooInt;

    cout << sizeof(foo) << endl;


    cout << foo << endl;

    //some type casting, 
    //Note: variable foo also changes  
    fooInt = (int) foo;

    cout << fooInt << endl;

    //return the size in bytes of a variable or a type

    cout << sizeof(fooInt) << endl;
    cout << sizeof(foo) << endl;

    cin.ignore();
    return 0;
}
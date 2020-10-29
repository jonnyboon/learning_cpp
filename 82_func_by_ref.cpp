//passing function arguments by reference 

#include <iostream>

using namespace std;

void doStuff(int &a, int &b){

    int temp;
    temp = a;

    cout << temp << " " << b << endl; 

    b = 65; //value of y will be changed

}


int main(int argc, char** argv){

    //cout << argv[1] << endl;

    int x, y;

    x =10;
    y =15;

    doStuff(x,y);

    cout << x << " " << y << endl; 


    return 0;
}
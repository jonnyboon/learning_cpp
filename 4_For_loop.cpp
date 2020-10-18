//learning again how to use the for loop

#include <iostream>

using namespace std;

int main (){

    int k;
    int m =2;
    int sum;
    //endless loop
    //for (;;){do something forever;}


    for (k=1; k < 5; k++){
        m *=2;
        cout << m << endl;
    }


    cin.ignore();
    return 0;
}
#include <iostream>

using namespace std;

int sum(int a,int b){
    return (a+b);
}

int main(){

    cout << sum(5,6) << endl;

    putchar('a');
    putchar('\0');

    cout << endl;

    return 0;
}
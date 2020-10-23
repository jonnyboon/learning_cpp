#include <iostream>

using namespace std;

//call by value function
int sum(int a,int b){
    return (a+b);
}

int main(int argc, char **argv){

    cout << sum(5,6) << endl;

    putchar('a');
    putchar('\0');

    cout << endl;

    return 0;
}
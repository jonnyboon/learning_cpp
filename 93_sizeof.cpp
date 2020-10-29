//used to play from 
//https://security.stackexchange.com/questions/95245/security-implications-of-neglecting-the-extra-byte-for-null-termination-in-c-c

#include <iostream>

using namespace std;


int main(int argc, char **argv){

    char a[16];
    int b[32];


    cout << "size of a: " << sizeof(a) << endl;
    cout << "size of b: " << sizeof(b) << endl;

    return 0;
}


//used to play from 
//https://security.stackexchange.com/questions/95245/security-implications-of-neglecting-the-extra-byte-for-null-termination-in-c-c

#include <iostream>

using namespace std;


int main(int argc, char **argv){

    char a[16];

    char b = argv [1];
        
    strncpy(a, "0123456789abcde", sizeof(a)); //string not 0x00 terminated

    cout << "a size is " << sizeof(a) << endl;
    cout << "a is " << a << endl;

    cin >> a;

    cout << "overflown a: " << a << endl;

    return 0;
}


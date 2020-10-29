//used to play from 
//https://security.stackexchange.com/questions/95245/security-implications-of-neglecting-the-extra-byte-for-null-termination-in-c-c

#include <iostream>

using namespace std;

void use_a (char *a){
    int a_len = 0;
    char new_a[16];

    a_len = strlen(a); //strlen continues to count until it reaches 0x00...

    cout << a_len << endl;
    
    strncpy(new_a,a,a_len);
    cout << new_a << endl;
}

void even_worse(char *a, char *new_a) {
    int a_len = 0;
    char new_array[16];
 
    //get "false" array length
    a_len = strlen(a);

    cout << "strlen1 " << a_len << endl;
    
    //copy input array into buffer
    strncpy(new_array, a, a_len);

    cout << "strlen2 " << a_len << endl;

    // compy buffered array into new input variable  
    strncpy(new_a, new_array, a_len);

    cout << new_a << endl;


}

int main(int argc, char **argv){

    char a[16];
    char new_a[16];

    strncpy(a, "0123456789abcdef", sizeof(a)); //string not 0x00 terminated

    cout << "a is " << a << endl;

    //use_a(a);

    even_worse(a, new_a);

    return 0;
}


#include <iostream>

using namespace std;

int main(){

    int *pointer_to_int , *new_pointer_to_int;
    int x = 5;

    cout << "Adress of pointer_to_int: " << &pointer_to_int << endl;
    cout << "Adress of new_pointer_to_int: " << &new_pointer_to_int << endl;
    cout << "Adress pointer_to_int is pointing at: " << &pointer_to_int << endl;
    cout << "Adress new_pointer_to_int is pointing at: " << &new_pointer_to_int << endl;
    cout << "Hence it can be seen that after initialization without assignement \n\r";
    cout << "the pointers are pointing at themselves \n\r"<< endl;
    
    cout << "Adress of variable: " << &x << endl;
    
    pointer_to_int = &x;

    cout << "Adress of pointer_to_int after pointing to variable: " << &pointer_to_int << endl;
    cout << "Adress pointer_to_int is pointing at after assignment: " << pointer_to_int << endl;
    cout << endl;
    cout << "Value of variable pointed by pointer_to_int: " << *pointer_to_int << endl;
    
    new_pointer_to_int = pointer_to_int;  

    cout << "Adress of new_pointer_to_int: " << &new_pointer_to_int << endl;
    cout << "Adress new_pointer_to_int is pointing at: " << new_pointer_to_int << endl;

    *new_pointer_to_int = 10;

    cout << *pointer_to_int << endl;
    cout << *new_pointer_to_int << endl;

    return 0;
}
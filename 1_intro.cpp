#include <iostream>

using namespace std;


int main(){

int user_var;

int initial_var = 3424;

cout << "Value of the global variable has changed " << initial_var << endl;
cout << "Please enter a new value: "<< endl;
cin >> user_var;

cout << "Value of the global variable has changed " << user_var;
cout << " and the new value is " << ++user_var  << endl;

cin.ignore();
cout << "Press enter to exit";
cin.ignore();

return 0;
}

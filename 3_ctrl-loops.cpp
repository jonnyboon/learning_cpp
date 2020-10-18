//in here I learn how to define control loops

#include <iostream>
using namespace std;

int main(){

int inUsrVar;

cout << "Please enter some integer value" << endl;

do{
    cin >> inUsrVar;
    if (inUsrVar == 100){
        cout << "Success! You guessed: " << inUsrVar << endl;
        break;        
    }
    else if (inUsrVar < 100){
        cout << "Try higher  " << endl;
    }
    else {
        cout << "Try lower"<< endl;
    }
}while (inUsrVar != 100);

cin.ignore();
return 0;
}

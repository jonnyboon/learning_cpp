//outputs the number of odd and even numbers

#include <iostream>

using namespace std;

int main(){

    int number;
    int odds =0;
    int evens =0;

    cout << "input any number" << endl;
    cin >> number;

    for (int i=1; i <= number; i++){

        cout << i <<  " " ;

        if ((i % 2)==0){
            ++evens;
            continue;
        }

        ++odds;

    }
    cout << endl;

    cout << "Evens: " << evens << endl;
    cout << "Odds: " << odds << endl;

    cin.ignore();
    return 0;
}
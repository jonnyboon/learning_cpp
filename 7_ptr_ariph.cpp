#include <iostream>

using namespace std;

int main(){

    int somenumarray[5];
    int *ptr = somenumarray;

    int v =2;
    //incrementing pointer with ptr++ to the size of its declaration
  /*  for (;ptr < &somenumarray[5]; ptr++){
        *ptr =v;
        v *= 2;
        cout << *ptr << " ";
    }
    cout << endl;
*/

    int i;
    for (i=0; i<5; i++){
        somenumarray[i] = 5;
        cout << somenumarray[i] << " ";
    }
    cout << endl;

    //example of leaving the array bounds 
    for (int k; k <10;k++){
        cout << *ptr << " ";
        ptr++;
    }



    return 0;
}
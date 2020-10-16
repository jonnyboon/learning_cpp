#include <iostream>

using namespace std;

int main(){

    //hex numbers can be written like so 
    int x = 0x7B;
    //binary may be like so
    int biny = 0b10;


    cout << x << endl;
    cout << biny << endl;
    
    //lets shift the binary a bit
    int binshift = biny << 1;
    cout << binshift << endl;
    //let do XOR comparison
    int binxor = 0b0101 ^ 0b1111;
    cout << binxor << endl;


cin.ignore();
return 0;
}

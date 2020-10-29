//directory crawler

#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
    FILE * pFile;
    char somepath[] = "sample.txt";
    cout << somepath << endl;

    pFile = fopen(somepath,"w");

    if (pFile != NULL){
        cout << "writing to file" << endl;
        fputs("fopen exmapasdfasdfle\0",pFile);
        fclose(pFile);
    }




    return 0;
}
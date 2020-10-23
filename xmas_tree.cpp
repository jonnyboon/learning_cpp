//print xmas tree with as many levels as user inputs

#include <iostream>
using namespace std;

int main(){

    int numLevels;
    int padding;
    int initStar = 1;
    char space = ' ';
    char star = '*';
    int numStars;
    int prevLevelStars = 1;
    int maxStars;
    int cumStars;

    cout << "please input the number of levels for xmas tree (max 40)" << endl;
    
    //check if level number makes sense
    do{   
        cin >> numLevels;
        if (numLevels > 40) {
            cout<< "your number of levels is too big. Try again!" << endl;
            }
        else if (numLevels <=0){
            cout << "number of levels must be positive. Try again!" << endl;
            }
    }while ((numLevels > 40) || (numLevels<=0));

    //maximum amount of stars
    maxStars = 2 * numLevels - 1; 

    
    for (int currentLevel = 1; currentLevel <= numLevels;currentLevel++){

        //calculate number of stars in the level
        if (currentLevel > 1){ 
            numStars = prevLevelStars + 2;
            prevLevelStars = prevLevelStars + 2;
            }
        else {
            numStars = prevLevelStars;
        }

        cumStars += numStars;

        //calculate padding needed in each new level before the first star
        padding = (maxStars-numStars)/2;

        //insert padding before the stars
        for (int k = 1; k <= padding; k++){
            cout << space; 
        }

        //insert number of stars according to the level

        for (int s = 1; s <= numStars; s++){
            cout << star; 
        }

  
        cout << endl;
       
    }

    cout << "There you go! A beatiful XMAS tree with " << numLevels << " levels";
    cout << " and " << cumStars << " stars.";
    cin.ignore();
    return 0;
}
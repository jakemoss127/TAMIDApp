//JAKE MOSS ---- WELCOME TO MY TAMID APPLICATION :)

#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm> //So we can easily use the reverse function
using namespace std;

bool isPalindrome(string s){ //Simply reverse the string and clarify if we have a palindrome

    string temp = s;
    reverse(s.begin(), s.end()); //Reverses the string
    if(temp == s) //Verify
        return true;
    else
        return false;
} //Since the question did not clarify capitalization: I will assume that characters MUST BE equivalent
  //For example 'W' != 'w', to capitalize would be a simple fix, just compare both strings as all lowercase /uppercase


void boxStrings(vector<string> stringVec){
    int maxLength = 0; //In order to get the dimensions of the box, we need the largest string.

    for(string s: stringVec) {
        if (s.length() >= maxLength) {
            maxLength = s.length(); //Finds the maximum length of the string
        }
    }

    for(int i = 0; i < maxLength + 2; i++){ //Add two to the length in order to create the box structure.
        cout << "*"; //Prints the top line
    }
    cout << "\n";

    for(string s : stringVec){ //For each string in the vector...
        cout << "*" << s; //Always have a star for the left column
        if(s.length() != maxLength){ //See if it is not the largest string in the list.
            for(int i = 0; i < maxLength - s.length(); i++){
                cout << " "; //Will print the amount of spaces needed to equal the largest.
            }
            cout << "*" << endl; //Prints the rightmost * in a column
        }
        else{
            cout << "*" << endl; //If it is the largest string, just append * to add the right column
        }
    }

    for(int i = 0; i < maxLength + 2; i++){
        cout << "*"; //Prints the bottom line
    }
    cout << "\n"; //Add spacing for neatness
}


/*int main(){
    int keepRunning = 1;

    //BELOW IS NOT PERFECT*** I CREATED THIS JUST TO TEST MY FUNCTIONS!

    while(keepRunning > 0){  //While we have a valid choice.
        cout << "Welcome to the TAMID Prject Center:\nTo get started, choose an activity below\n" << endl;
        cout << "0. Exit\n1. Find a palindrome.\n2. Box strings.\nEnter Choice:  ";
        int choice;
        cin >> choice;
        if(choice == 1) {
            cout << "Please enter a string:  ";
            string newS;
            cin >> newS;
            if (isPalindrome(newS)) {
                cout << "\n\"" + newS + "\" is a palindrome!\n" << endl;
            } else {
                cout << "\n\"" + newS + "\" is not a palindrome!\n" << endl;
            }
        }
        else if(choice == 0){
            cout << "Goodbye!" << endl;
            keepRunning = 0;
        }
        else if(choice == 2){
            cout << "\nHow many strings to be boxed? ";
            int num;
            cin >> num;
            string input;
            vector<string> stringVec;

            for(int i = 0; i < num; i++) {
                cout << "Enter a string: ";
                cin >> input;
                stringVec.push_back(input);
                input = "";
            }

            cout << "\nPrinting the boxed list!\n\n";
            boxStrings(stringVec);
            cout << "\n";
        }
    }
    return 0;
}*/

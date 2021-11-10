#include<iostream>

using namespace std;

int main(){
    char sentence[101];
    char preChar = ' ';

    // Prompt user to input sentence
    cout << "Enter a sentence: " << endl;
    // Get user input
    cin.getline(sentence, 101);
    // set all letters to lowercase
    int i = 0;
    while(sentence[i] != '\0'){
        sentence[i] = tolower(sentence[i]);
        i++;        
    }
    // Set first char to uppercase
    sentence[0] =  toupper(sentence[0]);
    // Set last char to period
    if(i<101 && sentence[i-1] != '.'){
        sentence[i] = '.';
    }
    cout << "The sentence you entered is: " << sentence << endl;
}
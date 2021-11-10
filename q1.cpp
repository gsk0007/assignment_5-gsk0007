#include<iostream>

using namespace std;

int main(){
    // variables
    char sentence[101];
    char preChar = ' ';
    bool isChanged = false;
    int i = 0;

    // Prompt user to input sentence
    cout << "Enter a sentence: " << endl;
    // Get user input
    cin.getline(sentence, 101);

    // check for too many spaces
    do{
        while(sentence[i] != '\0'){
            if (sentence[i] == ' ' && sentence[i+1] == ' '){
                for(int k = i+1; k < 101; k++){
                    sentence[k] = sentence[k+1];
                }
                isChanged = true;
            } else {
                isChanged = false;
            }
        }
    } while (isChanged = true);
    
    // set all letters to lowercase
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
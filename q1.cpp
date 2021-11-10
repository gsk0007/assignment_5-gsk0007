#include<iostream>

using namespace std;

int main(){
    // variables
    char sentence[101];
    char preChar = ' ';
    bool isChanged = true;
    int i = 0;
    int k = 0;

    // Prompt user to input sentence
    cout << "Enter a sentence: " << endl;
    // Get user input
    cin.getline(sentence, 101);

    // check for multiple spaces
    for(k = 0; k < 101; k++)
    {
        if(isspace(sentence[k]) && isspace(sentence[k+1]))
        {
            while(isspace(sentence[k]) && isspace(sentence[k+1]))
            {
            for(i=k+1; i<101; i++)
            {
                    sentence[i]=sentence[i+1];
            }
            }

        }
    }

    // set all letters to lowercase
    i=0;
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
    cout << "The sentence you entered is: ";
    for(int j = 0; j<=i ; j++){
        cout << sentence[j];
    }
    cout << endl;
}
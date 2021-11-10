#include <iostream>
using namespace std;

int main()
{
    char sentence[101];
    int i = 0, count = 0;
    // Prompt user for input
    cout << "Please enter a sentence to be modified: " << endl;
    // Get input
    cin.getline(sentence, 100);
    // Loop through sentence and check for 4 letter words
    // If the word is 4 letters long, check for capitalization
    // replace word with Love or love based on capitalization
    while (sentence[i] != '\0')
    {
        // Check if the character is a letter and icrement count
        if (isalpha(sentence[i]))
        {
            count++;
        }
        else
        {
            // Check if the word is 4 letters long
            if (count == 4)
            {
                if ((sentence[i - 4] >= 'A') && (sentence[i - 4] <= 'Z'))
                {
                    sentence[i - 4] = 'L';
                }
                else
                {
                    sentence[i - 4] = 'l';
                }
                sentence[i - 3] = 'o';
                sentence[i - 2] = 'v';
                sentence[i - 1] = 'e';
            }
            // Once word has been replaced, reset count
            count = 0;
        }
        i++;
    }
    // Print modified sentence
    cout << sentence << endl;
}
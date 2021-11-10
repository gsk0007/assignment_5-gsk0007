#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // initialize file object
    ifstream file("answers.txt");
    // string to hold each line and temp array for ignored answers
    string line;
    char temp[255];
    // Check if file is open
    if (!file.is_open())
    {
        cout << "File not found" << endl;
        exit(1);
    };

    // if file is open, prompt user to input a question
    // All questions are ignored and the program will output an answer from the file
    // Once the end of the file is reached, the file is closed, the stream eof() flag
    // is reset and then the file is opened again and the loop is repeated until the
    // user decides to exit the program
    while (true)
    {
        while (!file.eof())
        {
            cout << "Ask a question, any question:" << endl;
            cin.getline(temp, 265);
            getline(file, line);
            cout << line << endl;
            cout << "Do you want to ask another question? (y/n)" << endl;
            cin.getline(temp, 255);
            if (temp[0] == 'n' || temp[0] == 'N')
            {
                return (0);
            }
        }
        // close file and reset eof flag
        file.close();
        file.clear();
        // open file again
        file.open("answers.txt");
    }
}
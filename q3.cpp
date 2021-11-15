#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//________________Function Prototypes__________________
void sort(vector<int> &v);

int main()
{
    // create input and output stream objects
    ifstream input1("file1.txt"),
        input2("file2.txt");
    ofstream output("file3.txt");
    // Validate that input files exist
    if (!input1 || !input2)
    {
        cout << "Error opening input file" << endl;
        return(1);
    }
    // Create vector to hold values from files
    vector<int> outputVector;

    // Read values from files and store in vector
    while (!input1.eof())
    {
        int value;
        input1 >> value;
        outputVector.push_back(value);
    }
    while (!input2.eof())
    {
        int value;
        input2 >> value;
        outputVector.push_back(value);
    }

    // Sort vector
    sort(outputVector);

    // Write values to output file
    for (int i = 0; i < outputVector.size(); i++)
    {
        output << outputVector[i] << endl;
    }

    input1.close();
    input2.close();
    output.close();
    return 0;
}

//__________________Funtion Definitions__________________
void sort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] > v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}
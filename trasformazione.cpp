#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream fileInput("maggio.txt");
    ofstream fileOutput("output.txt");

    string riga;
    int verso = 1;

    while (getline(fileInput, riga))
    {
        if (riga == "")
        {
            fileOutput << "\n";
        }
        else if(verso < 10)
        {
            fileOutput << verso << "   - " << riga << "\n";
        }
        else if(verso < 100)
        {
            fileOutput << verso << "  - " << riga << "\n";
        }
        else
        {
            fileOutput << verso << " - " << riga << "\n";
        }
        verso++;
    }

    fileInput.close();
    fileOutput.close();
}

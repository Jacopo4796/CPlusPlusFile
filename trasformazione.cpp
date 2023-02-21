#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream fileInput("maggio.txt");
    ofstream fileOutput("output.txt");

    string riga;

    int fila = 1;

    while (getline(fileInput, riga))
    {
        if (riga != "")
        {
            fileOutput << fila << " - " << riga << "\n";
            fila++;
        }
    }

    fileInput.close();
    fileOutput.close();
}

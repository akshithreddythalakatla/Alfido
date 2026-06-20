#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("data.txt");

    if (!outFile) {
        cout << "Error creating file" << endl;
        return 1;
    }

    outFile << "Hello from Alfido Internship Task 3" << endl;
    outFile.close();

    ifstream inFile("data.txt");

    if (!inFile) {
        cout << "Error opening file" << endl;
        return 1;
    }

    string line;
    cout << "Reading file content:" << endl;

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
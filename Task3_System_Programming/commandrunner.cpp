#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Running system command..." << endl;

    int result = system("dir");

    if (result == 0)
        cout << "Command executed successfully" << endl;
    else
        cout << "Error running command" << endl;

    return 0;
}
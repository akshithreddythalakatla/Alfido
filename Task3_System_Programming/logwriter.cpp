#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main() {
    ofstream logFile("app.log", ios::app);

    if (!logFile) {
        cout << "Error opening log file" << endl;
        return 1;
    }

    time_t now = time(0);

    logFile << "Log Entry: " << ctime(&now);

    logFile.close();

    cout << "Log written successfully" << endl;

    return 0;
}
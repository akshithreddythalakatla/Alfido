#include <iostream>
using namespace std;

int main() {
    int profit[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int capacity = 50;

    float ratio[3];

    for (int i = 0; i < 3; i++)
        ratio[i] = (float)profit[i] / weight[i];

    float totalProfit = 0;
    int remaining = capacity;

    for (int i = 0; i < 3; i++) {
        if (weight[i] <= remaining) {
            totalProfit += profit[i];
            remaining -= weight[i];
        }
    }

    cout << "Maximum profit = " << totalProfit << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> tasks(m);
    
    for (int i = 0; i < m; ++i) {
        cin >> tasks[i];
    }

    long long time = 0;
    int currentHouse = 1;

    for (int i = 0; i < m; ++i) {
        int nextHouse = tasks[i];
        
        // If the next task's house is ahead or same in the clockwise direction
        if (nextHouse >= currentHouse) {
            time += nextHouse - currentHouse;
        } 
        // If the next task's house is behind in the clockwise direction (loop around)
        else {
            time += n - (currentHouse - nextHouse);
        }

        // Move to the next house
        currentHouse = nextHouse;
    }

    cout << time << endl;
    return 0;
}

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n, numQuitters;
    cin >> n;
    unordered_map<int, bool> quitters;
    vector<int> queue;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        queue.push_back(temp);
    }
    cin >> numQuitters;
    for (int i = 0; i < numQuitters; i++) {
        int temp;
        cin >> temp;
        quitters[temp] = true;
    }
    bool frist = true;
    for (int i = 0; i < queue.size(); i++) {
        int current_id = queue[i];
        if (quitters.count(current_id) == 0) {
            if (!frist) {
                cout << " ";
            }
            cout << current_id;
            frist = false;
        }
    }

    cout << endl;

    return 0;
}
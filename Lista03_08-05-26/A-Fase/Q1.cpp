#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int hasPassed (vector<int> points, int min) {
    vector<int> highestPoints;
    int ans = 0;

    while (ans < min) {
        int max = *max_element(points.begin(), points.end());
        for (int i = 0; i < points.size(); i++) {
            if (points[i] == max) {
                highestPoints.push_back(points[i]);
                points[i] = 0;
                ans += 1;
            }
        }
    }
    return ans;
}

int main() {
    int qtd, min;
    cin >> qtd >> min;
    vector<int> points;

    for (int i = 0; i < qtd; i++) {
        int temp;
        cin >> temp;
        points.push_back(temp);
    }

    cout << hasPassed(points, min) << endl;

    return 0;
}
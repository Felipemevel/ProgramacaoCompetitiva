#include <iostream>
#include <vector>

using namespace std;

bool allTypeUsed (int m, vector<int> f) {
    int count = 0;
    int newM = m;
    while (newM != 0) {
        for (int i = 0; i < f.size(); i++) {
            if (f[i] == newM) {
                count += 1;
                break;
            }
        }
        newM--;
    }

    if (count != m) {
        return false;
    } else {
        return true;
    }
}

bool diffClothes (int n, vector<int> f) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (f[i] == f[j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int n, m;
    vector<int> f;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        f.push_back(temp);
    }
    if (!diffClothes(n, f)) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    if (!allTypeUsed(m, f)) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}
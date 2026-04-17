#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> numList;
    int nTotal = 0;
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        nTotal += i;
    }

    for (int i = 1; i <= n-1; i++) {
        int valorInput;
        cin >> valorInput;
        numList.push_back(valorInput);
    }

    for (int x : numList) {
        soma += x;
    }

    int ans = nTotal - soma;

    cout << ans;

    return 0;

}
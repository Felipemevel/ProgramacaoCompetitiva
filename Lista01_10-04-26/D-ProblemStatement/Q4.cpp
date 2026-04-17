#include <iostream>
#include <string>

using namespace std;

int main () {

    string sequencia;
    long long n, x;
    cin >> n >> x;
    cin >> sequencia;
    long long pontos = x;

    for (char c : sequencia) {
        if (c == 'x' && pontos == 0) {
            continue;
        } else if (c == 'o') {
            pontos += 1;
        } else {
            pontos -= 1;
        }
    }

    cout << pontos;

    return 0;
}
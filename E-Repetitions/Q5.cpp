#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string s;
    vector<char> sequencia;
    cin >> s;

    int maiorSequencia = 1;
    int sequenciaAtual = 1;

    for (char x : s) {
        sequencia.push_back(x);
    }

    for (int i = 1; i < sequencia.size(); i++) {

        if (sequencia[i] == sequencia[i-1]) {
            sequenciaAtual += 1;
        } else {
            if (sequenciaAtual > maiorSequencia) {
                maiorSequencia = sequenciaAtual;
            }
            sequenciaAtual = 1;
        }

    }

    if (sequenciaAtual > maiorSequencia) {
        maiorSequencia = sequenciaAtual;
    }

    cout << maiorSequencia;

    return 0;
}
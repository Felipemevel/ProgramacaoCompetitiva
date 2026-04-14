#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    int numVotos;
    cin >> numVotos;
    cin.ignore();

    vector<string> qtdCandidatos;
    vector<string> candidatos;

    string temp;
    for (int i = 0; i< numVotos; i++) {

        getline(cin, temp);
        qtdCandidatos.push_back(temp);
    }

    candidatos.push_back(qtdCandidatos[0]);
    for (int i = 1; i < qtdCandidatos.size(); i++) {

        if (qtdCandidatos[i] == candidatos.back()) {
            continue;
        }

        candidatos.push_back(qtdCandidatos[i]);
    }

    vector<int> votosCandidatos(candidatos.size(), 0);

    for (int i = 0; i < votosCandidatos.size(); i++) {

        for (int j = 0; j < qtdCandidatos.size(); j++) {
            if (candidatos[i] == qtdCandidatos[j]) {
                votosCandidatos[i] += 1;
            }
        }
    }

    int maisVotado = -1;
    int idx = 0;

    for (int i = 0; i < votosCandidatos.size(); i++) {
        if (votosCandidatos[i] > maisVotado) {
            maisVotado = votosCandidatos[i];
            idx = i;
        }
    }

    cout << candidatos[idx];

    return 0;
}
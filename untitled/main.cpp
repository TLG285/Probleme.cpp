#include <bits/stdc++.h>

using namespace std;
ifstream fin("entries.in");
ofstream fout("entries.out");
int n;
const long long int NLIM = 5001;
long long int M[NLIM][NLIM];
long long int p, q;
long long int v[NLIM];
long long int nrver = 0;
bool afis;

void afisare(int k) {
    for (int i = 1; i <= k; i++) {
        afis = 1;

    }

}

bool sol(int k) {
    if (k != nrver || k == 1)
        return false;

    return v[k] == q;

}

bool ok(int k) {
    for (int i = 1; i < k; i++) {
        if (M[v[i]][v[i + 1]] != 1)
            return false;
        if (v[i] == v[k])
            return false;

    }
    return true;

}


void back(int k) {
    for (int i = 1; i <= q; i++) {
        v[k] = i;
        if (ok(k))
            if (sol(k)) {
                afisare(k);
            } else back(k + 1);


    }


}

class intrare {
public:
    int nod1;
    int nod2;
    int cerinta;


};

intrare g[NLIM];

void executare(int cerinta, int nod1, int nod2) {
    p = nod1;
    q = nod2;

    if (cerinta == 1) {
        nrver++;
        M[nod1][nod2] = 1;
        M[nod2][nod1] = 1;

    } else if (cerinta == 2) {
        back(1);
        if (afis == 1)
            fout << 1 << endl;

        else fout << 0 << endl;
        afis = 0;
    }


}

void citire() {
    fin >> n;

    for (int i = 1; i <= n; i++) {
        fin >> g[i].nod1;
        fin >> g[i].nod2;
        fin >> g[i].cerinta;

    }
    for (int i = 1; i <= n; i++) {
        executare(g[i].cerinta, g[i].nod1, g[i].nod2);
    }


}


int main() {
    citire();
    return 0;
}

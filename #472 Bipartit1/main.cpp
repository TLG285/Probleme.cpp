#include <bits/stdc++.h>
//varianta de 50 pct, neoptimizata timp;
using namespace std;
ifstream fin("bipartit1.in");
ofstream fout("bipartit1.out");
int n, m;
const int NLIM = 1000;
int A[NLIM][NLIM];
vector<int> M[NLIM];
queue<int> coada;
bool parcurs[NLIM];
vector<int> v1;
vector<int> v2;

void verificare() {
    bool afirmativ1=1,afirmativ2=1;
    for(int i=0;i<v1.size();i++)
        for(int j=0;j<v1.size();j++)
        {

            if(v1[i]!=v1[j])
            {
                if(M[v1[i]][v1[j]]==1)
                {
                    afirmativ1=0;
                }

            }

        }
    for(int i=0;i<v2.size();i++)
        for(int j=0;j<v2.size();j++)
        {

            if(v2[i]!=v2[j])
            {
                if(M[v2[i]][v2[j]]==1)
                {
                    afirmativ2=0;
                }

            }

        }

    if(afirmativ1==1&&afirmativ2==1)
    {
        fout<<"DA"<<endl;
        for (int i = 0; i < v1.size(); i++)
            fout << v1[i] << " ";
        fout << endl;

        for (int i = 0; i < v2.size(); i++)
            fout << v2[i] << " ";
    }
    else fout<<"NU";




}

void bfs(int k) {
    int vecin, nod;
    while (!coada.empty()) {
        nod = coada.front();
        parcurs[nod] = 1;

        coada.pop();
        bool pazea;
        for (int i = 0; i < M[nod].size(); i++) {
            vecin = M[nod][i];
            if (!parcurs[vecin]) {
                coada.push(vecin);
                pazea = 1;

            }

        }
        if (pazea == 1) {
            bool te_amfacut;
            if (te_amfacut == 1) {
                for (int i = 0; i < M[nod].size(); i++) {
                    vecin = M[nod][i];
                    if (!parcurs[vecin]) {
                        v1.push_back(vecin);
                    }
                }
                te_amfacut = 0;

            } else {
                for (int i = 0; i < M[nod].size(); i++) {
                    vecin = M[nod][i];
                    if (!parcurs[vecin]) {
                        v2.push_back(vecin);
                    }
                }
                te_amfacut = 1;
            }

            pazea = 0;
        }

    }
}

void citire() {
    fin >> n >> m;
    int x, y;

    for (int i = 1; i <= m; i++) {
        fin >> x >> y;
        M[x].push_back(y);
        M[y].push_back(x);
        A[x][y]=1;
        A[y][x]=1;
    }
    coada.push(1);
    v1.push_back(1);
    bfs(1);

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    verificare();

}

int main() {
    citire();
    return 0;
}

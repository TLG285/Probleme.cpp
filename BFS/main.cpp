#include <bits/stdc++.h>
using namespace std;
ifstream fin("conex.in");
ofstream fout("conex.out");
int n,m,k;
const int NLIM=100;
vector<int>graf[NLIM];
int distanta[NLIM];
queue<int> coada;
void bfs()
{
    int vecin,nod;

    while(!coada.empty())
    {
        nod=coada.front();
        fout<<nod<<" ";
        coada.pop();
        for(unsigned int i=0; i<graf[nod].size(); i++)
        {
            vecin=graf[nod][i];

            if(distanta[vecin]==-1)
            {

                coada.push(vecin);
                distanta[vecin]= distanta[nod]+1;

            }

        }

    }


}

void citire()
{
    int a,b;
    for(int i = 1; i <= m; i++)
    {
        int x, y;
        fin >> x >> y;
        graf[x].push_back(y);
        graf[y].push_back(x);
    }
    for(int i = 1; i <= n; i++)
    {
        sort(graf[i].begin(),graf[i].end());

    }

    for(int i=1;i<=n;i++)
        distanta[i]=-1;


    distanta[k]=0;
    coada.push(k);
    bfs();


}


int main() {
fin>>n>>m>>k;
citire();



    return 0;
}

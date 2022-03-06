#include <bits/stdc++.h>
using namespace std;
ifstream fin("mere.in");
ofstream fout("mere.out");
int n;
int S=0;
const int NLIM=999;
int numarmere[NLIM];
vector <int> v[NLIM];
int maxim;
bool parcurs[NLIM];
void bfs(int x)
{   int vecin,urm=0;

    parcurs[x]=1;
    maxim=-999;

    for(int i=0;i<v[x].size();i++)
        { vecin=v[x][i];

            if(!parcurs[vecin])
                if(maxim<numarmere[vecin])
                {
                    urm=vecin;
                    maxim=numarmere[vecin];
                }


        }

    S+=numarmere[urm];

    if(urm!=0)
    bfs(urm);


}

void citire()
{
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>numarmere[i];
    }

    int a,b;
    while(fin>>a>>b)
    {
        v[a].push_back(b);
        v[b].push_back(a);

    }
    for(int i=1;i<=n;i++)
    {
        sort(v[i].begin(),v[i].end());

    }
    S=numarmere[1];
    bfs(1);


    fout<<S;
}

int main() {
    citire();


    return 0;
}

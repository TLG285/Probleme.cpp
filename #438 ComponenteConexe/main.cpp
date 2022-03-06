#include <bits/stdc++.h>
using namespace std;
ifstream fin("componenteconexe.in");
ofstream fout("componenteconexe.out");
int n;
const int NLIM=999;
vector<int> v[NLIM];
bool parcurs[NLIM];
int insula=0;
int stocare;
void dfs(int x)
{   int vecin;
    v[stocare].push_back(x);

    parcurs[x]= true;
    for(int i=0;i<v[x].size();i++)
    {   vecin=v[x][i];
        if(!parcurs[vecin])
        dfs(vecin);
    }

}
void compconex()
{
    for(int i=1;i<=n;i++)
    {
        if(!parcurs[i])
        {
            insula++;
            stocare++;
            dfs(i);

        }

    }

    cout<<insula<<endl;
    for(int i=n+1;i<=stocare;i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    for(int i=n+1;i<=stocare;i++)
    {
        for(unsigned int j=0;j<v[i].size();j++)
        {
            fout<<v[i][j]<<" ";
        }
        fout<<endl;

    }



}
void citire()
{
    fin>>n;
    stocare=n;
    int a,b;
    while (fin>>a>>b)
    {
        v[a].push_back(b);
        v[b].push_back(a);


    }

}
int main() {
    citire();
    compconex();

    return 0;
}

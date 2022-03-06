#include <bits/stdc++.h>
using namespace std;
ifstream fin("bazine.in");
ofstream fout("bazine.out");
int n,m;
const int NLIM=999;
vector<int>v[NLIM] ;
int parcurs[NLIM];
int insula=0;
void dfs(int x)
{
    parcurs[x]=1;
    int vecin;
    for(int i=0;i<v[x].size();i++)
    {
        vecin=v[x][i];
        if(!parcurs[vecin])
            dfs(vecin);

    }


}


void compconex()
{
    for(int i=1;i<=n;i++)
    {
        if(!parcurs[i])
        {dfs(i);
        insula++;
        }


    }
cout<<insula;


}

void citire()
{
    fin>>n>>m;

    int x,y;
    for(int i=1;i<=m;i++)
    {
        fin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

}


int main() {
    citire();

    compconex();

    return 0;
}

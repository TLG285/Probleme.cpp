#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fin("dfs.in");
ofstream fout("dfs.out");
int n, m, x=0;

class Graph
{
public:
    map<int, bool> parcurs;
    map<int, vector<int>> componente;
    void adaugare_varf(int v, int v2)
    {
        componente[v].push_back(v2);
    }
    void dfs(int i)
    {
        if(parcurs[i]==0)
        {
            x++;
            parcurs[i]=1;
        }
        for(auto it:componente[i])
        {   
              if(!parcurs[it])
              { parcurs[it]=1;}
        }
    }
};
Graph graf;
void citire()
{
    int a, b;
    while (fin >> a >> b)
    {
        graf.adaugare_varf(a, b);
        graf.adaugare_varf(b, a);
    }
    for(int i=1;i<=n;i++)
    graf.dfs(i);
    fout<<x<<endl;
}

int main()
{

    fin >> n >> m;
    citire();
}
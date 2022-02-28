#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("dfs.in");
ofstream fout("dfs.out");

const int NLIM=100005;
int N,M;
int vizitat[NLIM];

vector <int> Muchii[NLIM];

void Citire()
{
    fin>>N>>M;
    for(int i=1; i<=M; i++)
    {
        int x,y;
        fin>>x>>y;
        Muchii[x].push_back(y);
        Muchii[y].push_back(x);

    }
     for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        cout<< Muchii[i][2] <<" ";
        cout<<"\n";
    }


}


int main()
{
    Citire();
    return 0;
}

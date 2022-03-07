#include <bits/stdc++.h>
using namespace std;
ifstream fin("ciclul.in");
ofstream fout("ciclul.out");
int n,m,l;
const int NLIM=1000;
int A[NLIM][NLIM];
int v[NLIM];
bool oke=0;
void afisare(int k)
{
    fout<<v[k]<<" ";
    for(int i=1;i<=k;i++)
    {
        fout<<v[i]<<" ";


    }

    fout<<endl;
    oke=1;
}



bool sol(int k)
{
    if(A[v[k]][v[1]]==1&&k==l)
        return true;
    else return false;
}



bool ok(int k)
{

    for(int i=1;i<k;i++)
    {
        if(A[v[i]][v[i+1]]!=1)
            return false;
        if(v[i]==v[k])
            return false;


    }
    return true;

}


void back(int k)
{
    if(oke==0)
    for(int i=1;i<=n;i++)
    {
        v[k]=i;
        if(ok(k))
            if(sol(k))
            {
                afisare(k);
            } else back(k+1);



    }


}



void citire()
{
    fin>>n>>m;

    int x,y;
    for(int i=1;i<=m;i++)
    {
       fin>>x>>y;
       A[x][y]=1;
       A[y][x]=1;
    }
    fin>>l;

    back(1);

}
int main() {
    citire();
    return 0;
}

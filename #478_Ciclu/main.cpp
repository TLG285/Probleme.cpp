#include <bits/stdc++.h>
using namespace std;
ifstream fin("ciclu.in");
ofstream fout("ciclu.out");
const int NLIM=999;
int n,m,p;
int A[NLIM][NLIM];
int v[NLIM];
int oke;
void afisare(int k)
{
    fout<<p<<" ";
    for(int i=1;i<=k;i++)
        fout<<v[i]<<" ";
    fout<<endl;
    oke =1;
}


bool sol(int k)
{

    if(v[k]==p && k>2)
        return true;
    else return false;



}


bool ok(int k)
{
    if(A[v[1]][p]!=1)
        return false;
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
{if(oke!=1)
    for(int i=1;i<=n;i++)
    {
        v[k]=i;
        if(ok(k))
            if(sol(k))
            {
                afisare(k);
            }
        else back(k+1);



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
    fin>>p;

    back(1);
}
int main() {
    citire();
    return 0;
}

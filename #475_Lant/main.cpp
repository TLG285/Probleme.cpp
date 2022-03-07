#include <bits/stdc++.h>
using namespace std;
ifstream fin("lant.in");
ofstream fout("lant.out");
int n,m,p,q;
const int NLIM=101;
int A[NLIM][NLIM];
int v[NLIM];

void afisare(int k)
{   fout<<p<<" ";
    for(int i=1;i<=k;i++)
    {
        fout<<v[i]<<" ";
    }
    fout<<endl;

}
bool sol(int k)
{
    return v[k]==q;
}
bool ok(int k)
{

    if(A[p][v[1]]!=1)
        return false;
    for(int i=1;i<k;i++)
    {   if(A[v[i]][v[i+1]]!=1)
        return false;
        if(v[i]==v[k])
            return false;
    }
    return true;


}


void back(int k)
{
    for(int i=1;i<=q;i++)
    {
        v[k]=i;
        if(v[k]!=p)
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
   fin>> n>>m;
   int x,y;
   for(int i=1;i<=m;i++)
   {
       fin>>x>>y;
       A[x][y]=1;
       A[y][x]=1;
   }
    fin>>p>>q;
    back(1);

}
int main() {
    citire();


    return 0;
}

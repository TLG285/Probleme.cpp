#include <bits/stdc++.h>
using namespace std;
ifstream fin("lanturi.in");
ofstream fout("lanturi.out");
int n,m,p,q,r;
const int NLIM=999;
int v[NLIM];
int A[NLIM][NLIM];
void afisare(int k)
{
    for(int i=1;i<=k;i++)
        fout<<v[i]<<" ";

    fout<<endl;


}

bool sol(int k)
{
    bool ok=0;
    for(int i=1;i<=k;i++)
        if(v[i]==r)
            ok=1;
    if(ok &&v[k]==q)
        return true;
    return false;
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
   fin>>p>>q>>r;
    v[1]=p;
   back(2);

}
int main() {
citire();

    return 0;
}

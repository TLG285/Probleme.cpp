#include <bits/stdc++.h>
using namespace std;
ifstream fin("lantmaxim.in");
ofstream fout("lantmaxim.out");
int n,m,p,q;
const int NLIM=22;
int A[NLIM][NLIM];
int v[NLIM];
int maximul[NLIM];
int maxim=-1;
void verif_maxim(int k)
{
    if(k>maxim)
    {
        for(int i=1;i<=k;i++)
        maximul[i]=v[i];
        maxim=k;
    }



}
void afisare(int k)
{
    for(int i=1;i<=k;i++)
    {
        verif_maxim(k);
    }





}



bool sol(int k)
{
    return v[k]==q;




}





bool ok(int k)
{
    for(int i=1;i<k;i++)
    {
        if(A[v[i]][v[i+1]]!=1)
            return false;
        if(v[k]==v[1])
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
    fin>>p>>q;
    v[1]=p;
    back(2);

}


int main() {
    citire();
    for(int i=1;i<=maxim;i++)
        fout<<maximul[i]<<" ";
    return 0;
}

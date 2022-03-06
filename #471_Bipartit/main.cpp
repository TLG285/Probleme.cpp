#include <bits/stdc++.h>
using namespace std;
ifstream fin("bipartit.in");
ofstream fout("bipartit.out");
int n,m;
int A[1000][1000];
int vct[100],vct2[100];
int size_vct,size_vct2=0;
int v[1000];
bool oke=0;

bool afisare(int vct[100])
{
   int a=vct[v[1]],b=vct[v[2]];


    if(A[a][b]==1||A[b][a]==1)
        return true;


}
bool ok(int k)
{
    for(int i=1;i<k;i++)
    {
        if(v[k]==v[i])
            return false;

    }
    return true;

}
bool sol(int k)
{
    return k==2;

}



void back(int k,int size_vct,int vector[100])
{
    for(int i=1;i<=size_vct;i++)
    {
        v[k]=i;
        if(ok(k))
        {if(sol(k))
            {
                if(afisare(vector))
                    oke=1;
            }
            else  back(k+1, size_vct, vector);
        }


    }





}
void citire()
{
    fin>>n>>m;
    int a,b;
    for(int i=1;i<=m;i++)
    {
        fin>>a>>b;
        A[a][b]=1;
        A[b][a]=1;

    }
    fin>>size_vct;
    for(int i=1;i<=size_vct;i++)
    {
        fin>>vct[i];
    }
    bool tmp;
    for(int j=1;j<=n;j++)
    {tmp=0;

        for(int i=1;i<=size_vct;i++)
        {
            if(j==vct[i])
            tmp=1;

        }
        if(!tmp)
        {vct2[size_vct2+1]=j;
            size_vct2++;
        }
    }
  //am stocat in vct2 elem.care trebuie afisate pt mult B


}
int main() {
    citire();
    back(1,size_vct,vct);
    bool oke2 = oke;
    back(1,size_vct2,vct2);
    if (oke==1 && oke2==1)
        fout<<"NU";
    else  fout<<"DA";
    return 0;
}

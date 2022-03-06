#include <bits/stdc++.h>
using namespace std;
ifstream fin("lantq.in");
ofstream fout("lantq.out");
int n,m,q;
const int NLIM=9999;
int v[NLIM];
int A[NLIM][NLIM];
int oke;
void afisare(int k)
{
    if(k!=1)
    {
        oke=1;
        for(int i=1;i<=k;i++)
        {
            fout<<v[i]<<" ";

        }
        fout<<endl;
    }

}
bool sol(int k)
{

    if(v[k]==q)
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
void bkt(int k) {

    for (int i = 1; i <= n; i++)
    {
        bool tmp;
        v[k] = i;



            if (ok(k))
            {

                if (sol(k)) {

                    afisare(k);


                }
                else bkt(k + 1);

            }





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
    fin>>q;
    bkt(1);

}
int main()
{
    citire();
    if(oke ==0)
    {
        fout<<"NU EXISTA";
    }

}
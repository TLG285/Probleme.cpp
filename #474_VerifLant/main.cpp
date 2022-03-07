#include <bits/stdc++.h>
using namespace std;
ifstream fin("veriflant.in");
ofstream fout("veriflant.out");
int n,m,k;
const int NLIM=999;
int A[NLIM][NLIM];
vector<int>sir[NLIM];
bool check(int v1,int v2)
{

    if(A[v1][v2]!=1)
    {
        return true;
    }
    return false;


}
void verifica(int k)
{
bool neelementar=0;
bool nulant=0;

    for(int i=0;i<sir[k].size()-1;i++)
    {
       int vecin=sir[k][i];
       int vecin2=sir[k][i+1];
       for(int j=i+1;j<sir[k].size();j++)
       {
           if(vecin==sir[k][j])
           {
               neelementar=1;
           }
       }

       if(check(vecin,vecin2))
       {

           nulant=1;
       }

    }

    if(nulant)
    fout<<"NU"<<endl;
    else{
        if(neelementar)
        {
            fout<<"NEELEMENTAR"<<endl;
        }
        else fout<<"ELEMENTAR"<<endl;
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

    fin>>k;
    int tmp;
    for(int i=1;i<=k;i++)
    {       fin>>tmp;

        for(int j=1;j<=tmp;j++)
        {
            fin>>x;


            sir[i].push_back(x);
        }

    }
    for(int i=1;i<=k;i++)
    {
        verifica(i);
    }


}


int main() {
    citire();

    return 0;
}

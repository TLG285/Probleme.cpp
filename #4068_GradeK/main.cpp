#include <bits/stdc++.h>
using namespace std;
ifstream  fin("gradek.in");
ofstream fout("gradek.out");
int n,k;
int A[1000][1000];
void grade()
{
    int grad,nrg=0;

    for(int i=1;i<=n;i++)
    {grad=0;
        for(int j=1;j<=n;j++)
        {if(A[i][j]==1)
                grad++;
        }
        if(grad==k)
        {A[i][1]=k;
        nrg++;}
        else A[i][1]=-1;

    }
    cout<<nrg<<" ";
    for(int i=1;i<=n;i++)
    {
        if(A[i][1]==k)
            cout<<i<<" ";
    }



}
void  citire()
{

    int a,b;
    while (fin>>a>>b)
    {
        A[a][b]= 1;
        A[b][a]=1;

    }

}
int main() {
    fin>>n>>k;
    citire();
    grade();
    return 0;
}

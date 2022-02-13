#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("subgraf.in");
ofstream fout("subgraf.out");
int A[101][101];

int n;

bool Conditie(int n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
            return 0;

    }
    return 1;
}

int main()
{
    fin>>n;
    int a,b;
    while(fin>>a>>b)
    {
        A[a][b]=1;
        A[b][a]=1;

    }
    int M=0;

    for(int i=1; i<=n; i++)
    {
        if(Conditie(i)!=1)
        {
            for(int j=1; j<=n; j++)
            {
                if(Conditie(j)!=1)
                if(A[i][j]==A[j][i]&&A[i][j]==1)
                   M++;

            }

        }
    }

    fout<<M/2;
    return 0;
}

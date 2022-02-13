#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("gradmax.in");
ofstream fout("gradmax.out");
int n;
int A[101][101];
int V[1000];//vector grade
int main()
{
    fin>>n;
    int a,b;
    while(fin>>a>>b)
    {
        A[a][b]=1;
        A[b][a]=1;

    }
    int grad=0;
    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=n; j++)
        {
            if(A[i][j]==1)
                V[i]++;
        }
        grad=max(grad,V[i]);
    }
    int nrv=0;
    for(int i=1; i<=n; i++)
    {
        if(V[i]==grad)
           nrv++;

    }
    fout<<nrv<<" ";
    for(int i=1; i<=n; i++)
    {
        if(V[i]==grad)
          fout<<i<<" ";

    }
    return 0;
}

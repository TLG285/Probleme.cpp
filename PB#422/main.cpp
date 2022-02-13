#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("graf_partial_2.in");
ofstream fout("graf_partial_2.out");
int A[100][100];
int n;
int main()
{
    fin>>n;
    int a,b;
    while(fin>>a>>b)
    {
        A[a][b]=1;
        A[b][a]=1;

    }
    int G_min=999,G_max=-999;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            A[i][0]=A[i][0]+A[i][j];
        }
        G_max=max(G_max,A[i][0]);
        G_min=min(G_min,A[i][0]);

    }
    for(int i=1; i<=n; i++)
    {
        if(A[i][0]==G_max)
        {
            for(int j=1; j<=n; j++)
            {
                if(A[i][j]==1)
                    A[0][0]++;
                A[i][j]=0;
                A[j][i]=0;
            }
        }
    }
    fout<<A[0][0]<<endl;
    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=n; j++)
        {

            fout<<A[i][j]<<" ";
        }
        fout<<endl;
    }


return 0;
}

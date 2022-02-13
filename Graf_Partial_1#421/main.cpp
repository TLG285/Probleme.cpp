#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("graf_partial_1.in");
ofstream fout("graf_partial_1.out");

int A[100][100];
int V[1000];
int main()
{
    int n;
    fin>>n;
    int a,b;
    while(fin>>a>>b)
    {
        A[a][b]=1;
        A[b][a]=1;

    }
    int G_min=9999;
    int G_max=-9999;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(A[i][j]==1)
            {
                V[i]++;

            }
        }
        G_min=min(V[i],G_min);
        G_max=max(G_max,V[i]);
    }

    int nrm=0;
    for(int i=1; i<=n; i++)
    {
       if(V[i]==G_min)
       {
           nrm++;
         for(int j=1;j<=n;j++)
       {
           if(V[j]==G_max)
            {A[i][j]=0;
             A[j][i]=0;
            }


       }
       }


    }
    fout<<nrm<<endl;
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
//update

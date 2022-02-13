#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("subgraf1.in");
ofstream fout("subgraf1.out");

int n;
int A[100][100];
int V[1000]= {0};

void Reset(int n)
{
    while(n!=0)
    {
        V[n]=0;
        n--;
    }

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


    int grad_minim=9999;
    int grad=0;

    for(int i=1; i<=n; i++)
    {
        grad=0;
        for(int j=1; j<=n; j++)
        {
            if(A[i][j]==1)
            {
                grad=grad+1;

            }
        }

        if(grad<grad_minim)
        {
            Reset(n-1);
        }
        grad_minim =min(grad_minim,grad);

        if(grad_minim==grad)
        {
            V[i]=i;
        }

    }

    int M=0;
    for(int i=1; i<=n ; i++)
    {
        if(V[i]==0)
            for(int j=1; j<=n ; j++)
            {
                if(V[j]==0)
                    if(i!=j)
                        if(A[i][j]==A[j][i])
                            M++;
            }

    }
    fout<<M/2;


    return 0;
}

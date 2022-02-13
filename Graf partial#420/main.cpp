#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("graf_partial.in");
ofstream fout("graf_partial.out");

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
    int nrm=0;
    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=n; j++)
        {
            if(i%2==j%2 && A[i][j]==1)
            {
                nrm++;
                A[j][i]=0;
            }

        }
    }

    fout<<nrm;

    return 0;
}

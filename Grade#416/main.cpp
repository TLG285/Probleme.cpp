#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("grade.in");
ofstream fout("grade.out");

int n;
int A[100][100];
int main()
{

    fin>>n;
    int a,b;
    while(fin>>a>>b)
    {
        A[a][b]=1;
        A[b][a]=1;

    }
    int nr=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            if(A[i][j]==1)
                nr++;
        fout<<nr<<" ";
        nr=0;
    }

    return 0;
}

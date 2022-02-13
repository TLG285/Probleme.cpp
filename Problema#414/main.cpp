#include <iostream>
#include<fstream>
using namespace std;

ifstream fin("listavecini.in");
ofstream fout("listavecini.out");

int A[100][100];

int main()
{
    int n;//n este numarul de varfuri
    fin>>n;
    int a,b;
    while(fin>>a>>b)
    {
        if(A[a][b]==0)
       A[a][n+1]= A[a][n+1]+1;
       if(A[b][a]==0)
        A[b][n+1]=A[b][n+1]+1;

        A[a][b]=b;
        A[b][a]=a;


    }
    for(int i=1; i<=n; i++)
    {
        fout<<A[i][n+1]<<" ";
        for(int j=1; j<=n; j++)
        {

            if(A[i][j]!=0)
                fout<<A[i][j]<<" ";

        }
        fout<<endl;
    }





    return 0;
}

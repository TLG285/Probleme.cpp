#include <bits/stdc++.h>
using namespace std;
ifstream fin("graf_partial_5.in");
ofstream fout("graf_partial_5.out");
int n,k;
int A[1001][1001];
void grad()
{
    int grad;
    for(int i=1;i<=n;i++)
    {grad=0;
        for(int j=1;j<=n;j++)
        {
            if(A[i][j]==1)
            {
                grad++;
            }
           A[n+1][i]=grad;
        }
    }


    for(int i=1;i<=n;i++)
    {for(int j=1;j<=n;j++)
        {
            if(A[n+1][i]>=k && A[n+1][j]>=k)
                fout<<0<<" ";
                else fout<<A[i][j]<<" ";

        }
        fout<<endl;
    }

}

void citire()
{
    fin>>n>>k;
    int a,b;
    while(fin>>a>>b)
    {
    A[a][b]=1;
    A[b][a]=1;
    }
}






int main() {
    citire();
    grad();
    return 0;
}

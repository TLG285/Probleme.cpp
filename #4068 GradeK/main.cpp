#include <bits/stdc++.h>
using namespace  std;
ifstream fin("gradek.in");
ofstream fout("gradek.out");
int n,k;
int A[105][105];
map<int ,vector<int>> grade;
void citire()
{
    int a,b;
    while(fin>>a>>b)
    {
        A[a][b]=1;
        A[b][a]=1;

    }
}
void fgrade()
{
    int cnt=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(A[i][j]==1)
            A[n+1][i]++;

        }
    for(int i=1;i<=n;i++)
        if (A[n + 1][i] == k)
        {cnt++;


        }
    fout<<cnt<<endl;
    for(int i=1;i<=n;i++)
        if (A[n + 1][i] == k)
        {
            fout<<i<<" ";


        }

}
int main() {
fin>>n>>k;
citire();
fgrade();
    return 0;
}

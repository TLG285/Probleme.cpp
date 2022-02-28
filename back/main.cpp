#include<bits/stdc++.h>
using namespace std;
ifstream fin("flip.in");
ofstream fout("flip.out");
long long i,j,N,M;
long a[20][20], maxim=0, s[20];

void cont()
{
    long long sl, st=0, i, j;
    for(i=1; i<=M; i++)
    {
        sl=0;
        for(j=1; j<=N; j++)
            sl+=s[j]*a[j][i];
        if(sl<0)
            sl=-sl;
        st+=sl;
    }
    if(st>maxim)
        maxim=st;
}

void back(int k)
{
    if(k>N)
        cont();
    else
    {
        s[k]=1;
        back(k+1);
        s[k]=-1;
        back(k+1);
    }
}

int main()
{
    fin>>N>>M;
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=M; j++)
        {
            fin>>a[i][j];
        }
    }
    back(1);
    fout<<maxim;
    fout.close();
    return 0;
}

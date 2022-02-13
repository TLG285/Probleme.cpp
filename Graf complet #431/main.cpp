#include <bits/stdc++.h>
using namespace std;
ifstream fin("graf_complet.in");
ofstream fout("graf_complet.out");
int a[102][102];
int main()
{
    int n , m;
    fin >> n;
    for(int i = 0 ; i < n ; ++i)
    {
        int cnt = 0;
        fin >> m;
        for(int i = 0 ; i < m ; ++i)
            for(int j = 0 ; j < m ; ++j)
                fin >> a[i][j];
        for(int i = 0 ; i < m ; ++i)
            for(int j = 0 ; j < m; ++j)
                if(a[i][j]==0)cnt++;
        if(cnt <= m) cout << "DA" << endl;
        else cout << "NU" << endl;
        for(int i = 0 ; i < m ; ++i)
            for(int j = 0 ; j < m; ++j)
                a[i][j]=0;
    }
}


#include <bits/stdc++.h>
using namespace std;

int n , m , x , y , a[21][21] , X[21] , P[21] , p , q;
void afisare(int k)
{
    for(int i = 1 ; i <= k ; i++)
        cout << X[i] << " ";
    cout << '\n';
}
void back(int k)
{
    for(int i = 1 ; i <= n ; i++)
        if(!P[i])
        {
            P[i] = 1;
            X[k] = i;
            if(k == 1 || a[X[k - 1]][X[k]] == 1)
            {
                if(X[k] == q) afisare(k);
                else back(k + 1);
            }
            P[i] = 0;
        }
}
int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    cin >> q;

    for(int i=1;i<=n;i++)
    {
        P[i] = 1 , X[1] = i;
        back(i);
    }

    return 0;
}
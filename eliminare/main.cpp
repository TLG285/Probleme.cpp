#include <bits/stdc++.h>
using namespace std;
ifstream fin("eliminare.in");
ofstream fout("eliminare.out");
vector <int> sortat;
vector <int> v;
vector <int>::iterator i;
int main()
{
    int m,n;
    fin>>n>>m;
    int aux=n;
    int k=0;
    while(aux>0)
    {
        sortat.push_back(aux%10);
        v.push_back(aux%10);
        aux=aux/10;
    }
    sort(sortat.begin(),sortat.end());
    for(int i=0;i<=10;i++)
        cout<<sortat[i]<<" ";
    while(k!=m)
    {

        i=find(v.begin(),v.end(),sortat[k]);
         cout<<v[i];

        k++;
    }


    return 0;
}

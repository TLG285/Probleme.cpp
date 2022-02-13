#include <bits/stdc++.h>
using namespace std;
ifstream fin("permutari.in");
ofstream fout("permutari.out");
int n,temp;
int v2[100];
vector<int> v;
afisare()
{
    for(int i=1; i<=n; i++)
    {
        temp=v2[i];
        fout<<v[temp]<<" ";
    }
    fout<<endl;

}

bool ok(int k)
{
    for(int i=1; i<k; i++)
    {
        if(v2[i]==v2[k])
            return false;

    }
    return true;
}
bool sol(int k)
{
    return k==n;

}
void back(int k)
{
    for(int i=0; i<n; i++)
    {
        v2[k]=i;
        if(ok(k))
            if(sol(k))
            {
                afisare();
            }
            else
                back(k+1);
    }



}
int main()
{
    fin>>n;

    for(int i=1; i<=n; i++)
    {
        fin>>temp;
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    back(1);
    return 0;
}

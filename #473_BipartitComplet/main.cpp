#include <bits/stdc++.h>
using namespace std;
ifstream fin("bipartitcomplet.in");
ofstream fout("bipartitcomplet.out");
const int NLIM=1000;
int M[NLIM][NLIM];
vector<int >A;
vector<int >B;
int n,k;
void bipartit()
{
for(int i=0;i<A.size();i++)
    for(int j=0;j<B.size();j++)
    {
        M[A[i]][B[j]]=1;
        M[B[j]][A[i]]=1;

    }
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        cout<<M[i][j]<<" ";
    }
    cout<<endl;

}
}
void citire()
{
    fin>>n>>k;
    int tmp=0;
    for(int i=1;i<=k;i++)
    {   fin>>tmp;
        A.push_back(tmp);
    }
    for(int i=0;i<k;i++)
    {
        cout<<A[i]<<" ";
    }
    bool oke;
    for(int i=1;i<=n;i++)
    {oke=0;
        for(int j=0;j<A.size();j++)
        {
            if(i==A[j])
               oke=1;

        }
        if(oke!=1)
        B.push_back(i);
    }

    for(int i=0;i<B.size();i++)
    {
        cout<<B[i]<<" "<<endl;
    }



}
int main() {
    citire();
    bipartit();
    return 0;
}

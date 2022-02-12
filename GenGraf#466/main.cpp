#include<bits/stdc++.h> //asdsaasdsad   cvcxvxvxcv
using namespace std;
ifstream fin("gengraf.in");
ofstream fout("gengraf.out");
int n,A[100][100];
int v[100];
int d_p;

//salut

void afisare()
{
    int temp=1;

    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
        {
            A[i][j]=v[temp];
            A[j][i]=v[temp];
            temp++;

        }
   for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            fout<<A[i][j]<<" ";
        fout<<endl;
    }
    fout<<endl;
}


bool ok(int k)
{

    return true;

}
bool sol(int k)
{
    if(k==d_p)
        return true;
    else
        return false;


}




void back(int k)
{
    for(int i=0; i<=1; i++)
    {
        v[k]=i;
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
    d_p=(n*n-n)/2;
    fout<<pow(2,d_p)<<endl;
    back(1);
    return 0;
}

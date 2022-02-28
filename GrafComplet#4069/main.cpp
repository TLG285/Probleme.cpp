#include <iostream>

using namespace std;
int n,k;
int m,nrm=0;
bool no_multiple(int i,int j)
{
    if(i%k==0)
        return false;
    if(j%k==0)
        return false;
    return true;


}
void citire()
{
    for(int k=1; k<=m; k++)
    {
        int i,j;
        cin>>i>>j;
        if(no_multiple(i,j))
        {
            nrm++;
        }
    }

}

int main()
{
    cin>>n>>m>>k;
    citire();
    cout<<nrm;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
ifstream fin("componenteconexe3.in");
ofstream fout("componenteconexe3.out");
const int NLIM=105;
int n;
vector<int> M[NLIM];
queue<int>coada;
bool parcurs[NLIM];
int varf_minim=-1,grad_maxim=-1,grad_prezent=0,varf_reprezentant=0;
void bfs()
{
int nod,vecin;
while(!coada.empty())
{
    nod=coada.front();
    grad_prezent++;
    coada.pop();
    parcurs[nod]=1;
    for(int i=0;i<M[nod].size();i++)
    {
        vecin=M[nod][i];
        if(!parcurs[vecin])
        {
            coada.push(vecin);
            parcurs[vecin]=1;

        }

    }



}


}
void citire()
{
    fin>>n;
    int x,y;
    while (fin>>x>>y)
    {
        M[x].push_back(y);
        M[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
    {
        if(!parcurs[i])
        {
            varf_reprezentant=i;
            coada.push(i);
            bfs();
            if(grad_maxim<grad_prezent)
            {
                grad_maxim=grad_prezent;
                varf_minim=varf_reprezentant;
            }
            grad_prezent=0;




        }


    }

}


int main() {
    citire();
    fout<<varf_minim<<" "<<grad_maxim;
    return 0;
}

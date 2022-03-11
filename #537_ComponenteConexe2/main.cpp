#include <bits/stdc++.h>
using namespace std;
ifstream fin("componenteconexe2.in");
ofstream fout("componenteconexe2.out");
int n;
int numarelim=0,numar_noduri=0,numar_muchii=0;
const int NLIM=999;
bool parcurs[NLIM];
vector<int>v[NLIM];
queue<int>coada;

void bfs()
{
    int nod,vecin;
    while(!coada.empty())
{
        nod=coada.front();
        coada.pop();
        //numaram cate noduri sunt
        numar_noduri++;
        parcurs[nod]=1;
        for(int i=0;i<v[nod].size();i++)
        {vecin=v[nod][i];
            //numaram cate arce sunt in total
            numarelim++;
            if(parcurs[vecin]==0)
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
    while(fin>>x>>y)
    {

        v[x].push_back(y);
        v[y].push_back(x);

    }

for(int i=1;i<=n;i++)
{
    if(!parcurs[i])
    {
        coada.push(i);
        bfs();
        //numarul de muchii va fi reprezentat de deiferenta dintre numarul
        //de legaturi dintre noduri si numarul de noduri -1
        numar_muchii=numar_muchii+(numarelim/2-(numar_noduri-1));
        numarelim=0;
        numar_noduri=0;



    }

}

}

int main() {
    citire();
    fout<<numar_muchii;
    return 0;
}

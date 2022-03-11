//Se dă un graf neorientat cu n vârfuri. Determinați numărul maxim de vârfuri dintr-o componentă conexă și
// numărul de componente conexe care au acest număr maxim de vârfuri.
#include <bits/stdc++.h>
using namespace std;
ifstream fin("ccmax.in");
ofstream fout("ccmax.out");
int n;
const int NLIM=999;
int nr_vf_compconexa=0,nr_max_varfuri=-1,nr_comp_conexe=0;
vector<int>M[NLIM];
bool parcurs[NLIM];
queue<int>coada;
void bkt()
{
int nod,vecin;
while(!coada.empty())
{
    nod=coada.front();
//calculam numarul de varfuri din componenta conexa
    nr_vf_compconexa++;
    coada.pop();
    parcurs[nod]=1;
    for(unsigned int i=0;i<M[nod].size();i++)
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
   while(fin>>x>>y)
   {
       M[x].push_back(y);
       M[y].push_back(x);


   }
   for(int i=1;i<=n;i++)
   {
       if(!parcurs[i])
       {
           coada.push(i);
           bkt();
           //comparam fiecare numar de varfuri regasite in comp conexa
           //cu numarul maxim si stocam cate componenete au acel numar
           if(nr_vf_compconexa>nr_max_varfuri)
           {
               nr_max_varfuri=nr_vf_compconexa;
               nr_comp_conexe=0;
           }
           if(nr_vf_compconexa==nr_max_varfuri)
               nr_comp_conexe++;
           nr_vf_compconexa=0;

       }


   }

}
int main() {
    citire();
    fout<<nr_max_varfuri<<" "<<nr_comp_conexe;
    return 0;
}

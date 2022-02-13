#include <iostream>

#include <fstream>

using namespace std;

ifstream f("adiacenta1.in");

ofstream g("adiacenta1.out");

int n,i,j,matrice[101][101]={0};

int main()

{

   int maxV = -1;

while(f>>i>>j)

{

matrice[i][j]=1;

matrice[j][i]=1;

   if(i>j){

       if(i>maxV){

        maxV = i;

       }

   }else{

       if(j>maxV){

        maxV = j;

       }

   }

}

f.close();

for(int k=1;k<=maxV;k++)

{

   for(int h=1;h<=maxV;h++){

 g<<matrice[k][h]<<" ";

   }

   g<<endl;

}

g.close();

return 0;

}

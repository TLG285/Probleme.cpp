#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("izolate.in");
ofstream fout("izolate.out");

int n;
int main()
{

  fin>>n;
  int v[n]={0};
  int a,b;
  while(fin>>a>>b)
  {
      v[a]=1;
      v[b]=1;

  }

  int nr=0;
  int V[6]={0};
  for(int i=1;i<=n;i++)
  {
      if(v[i]==0)
      {
          nr++;
          V[nr]=i;
      }
  }
  fout<<nr<<" ";
  int i=1;
  while(i<=nr)
  {
      fout<<V[i]<<" ";
      i++;
  }
    return 0;
}

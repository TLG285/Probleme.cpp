#include <bits/stdc++.h>

using namespace std;
ifstream fin("entries.in");
ofstream fout("entries.out");
int n;
const int NLIM = 999;
int M[NLIM][NLIM];

class intrare {
public:
    int nod1;
    int nod2;
    int cerinta;


};

vector<intrare>g;
void executare(int cerinta,int nod1,int nod2)
{

    if(cerinta==1)
    {
       M[nod1][nod2]=1;
       M[nod2][nod1]=1;

    }
    if(cerinta==2)
    {
        if(M[nod1][nod2]==1)
            cout<<1<<endl;
        else
            cout<<0<<endl;

    }


}

void citire() {
    fin >> n;
    int q,w,e;
    for (int i = 1; i <= n; i++) {


    }
    for (int i = 1; i <= n; i++)
    {
        executare(g[i].cerinta,g[i].nod1,g[i].nod2);

    }

}


int main() {
    citire();
    return 0;
}

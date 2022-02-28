#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("flip.in");
ofstream fout("flip.out");

class flip
{
public:
    int n,m;
    float A[100][100];
    void Citire()
    {
        for(int i=1; i<=n; ++i)
            for(int j=1; j<=m; ++j)
            {
                fin>>A[i][j];

            }

    }

    void Gen_caz()
    {
        int initial=0;

        for(int j=1; j<=n; ++j)
        {
            for(int i=1; i<=m; ++i)
            {
                initial=initial+A[i][j];
            }

            if(initial<0)
                for(int i=1; i<=n; ++i)
                    A[i][j]=-A[i][j];

            initial=0;

        }
        for(int i=1; i<=n; ++i)
        {
            for(int j=1; j<=m; ++j)
            {
                initial=initial+A[i][j];


            }

            if(initial<0)
                for(int j=1; j<=m; ++j)
                    A[i][j]=-A[i][j];
            initial=0;

        }


    }
    void Suma()
    {
        int S1=0;
        for(int i=1; i<=n; ++i)
        {
            for(int j=1; j<=m; ++j)
            {

                S1=S1+A[i][j];
            }

        }

        fout<<S1;
    }

};

int main()
{
    flip joc;
    fin>>joc.n;
    fin>>joc.m;
    joc.Citire();
    joc.Gen_caz();
    joc.Suma();
    return 0;
}

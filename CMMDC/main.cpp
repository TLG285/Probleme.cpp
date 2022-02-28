#include <bits/stdc++.h>

using namespace std;
ifstream fin("cmmdc.in");
ofstream fout("cmmdc.out");

class prim
{
public:
    int a,b;

    void cmmdc()
    {
        while(a!=b)
        {
            if(a<b)
                b=b-a;
            else
                a=a-b;

        }
        if(a==1)
            fout<<0;
        else
            fout<< a;

    }

};

int main()
{
    prim prim;
    fin>>prim.a;
    fin>>prim.b;
    prim.cmmdc();

    return 0;
}

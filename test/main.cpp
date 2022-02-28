#include <bits/stdc++.h>

using namespace std;
ifstream fin("adunare.in");
ofstream fout("adunare.out");
class sum
{
public:
    int a,b;
    void suma()
    {
        fout<<a+b;

    }

};


int main()
{
    sum apb;
    fin>>apb.a;
    fin>>apb.b;
    apb.suma();
    return 0;
}

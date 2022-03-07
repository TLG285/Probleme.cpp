
#include <bits/stdc++.h>
using namespace std;
// aici va aparea definitia scrisa de voi a clasei Stiva
class Stiva
{
private:

   int v[1000];
   int i=1;

public:
    // depune valoarea x in stiva
    void Push(int x)
    {
        v[i]=x;
        i++;


    }
    // elimina un element din stiva daca stiva nu e vida
    void Pop()
    {
        i--;





    }
    // returneaza varful stivei
    // daca stiva este vida, returneaza -1
    int Top()
    {
       if(i!=0)
           return v[i-1];
       else return -1;
    }
    // returneaza valoarea maxima din stiva
    // daca stiva este vida, returneaza -1
    int Max()
    {
        int maxim=-999;
        if(i!=0)
        {
            for(int j=1;j<i;j++)
            {


                if(v[j]>maxim)
                    maxim=v[j];

            }
            return maxim;
        }
        else return -1;




    }
    // returneaza 1 daca stiva este vida
    // returneaza 0 daca stiva nu e vida
    int Empty()
    {
       if(i==0)
           return 1;
       else return 0;

    }
};
int main()
{
    Stiva w;
    w.Push(4);
    w.Push(2);
    w.Push(5);
    w.Push(1);

    cout << w.Top() << " " << w.Max() << "\n"; // afiseaza 1 5
    w.Pop();
    w.Pop();
    cout << w.Top() << " " << w.Max() << "\n"; // afiseaza 2 4
    return 0;
}
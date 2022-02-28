// C++ program to illustrate Map
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
    // Empty map container
    map<string, int> harta;

    // Insert elements in Map
    harta.insert(pair<string, int>("A", 40));
    harta.insert(pair<string, int>("b", 30));
    harta.insert(pair<string, int>("C", 60));

    // Iterator to iterate Map
    map<int, int>::iterator itr;

    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";

    // Print map gquiz1
    for (itr = harta.begin();
         itr != harta.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second
             << '\n';
    }
    return 0;
}

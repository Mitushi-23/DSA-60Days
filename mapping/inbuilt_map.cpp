#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map <string, int> ourmap;

    //insert
    pair<string, int>p("abc",1);
    ourmap.insert(p);
    ourmap["def"] = 2;

    //search or find
    cout << ourmap["abc"] << endl;
    cout << ourmap.at("abc") << endl;

    // cout << ourmap.at("bxhbc") << endl;
    cout << "Size: " << ourmap.size() << endl;
    cout << ourmap["bxhbc"] << endl;
    cout << "Size: " << ourmap.size() << endl;

    //ckeck Presence
    if(ourmap.count("bxhbc")>0)
    {
        cout << "bxhbc is present" << endl;
    }

    //erase
    ourmap.erase("bxhbc");
    cout << "Size: " << ourmap.size() << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int input[n];
    priority_queue<int>p;   
    for(int i=0;i<n;i++)
    {
        cin >> input[i];
    }

   for(int i=0;i<n;i++)
   {
        if(2*i+1 >=n || 2*1+2 >=n)
        {
            break;
        }
        if(input[2*i+1]> input[i] || input[2*i+2]>input[i])
        {
            cout << "false" << endl;
            return 0;
        }
   }
   cout << "true" << endl;
}
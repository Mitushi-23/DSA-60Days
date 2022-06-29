#include <bits/stdc++.h>
using namespace std;

void findLongestConseqSubseq(int arr[], int n)
{
	unordered_set<int> S;
	int ans = 0;
    int start;
    int end;

	for (int i = 0; i < n; i++)
		S.insert(arr[i]);

	for (int i = 0; i < n; i++)
	{
		if (S.find(arr[i] - 1) == S.end())
		{
			int j = arr[i];
			while (S.find(j) != S.end())
				j++;
            if(ans < (j-arr[i]))
            {
               start = arr[i];
               end = j-1;
                ans = j-arr[i];
            }
		}
	}
    cout << start << " " << end << endl;	
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
	findLongestConseqSubseq(arr, n);
	return 0;
}

/***** In the name of Allah, the Most Gracious, the Most Merciful *****/
#include<bits/stdc++.h>
using namespace std;

#define Allahu_Akbar ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int

void Ashfaque()
{
	Allahu_Akbar;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}


int main()
{
	Ashfaque();
	ll n;
	while (cin >> n)
	{
		ll arr[n + 2];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		ll money; cin >> money;
		ll div = money / 2;
		sort(arr, arr + n);
		ll left = 0, right = n - 1;
		for (int i = 0; i < n - 1; ++i)
		{
			if (arr[i] <= div && arr[i + 1] >= div)
			{
				left = i;
				right = i + 1;
				break;
			}
		}
		vector<pair<int, int>> vp;
		for (int i = left; i >= 0; i--)
		{
			for (int j = right; j < n; ++j)
			{
				if (arr[i] + arr[j] == money)
				{
					vp.push_back({arr[i], arr[j]});
				}
			}
		}
		int firstPrice = 0, secondPrice = 0;
		int len = vp.size();
		int min = INT_MAX;
		for (int i = 0; i < len; ++i)
		{
			if (((vp[i].second) - (vp[i].first)) < min)
			{
				min = ((vp[i].second) - (vp[i].first));
				firstPrice = vp[i].first;
				secondPrice = vp[i].second;
			}
		}
		cout << "Peter should buy books whose prices are " << firstPrice << " and " << secondPrice <<  "." << endl << endl;
	}
	return 0;
}

/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do something instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
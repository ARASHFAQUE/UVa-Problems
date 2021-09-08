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
	ull n; cin >> n;
	ull girlsHeight[n + 2];
	for (ull i = 0; i < n; ++i)
	{
		cin >> girlsHeight[i];
	}
	ull q; cin >> q;
	ull luchuHeight[q + 2];
	for (ull i = 0; i < q; ++i)
	{
		cin >> luchuHeight[i];
	}
	for (ull i = 0; i < q; ++i)
	{
		ull firsHeight = -500;
		for (ull j = 0; j < n; ++j)
		{
			if (girlsHeight[j] < luchuHeight[i])
			{
				firsHeight = girlsHeight[j];
			}
			if (girlsHeight[j] > luchuHeight[i] && firsHeight != -500)
			{
				cout << firsHeight << " " << girlsHeight[j] << endl;
				break;
			}
			if (girlsHeight[j] > luchuHeight[i] && firsHeight == -500)
			{
				cout << 'X' << " " << girlsHeight[j] << endl;
				break;
			}
			if (j == (n - 1))
			{
				cout << firsHeight << " " << 'X' << endl;
			}
		}
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
#include<bits/stdc++.h>
using namespace std;
#define Fast ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long

int main()
{
    Fast;
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        ll sum = 0;
        ll len = s.size();
        for (ll i = 0; i < len; ++i)
        {
            sum += s[i] - 48;
        }
        cout << sum << endl << endl;
    }
}

/***** In the name of Allah, the Most Gracious, the Most Merciful *****/
/*
#include<bits/stdc++.h>
using namespace std;

#define Allahu_Akbar ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define PI 3.141592653589793238462
const long double pi = acos(-1.L);
#define printPI cout << setprecision(numeric_limits<long double>::digits10 + 1) << pi << '\n'

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
    int t; cin >> t;
    while (t--)
    {
        int l, c; cin >> l >> c;
        int total = l * c;
        int count = 1;
        for (int i = 1; i <= l; ++i)
        {
            for (int j = 1; j <= c; ++j)
            {
                if (count % 2 == 1)
                {
                    cout << '*';
                }
                else cout << '.';
                count++;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

*/
/***** In the name of Allah, the Most Gracious, the Most Merciful *****/
#include<bits/stdc++.h>
using namespace std;

#define Allahu_Akbar ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define line "\n"
#define ll long long int
#define ull unsigned long long int


#define MX 1005

int graph[MX][MX];
bool visited[MX][MX];
int dist[MX][MX];

int dx[] = { -1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

struct node
{
	int x;
	int y;
};

bool valid(int x, int y, int row, int col)
{
	return (x >= 0 && x < row && y >= 0 && y < col && !visited[x][y] && graph[x][y] != -5);
}

void bfs(int sx, int sy, int row, int col)
{
	queue<node> Q;
	Q.push({sx, sy});
	visited[sx][sy] = 1;
	dist[sx][sy] = 0;
	while (!Q.empty())
	{
		int x = Q.front().x;
		int y = Q.front().y;
		Q.pop();
		for (int i = 0; i < 4; i++)
		{
			int next_x = x + dx[i];
			int next_y = y + dy[i];
			if (valid(next_x, next_y, row, col))
			{
				visited[next_x][next_y] = 1;
				dist[next_x][next_y] =  dist[x][y] + 1;
				Q.push({next_x, next_y});
			}
		}
	}
}

int main()
{
	Allahu_Akbar;
	//freopen("input.txt", "r", stdin);
	int row, col;
	while (cin >> row >> col)
	{
		if (row == 0 && col == 0) break;
		int R; cin >> R;
		for (int i = 1; i <= R; ++i)
		{
			int r, nums; cin >> r >> nums;
			for (int j = 0; j < nums; ++j)
			{
				int y; cin >> y;
				graph[r][y] = -5;
			}
		}
		int source1, source2;
		cin >> source1 >> source2;
		bfs(source1, source2, row, col);
		int dest1, dest2;
		cin >> dest1 >> dest2;
		cout << dist[dest1][dest2] << line;
		memset(visited, 0, sizeof(visited));
		memset(graph, 0, sizeof(graph));
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
//DFS基礎題，典型題。用DFS找聯通塊：從每個@格子出發，遞迴遍歷它周圍的@格子。
//每次訪問一個格子時就給它寫上一個“連通分量編號”，這樣就可以在訪問之前檢查它是否已經有了編號，從而同一個格子被訪問多次
#include<cstdio>
#include<cstring>
const int maxn = 100 + 5;

char pic[maxn][maxn];
int m, n, idx[maxn][maxn];

void dfs(int r, int c, int id){
	if (r < 0 || r >= m || c < 0 || c >= n)
		return;  //出界的格子
	if (idx[r][c]>0 || pic[r][c] != '@')return;
	idx[r][c] = id;//連通分量編號
	for (int dr = -1; dr <= 1;dr++)
	for (int dc = -1; dc <= 1;dc++)
	if (dr != 0 || dc != 0) dfs(r + dr, c + dc, id);

}

int main()
{
	while (scanf("%d%d", &m, &n) == 2 && m&& n)
	{
		for (int i = 0; i < m; i++)
			scanf("%s", pic[i]);
		memset(idx, 0, sizeof(idx)); //用於標記已經訪問過的格子
		int cnt = 0;
		for (int i = 0; i < m;i++)
		for (int j = 0; j < n;j++)
		if (idx[i][j] == 0 && pic[i][j] == '@')dfs(i, j, ++cnt);
		printf("%d\n", cnt);
	}

	return 0;
}
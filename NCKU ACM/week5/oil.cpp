void dfs(int r, int c) {
  if (plot[r][c] == '*') return;
  plot[r][c] = '*';

  for (int dr = -1; dr <= 1; dr++)
    for (int dc = -1; dc <= 1; dc++) //雙重迴圈讓八個方位都走
      if (r+dr >= 0 && r+dr < m && c+dc >= 0 && c+dc < n)
        dfs(r+dr, c+dc);
}

int count = 0;
for (int i = 0; i < m; i++)
  for (int j = 0; j < n; j++)
    if (plot[i][j] == '@') { dfs(i, j); count++; }
#include <stdio.h>
#include <sstream>
#define endl '\n'
using namespace std;

int parent[65536], weight[65536];
int findp(int x) {
    return parent[x] == x ? x : parent[x] = findp(parent[x]);
}
int joint(int x, int y) {
    x = findp(x), y = findp(y);
    if (x == y)	return 0;
    if (weight[x] > weight[y])
        parent[y] = x, weight[x] += weight[y];
    else
        parent[x] = y, weight[y] += weight[x];
    return 1;
}
int main() {
    int testcase, n;
    char line[1024];
    scanf("%d", &testcase);
    while (getchar() != '\n');
    while (getchar() != '\n');
    while (testcase--) {
        scanf("%d", &n);
        while (getchar() != '\n');
        for (int i = 0; i < n; i++)
            parent[i] = i, weight[i] = 1;
        int ret = n, x, y;
        while (gets(line) && line[0] != '\0') {
            stringstream sin(line);
            while (sin >> x >> y) {
                x--, y--;
                ret -= joint(x, y);
            }
        }
        printf("%d\n", ret);
        if (testcase)
            puts("");
    }
    return 0;
}
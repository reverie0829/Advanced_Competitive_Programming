#include <cstdio>
using namespace std;
int Set[100001];
int nOfNets;

int getNum(char line[], int &i);
void MakeSet(int n);
int FindSetRoot(int x);
void Union(int x, int y);

int main()
{
    int Case, N;
    char line[1000];
    scanf("%d", &Case);

    while (Case--) {
        scanf("%d ", &N);

        MakeSet(N);
        nOfNets = N;

        while (gets(line)) {
            if (line[0] == '\0') break;

            for (int i = 0; line[i];) {
                int X = getNum(line, i);
                int Y = getNum(line, i);
                Union(X, Y);
            }
        }
        printf("%d\n", nOfNets);
        if (Case) putchar('\n');
    }
}
int getNum(char line[], int &i)
{
    int n = 0;
    while (line[i] != ' ' && line[i] != '\0') {
        n = n * 10 + (line[i] - '0');
        ++i;
    }
    while (line[i] == ' ' && line[i] != '\0') ++i;
    return n;
}
void MakeSet(int n)
{
    for (int i = 1; i <= n; ++i)
        Set[i] = i;
}
int FindSetRoot(int x)
{
    if (Set[x] == x)
        return x;
    return Set[x] = FindSetRoot(Set[x]);
}
void Union(int X, int Y)
{
    X = FindSetRoot(X);
    Y = FindSetRoot(Y);
    if (X != Y){
        Set[X] = Y;
        --nOfNets;
    }
}
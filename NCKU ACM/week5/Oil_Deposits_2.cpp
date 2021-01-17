//這道題的思路很簡單，就是通過深度搜索來不斷查找與當前位置的“@”相鄰的格子，並在找到新的“@”格子后進一步搜索。
//而本題的關鍵則是對於已經遍歷過的格子進行保存，而最簡單粗暴的方法就是對於遍歷到的“@”進行修改（當然在修改時也要在當前格子的四周查找新格子）。
//當由第一個格子向四周擴展修改完成后，就可以愉快地將連塊數+1了。
#include<cstdio>
using namespace std;
int x[8]={-1,0,1,-1,1,-1,0,1};//x方向移動大小
int y[8]={-1,-1,-1,0,0,1,1,1};//y方向移動大小
int sum=0;
char ch[105][105];
void work(int i,int j,int m,int n)//繼續查找
{
    if(i<0 || i>=m || j<0 || j>=n)return;
    for(int k=0;k<=7;++k)
    if(ch[i+y[k]][j+x[k]]=='@')
    {
        ch[i+y[k]][j+x[k]]='*';//修改
        work(i+y[k],j+x[k],m,n);
    }
    return;
}
void search(int m,int n)//查找第一個"@"
{
    for(int i=0;i<m;++i)
    for(int j=0;j<n;++j)
    if(ch[i][j]=='@')
    {
    ch[i][j]='*';//修改
    work(i,j,m,n);
    sum+=1;//連塊數+1
    }
    return;
}
int main()
{
    int m,n;
    while(scanf("%d%d\n",&m,&n)==2 && m && n)
    {
        for(int i=0;i<m;++i)
        {
        for(int j=0;j<n;++j)
        scanf("%c",&ch[i][j]);
        scanf("\n");
        }
        search(m,n);
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
//輸入的方式也值得一提。通過while循環，我們可以很好的處理不知數目的多組數據，
//通過判斷輸入的數量和輸入的變量大小可以合適的繼續和中止程序。
//而本題中的輸入方式可以換成字符串string，那么便可以滑稽地省去輸入中的手動換行操作（包括前面m和n的輸入）。
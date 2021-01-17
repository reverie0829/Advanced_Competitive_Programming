#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// 輸出
void Print(const int& index, const int& result)
{
	if (result == -1)
	{
		cout << "Case #" << index + 1 << ": OK" << endl;
	}
	else
	{
		cout << "Case #" << index + 1 << ": " << result << endl;
	}
}

// num1: 奇數數列
// num2: 偶數數列
int Compute(vector<int>& num1, vector<int>& num2)
{
    // 直接對奇數和偶數排序，可換成自己實作排序(O(N^2)應該是不能)。
	sort(num1.begin(), num1.end());
	sort(num2.begin(), num2.end());
	int nowNum = num1[0];
    
    // 檢查奇數索引和偶數索引兩個相鄰，是否是非遞減，若不是則回傳索引位置。
    // 依照num2的大小來取得索引, 所以要乘上2才是原本索引位置。
    // 為何回傳上一個索引位置? 因我們是用上一個數字來比較，反之用下一個比較則傳回當下索引
	for (size_t index = 0; index < num2.size(); index++)
	{
		if (nowNum > num1[index])
		{
			return (index << 1) - 1;
		}

		if (num1[index] > num2[index])
		{
			return (index << 1);
		}
		nowNum = num2[index];
	}

    // num1可能會比num2多一個數字，若小於上一個數字則回傳上一個索引位置。
    // 索引位置num1大小乘上2 - 2為最大索引(因為num2少1所以要多減1)，回傳上一個，所以減3
	if (num1.size() > num2.size()
		&& nowNum > num1[num1.size() - 1])
	{
		return (num1.size() << 1) - 3;
	}

	return -1;
}

// 輸入
void Input()
{
    //筆數
	int testCount = 0;
    
	while (cin >> testCount)
	{
		for (int count = 0; count < testCount; count++)
		{
            // 數列長度
			int numSize;
			cin >> numSize;
			vector<int> num1(static_cast<unsigned int>(ceil(numSize / 2.0)));
			vector<int> num2(static_cast<unsigned int>(floor(numSize / 2.0)));
            
            // 輸入奇偶數列
			for (size_t index = 0; index < num2.size(); index++)
			{
				cin >> num1[index] >> num2[index];
			}
            
            // 奇數可能多一個
			if (num1.size() > num2.size())
			{
				cin >> num1[num1.size() - 1];
			}

			int result = Compute(num1, num2);

			Print(count, result);
		}
	}
}

int main()
{
	Input();
	return 0;
}
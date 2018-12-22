// 笔试真题.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

#if 0
int get_min(int M) {
	int sum = 1;
	for (int i = 0; i < M-1; i++)
		sum = sum * 2;
	return sum;
}
int main()
{
	cout << "请输入出差天数、巧克力块数：" << endl;
	int M, N;
	cin >> M;
	cin >> N;
	int min = get_min(M);
	int max = min;
	while (true) {
		int buff=max;
		int sum =N;
		for (int i = 0; i < M; i++)
		{
			sum -= buff;
			buff = (int)(buff / 2.0 + 0.5);
		}
		if (sum >= 0) max++;
		else break;
	}
	max--;
	cout << "第一天最多吃" << max << "块" << endl;

    return 0;
}
#endif

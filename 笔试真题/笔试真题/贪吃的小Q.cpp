// ��������.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "����������������ɿ���������" << endl;
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
	cout << "��һ������" << max << "��" << endl;

    return 0;
}
#endif

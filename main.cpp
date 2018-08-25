#include <stdio.h>
#include <iostream>
using namespace std;
int num=0;
void move(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("%c-->%c\n",a,c);
		num++;
		return;
	}
	move(n - 1, a, c, b);
	printf("%c-->%c\n", a, c);
	num++;
	move(n - 1, b, a, c);
}
void main()
{
	//num = 0;
	move(4, 'A', 'B', 'C');
	cout << "num:" << num << endl;
	for (int i = 1; i <= 100;)
	{
		cout << i << endl;
		i += 3;
	}
	system("pause");
}
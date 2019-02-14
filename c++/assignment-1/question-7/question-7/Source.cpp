#include<iostream>
using namespace std;
class mat
{
	int a[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
	int b[3][1] = { {1},{2},{3} };
	int c[3][3];
public:
	friend void mul(mat m1);
};
void mul(mat m1)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int sum = 0;
			for (int k = 0; k < 3; k++)
			{
				sum = sum + m1.a[i][k] * m1.b[k][j];
			}
			m1.c[i][j] = sum;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			cout << m1.c[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	mat m1;
	mul(m1);
	getchar();
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int H;
	int Z;
	int c;
	cin >> H >> Z;;
	char a[100][100];
	for (int i = 0; i < H; i++)
	{
	for (int j = 0; j < Z; j++)
	cin >> a[i][j];
	}
	cin >> c;
	for (int s = 0; s < c; s++)//²¡¶¾ÖÜÆÚ
	{
	for (int m = 0; m < H; m++)
	{
	for (int n = 0; n < Z; n++)
	{
	if (a[m][n] == 'X')
	{
	if (m - 1 >= 0 && a[m - 1][n] != 'P')
	a[m - 1][n] = 'Y';
	if (m + 1 < H && a[m + 1][n] != 'P')
	a[m + 1][n] = 'Y';
	if (n - 1 >= 0 && a[m][n - 1] != 'P')
	a[m][n - 1] = 'Y';
	if (n + 1 < Z && a[m][n + 1] != 'P')
	a[m][n + 1] = 'Y';
	}
	}
	}
	for (int p = 0; p < H; p++)
	{
	for (int q = 0; q < Z; q++)
	{
	if (a[p][q] == 'Y')
	a[p][q] = 'X';
	}
	}
	}
	for (int e = 0; e < H; e++)
	{
	for (int f = 0; f < Z; f++)
	cout << a[e][f];
    cout << endl;
	}
}
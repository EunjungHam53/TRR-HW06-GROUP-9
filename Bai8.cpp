#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	cin >> n;
	int F[100][100];

	// Buoc dinh nghia co ban
	memset(F, 0, sizeof(F));
	for(int i = 1; i <= n; i++)
        F[i][0] = 1;
    F[1][1] = 1;

    // Buoc quy hoach dong
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		 F[i][j] = F[i - 1][j] + F[i - 1][j - 1];
	}

	// Ve bang quy hoach dong
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
        {
            cout << setfill (' ') << setw (4);
            cout << F[i][j];
        }
        cout << endl;
	}

	// Sau khi da ve xong bang quy hoach dong ta tinh tong cac truong hop xau co do dai n co so chu so 1 lon hon so chu so 0
	int sum = 0;
	for (int i = n/2 + 1; i <= n; i++)
        sum += F[n][i];
	cout << sum;
	return 0;
}

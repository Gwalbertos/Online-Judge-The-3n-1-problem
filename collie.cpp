#include <iostream>

using namespace std;
int main()
{
	int i;
	int j;
	int result = 1;
	int winner = 0;
	cin >> i;
	cin >> j;
	int x = i;

	for(int t = i; t <= j; t++)
	{	
		result = 1;
		while(x>1)
		{
			if (x % 2 == 0)
			{
				x = x / 2;
				result++;
			}
			else
			{
				x = 3 * x + 1;
				result++;
			}
		}

		if (winner < result)
		{
			winner = result;
		}

		x = t;

	}
	cout << i << " " << j << " " << winner;
	return 0;
}

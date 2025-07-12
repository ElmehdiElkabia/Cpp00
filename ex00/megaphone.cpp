#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int i;
	int	j;

	i = 1;
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] -= 32;
				cout << argv[i][j];
				j++;
			}
			i++;
		}
		cout << endl;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	int left_views[4] = {4, 3, 2, 1};
	int grid[4][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			if (left_views[i] = 4)
				grid[i][j] = {1, 2, 3, 4};
		}
	}

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d", grid[i][j]);
		}
	}

	return (0);
}

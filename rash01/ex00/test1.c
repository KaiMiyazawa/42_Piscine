#include<stdio.h>

int	main(void)
{
	int	possibility[4][4][4];

	int	one;
	int	two;
	int	three;
	int	param[4][4] = {{4, 3, 2, 1},
						{1, 2, 2, 2},
						{4, 3, 2, 1},
						{1, 2, 2, 2}};

	one = 0;
	while (one < 4)
	{
		two = 0;
		while (two < 4)
		{
			three = 0;
			while (three < 4)
			{
				possibility[one][two][three] = three + 1;
				three++;
			}
			two++;
		}
		one++;
	}


	/*見えるビルの数が４の時、目の前のビルを４に確定する*/
	/*左の数字の処理*/
	one = 0;
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (one < 4)
	{
		if (param[2][one] == 4)
		{
			while (b < 4)
			{
				a = 0;
				while (a < 4)
				{
					if (possibility[one][b][a] != b + 1)
						possibility[one][b][a] = 0;
					a++;
				}
				b++;
			}
		}
		one++;
	}


	/*見えるビルの数が４の時、目の前のビルを４に確定する*/
	/*上の数字の処理*/
	one = 0;
	a = 0;
	b = 0;
	while (one < 4)
	{
		if (param[0][one] == 4)
		{
			while (b < 4)
			{
				a = 0;
				while (a < 4)
				{
					if (possibility[b][one][a] != b + 1)
						possibility[b][one][a] = 0;
					a++;
				}
				b++;
			}
		}
		one++;
	}


	/*見えるビルの数が４の時、目の前のビルを４に確定する*/
	/*右の数字の処理*/
	one = 0;
	a = 0;
	b = 4;
	int c;
	c = 0;
	while (one < 4)
	{
		if (param[3][one] == 4)
		{
			while (b != 0)
			{
				a = 0;
				while (a < 4)
				{
					if (possibility[one][b][a] != c)
						possibility[one][b][a] = 0;
					a++;
				}
				c++;
				b--;
			}
		}
		one++;
	}


	/*見えるビルの数が４の時、目の前のビルを４に確定する*/
	/*下の数字の処理*/
	one = 0;
	a = 0;
	b = 0;
	c = 4;
	while (one < 4)
	{
		if (param[1][one] == 4)
		{
			while (b < 4)
			{
				a = 0;
				while (a < 4)
				{
					if (possibility[b][one][a] != c)
						possibility[b][one][a] = 0;
					a++;
				}
				c--;
				b++;
			}
		}
		one++;
	}









	one = 0;
	printf("  ");
	while (one < 4)
	{
		printf("        %d       ", param[0][one]);
		one++;
	}
	printf("\n");
	one = 0;
	printf("  -----------------------------------------------------------------\n");
	while (one < 4)
	{
		two = 0;
		printf("%d", param[2][one]);
		printf(" |  ");
		while (two < 4)
		{
			three = 0;
			while (three < 4)
			{
				printf("%d, ", possibility[one][two][three]);
				three++;
			}
			printf(" |  ");
			two++;
		}
		printf("%d", param[3][one]);
		printf("\n");
		printf("  -----------------------------------------------------------------\n");
		one++;
	}

	int	d;
	d = 0;
	printf("  ");
	while (d < 4)
	{
		printf("        %d       ", param[1][d]);
		d++;
	}
}

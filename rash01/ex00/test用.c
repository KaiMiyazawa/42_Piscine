#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int	my_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count++);
}




int	make_num(char *str, int count, int num)
{
	while ((str[count] >= '0' && str[count] <= '9'))
	{
		num *= 10;
		num += str[count] - '0';
		count++;
	}
	return (num);
}

int	my_atoi(char *str)
{
	int	num;
	int	count;
	int	minus_count;

	num = 0;
	count = 0;
	minus_count = 0;
	if ((str[count] >= '0' && str[count] <= '9'))
	{
		num = make_num(str, count, num);
	}
	return (num);
}




int	**make_int_array_from_param(char *param)
{
	int	**result;
	int	count;
	int	param_len;
	int	count2;

	param_len = my_strlen(param) + 1;
	count = 0;
	while (param[count] != '\0')
	{
		if ((count % (param_len / 4)) == 0)
			count2 = 0;
		if (count < param_len / 4)
			result[0][count2 / 2] = my_atoi(&param[count]);
		else if (count < param_len / 2)
			result[1][count2 / 2] = my_atoi(&param[count]);
		else if (count < param_len * 3 / 4)
			result[2][count2 / 2] = my_atoi(&param[count]);
		else
			result[3][count2 / 2] = my_atoi(&param[count]);
		count2++;
		count++;
	}

	return (result);
}

int	main(int argc, char *argv[])
{
	int	**param_int;

	param_int = NULL;
	param_int = (int**)malloc((my_strlen(*argv) + 1) * sizeof(int) / 2);


	for(int i = 0; i < 4; i++){
		param_int[i] = (int*)malloc(sizeof(int) * 4);
		if(param_int[i] == NULL){
			return -1;
		}
	}



	param_int = make_int_array_from_param(argv[1]);


	int n;
	n = 4;
	for(int k = 0; k < n; k++) {
		printf("%d", param_int[0][k]);
	}

	for (int p = 0; p<4;p++)
	{
		free(param_int[p]);
	}
	free(param_int);

	//if (argc == 2 /*&& count_param_num(argv[1]) % 4 == 0
	//	&& count_param_num(argv[1]) > 16*/)
	//{
	//	//remake_param(argv);
	//	write(1, &argv[1][0], 1);
	//}
	//else
	//	put_error();
	return (0);
}

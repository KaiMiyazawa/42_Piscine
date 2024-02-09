/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:46:04 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/19 02:09:03 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
精力的に取り組みましたが、結果的に正しく挙動するプログラムを作ることはできませんでした。
以下に、当初考えていた、プログラムの手順を簡単に記しておきます。


①二次元配列で表せるマップの要素に加え、もうひとつ次元を増やして、
	三次元配列を使い、そのマスに建ちうるタワーの高さの配列を用意する。
	（そのマスにある高さのタワーが建たないと分かった時点で、その高さの数字を三次元目の配列から削除する。）

②コマンドライン引数によって自動的に絞られるタワーの配置を確定させる。
	（４×４の場合、４つタワーが見える時は１−２−３ー４の順で並ぶことが確定する、など）

③消去法で建ちうるタワーの高さが一つに絞られた時に、タワーの高さを確定する。

④確定したマスの上下左右のマスから、その確定したタワーの高さの数字を三次元目の配列から削除する

⑤ ③と④を、変化がなくなるまで（行き詰まるまで）繰り返す。

⑥（できれば）建ちうるタワーの高さの可能性の数が少ないマスからバックトラック法で解の探索をする。
*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//#define GRID_SIZE 4

//print_puzzle();

void	put_error(void)
{
	write(1, "Error\n", 6);
}

int	strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++ != '\0')
	{
		length++;
	}
	return (length);
}

int	count_param_num(char *param)
{
	int	count;
	int	result;
	int	words_flug;

	count = 0;
	result = 0;
	words_flug = 0;
	if (param[count] >= '0' && param[count] <= '9')
	{
		words_flug = 1;
		while (param[count] != '\0')
		{
			if ()
		}


	}
	else
		return (0);

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
		num *= add_minus(minus_count);
	}
	return (num);
}

int	**make_int_array_from_param(char *param)
{
	int	**result;
	int	count;
	int	param_len;
	int	count2;

	param_len = strlen(param) + 1;
	count = 0;
	while (param[count] != '\0')
	{
		if ((count % (param_len / 4)) == 0)
			count2 = 0;
		if (count < param_len / 4)
			result[0][count2 / 2] = my_atoi(param[count]);
		else if (count < param_len / 2)
			result[1][count2 / 2] = my_atoi(param[count]);
		else if (count < param_len * 3 / 4)
			result[2][count2 / 2] = my_atoi(param[count]);
		else
			result[3][count2 / 2] = my_atoi(param[count]);
		count2++;
		count++;
	}

	return (result);
}

int	main(int argc, char *argv[])
{
	int	**param_int;

	param_int = NULL;
	param_int = (int**)malloc(strlen(argv) / 2);
	param_int = make_int_array_from_param(argv[1]);



	for(int i = 0; i < n; i++) {
		printf("%d", param_int[0][i]);
	}

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






//int	main(void)
//{
//	// 入力となる建物の高さを格納する配列 とりあえずコマンドライン引数は後回し
//	int views[GRID_SIZE][GRID_SIZE] = {
//		{4, 3, 2, 1},	//colup1-4
//		{1, 2, 2, 2},	//coldown1-4
//		{4, 3, 2, 1},	//rowleft1-4
//		{1, 2, 2, 2}	//rowright1-4
//	};

//	// パズルの解を格納する配列
//	int	grid[GRID_SIZE][GRID_SIZE];

//	// ビルディングパズルを解く
//	solve_puzzle();

//	// 解を表示する
//	print_puzzle();
//	return (0);
//}

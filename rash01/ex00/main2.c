/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:46:04 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/19 02:13:04 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

#define GRID_SIZE 4

//print_puzzle();
void	display_solution(int grid[4][4]);

int	main(void)
{
	// 入力となる建物の高さを格納する配列 とりあえずコマンドライン引数は後回し
	int views[4][4] = {
		{4, 3, 2, 1},	//colup1-4
		{1, 2, 2, 2},	//coldown1-4
		{4, 3, 2, 1},	//rowleft1-4
		{1, 2, 2, 2}	//rowright1-4
	};

	// パズルの解を格納する配列
	int	grid[4][4];

	// ビルディングパズルを解く
	//solve_puzzle();

	// 解を表示する
	display_solution();
	return (0);
}

void	display_solution(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(grid[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
	}
}

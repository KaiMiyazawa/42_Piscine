/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:26:18 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/18 23:22:00 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*答えが出てるかどうかを、二次元配列の要素に 0 が含まれてるかどうかで判定する*/
/* 0 が一つも含まれてなかったら、解ききったと判断して 0 を返す*/
/* 0 が一つでも含まれていたら、まだ解ききってないと判断して、1 以上を返す*/
int	check_finish(int **param)
{
	int	one;
	int	two;

	one = 0;
	while (one < 4)
	{
		two = 0;
		while (two < 4)
		{
			if (param[one][two] == 0)
				return (1);
			two++;
		}
		one++;
	}
	return (0);
}

/*パラメーターとしては、N×Nの二次元配列が渡される*/
/*param[0][]は上*/
/*param[1][]は下*/
/*param[2][]は左*/
/*param[3][]は右*/
int	**solve(int **param)
{
	/*最初に戻り値として返す答えの二次元配列の全要素に 0 を代入する*/
	int	ans[4][4] = {{0, 0, 0, 0},
					{0, 0, 0, 0},
					{0, 0, 0, 0},
					{0, 0, 0, 0}};


	int	count;

	int	poss[4][4][4];

	int	one;
	int	two;
	int	thr;

	one = 0;
	while (one < 4)
	{
		two = 0;
		while (two < 4)
		{
			thr = 0;
			while (thr < 4)
			{
				poss[one][two][thr] = thr + 1;
				thr++;
			}
			two++;
		}
		one++;
	}


//	int	tower_size;

//	tower_size = 1;
//	one = 0;
//	while (tower_size < 5)
//	{
//		while (one < 4)
//		{
//			two = 0;
//			while (two < 4)
//			{
//				thr = 0;
//				while (thr < 4)
//				{
//					/*配置の可能性の法則性と照らし合わせて、消せたら消す*/
//					/*消す = 0 にする*/
//					try_elimi_poss(poss[one][two][thr], one, two, thr, param);
//					thr++;
//				}
//				two++;
//			}
//			one++;
//		}
//		tower_size++;
//	}
//*/



	one = 0;
	while (one < 4)
	{
		two = 0;
		while (two < 4)
		{
			thr = 0;
			printf(" |  ");
			while (thr < 4)
			{
				printf("%d, ", poss[one][two][thr]);
				thr++;
			}
			printf(" |  ");
			two++;
		}

		printf("\n");
		one++;
	}

	/*バックトラック法で探索*/
	while (check_finish(param) != 0)
	{




	}
	return (**ans);
}

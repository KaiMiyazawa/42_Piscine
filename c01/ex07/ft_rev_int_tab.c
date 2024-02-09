/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:59:26 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/14 10:10:23 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap_num;
	int	count;
	int	max;

	max = size - 1;
	count = 0;
	swap_num = size / 2;
	while (swap_num)
	{
		ft_swap(&tab[count], &tab[max]);
		max--;
		swap_num--;
		count++;
	}
}

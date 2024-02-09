/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:31:20 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/14 10:08:27 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	count2;

	count = 0;
	count2 = size + 1;
	while (count < size)
	{
		count2 = size;
		while (count2 > count)
		{
			if (tab[count2 - 1] > tab[count2])
			{
				ft_swap(&tab[count2], &tab[count2 - 1]);
			}
			count2--;
		}
		count++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:53:27 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/19 07:11:55 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	ft_swap(char **a, char **b)
{
	char	*temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] != '\0' || s2[count] != '\0') && s1[count] == s2[count])
		count++;
	return (s1[count] - s2[count]);
}

int	main(int argc, char *argv[])
{
	int	count;
	int	count2;

	count = 1;
	while (count < argc - 1)
	{
		count2 = 1;
		while (count2 < argc - 1)
		{
			if (ft_strcmp(argv[count2], argv[count2 + 1]) > 0)
				ft_swap(&argv[count2], &argv[count2 + 1]);
			count2++;
		}
		count++;
	}
	count = 1;
	if (argc != 1)
	{
		while (argv[count] != '\0')
		{
			write(1, argv[count], ft_strlen(argv[count]));
			write(1, "\n", 1);
			count++;
		}
	}
}

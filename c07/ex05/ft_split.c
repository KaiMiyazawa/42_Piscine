/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:39:31 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/28 19:51:11 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	check_str(char letter, char *charset)
{
	int	count;

	count = 0;
	while (charset[count] != '\0')
	{
		if (letter == charset[count])
			return (1);
		count++;
	}
	return (0);
}

int	ft_unique_strlen(char *str, char *charset, int count)
{
	int	length;

	length = 0;
	while (str[count] && !check_str(str[count], charset))
	{
		count++;
		length++;
	}
	return (length);
}

int	cou_word(char *str, char *charset)
{
	int	count;
	int	words_flag;
	int	result;

	count = 0;
	result = 0;
	words_flag = 1;
	while (str[count] != '\0')
	{
		if (check_str(str[count], charset))
			words_flag = 1;
		else if (words_flag == 1)
		{
			words_flag = 0;
			result++;
		}
		count++;
	}
	return (result);
}

char	*make_words(char *str, char *charset, int count)
{
	char	*one_word;
	int		size_of_word;
	int		k;

	size_of_word = ft_unique_strlen(str, charset, count);
	one_word = (char *)malloc(sizeof(char) * (size_of_word + 1));
	k = 0;
	while (k < size_of_word)
		one_word[k++] = str[count++];
	one_word[k] = '\0';
	return (one_word);
}

char	**ft_split(char *str, char *charset)
{
	char	**resu_vec;
	int		count;
	int		count2;

	resu_vec = (char **)malloc(sizeof(char *) * (cou_word(str, charset) + 1));
	count = 0;
	count2 = 0;
	if (cou_word(str, charset) != 0)
	{
		while (str[count] != '\0')
		{
			while (str[count] != '\0' && check_str(str[count], charset))
				count++;
			if (str[count] != '\0')
			{
				resu_vec[count2] = make_words(str, charset, count);
				count2++;
			}
			while (str[count] && check_str(str[count], charset) == 0)
				count++;
		}
	}
	resu_vec[count2] = 0;
	return (resu_vec);
}

/*
int	main(int argc, char *argv[])
{
	char	**result_char_vec;
	int		i;

	if (argc != 3)
		printf("引数が間違ってるんだわぁ、");
	else
	{
		result_char_vec = ft_split(argv[1], argv[2]);
		i = 0;
		while (result_char_vec[i])
		{
			printf("%d:  %s\n", (i + 1), result_char_vec[i]);
			i++;
		}
	}
}
*/
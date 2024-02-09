/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:25:42 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/02/26 22:26:15 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# define DICT "dictionary.txt"

typedef struct s_dict
{
	int		key;
	char	*str;
}t_dict;

int		check_dict(const char *buff);
int		check_arg_num(char *argv_num);
t_dict	*make_struct(char *buff, int row_num);
void	ft_show_dict(t_dict *buff);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
int		ft_normal_strlen(char *str);
int		ft_atoi(char *str);
int		make_num(char *str, int count, int num);
int		add_minus(int minus_count);
int		judge_minus(char *str, int count);
void	put_num_arg(int u_hundred_num, t_dict *dict_struct);
void	put_u_th(int arg_num, t_dict *dict_struct);
int		ft_str_is_unprintable(char *str);
int		ft_char_is_unprintable(char letter);
void	ft_putstr(char *str);
void	add_null(char *buff, int size);
int		char_count(void);
int		row_count(void);
char	*ft_unique_strdup(char *str);
char	*ft_unique_strcpy(char *dest, char *src);
void	put_error(void);

#endif
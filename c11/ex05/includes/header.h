/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:29:57 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/02 18:38:43 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

int		add_cal(int left, int right);
int		sub_cal(int left, int right);
int		mult_cal(int left, int right);
int		div_cal(int left, int right);
int		rim_cal(int left, int right);
int		ft_strlen(char *str);
char	check_and_change(char *ope);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

#endif
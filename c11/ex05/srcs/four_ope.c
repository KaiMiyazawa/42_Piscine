/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_ope.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmiyazaw <kmiyazaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:09:47 by kmiyazaw          #+#    #+#             */
/*   Updated: 2023/03/02 18:58:31 by kmiyazaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

int	add_cal(int left, int right)
{
	return (left + right);
}

int	sub_cal(int left, int right)
{
	return (left - right);
}

int	mult_cal(int left, int right)
{
	return (left * right);
}

int	div_cal(int left, int right)
{
	return (left / right);
}

int	rim_cal(int left, int right)
{
	return (left % right);
}

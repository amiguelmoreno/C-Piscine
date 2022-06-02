/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_decimals.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:06:54 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/02 20:31:13 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_passbase10(unsigned int num, va_list ptr, int sub_cnt)
{
	char	*base;

	base = "0123456789";
	if (num >= 10)
	{
		ft_passbase10(num / 10, ptr, sub_cnt);
		ft_passbase10(num % 10, ptr, sub_cnt);
	}
	else
	{
		ft_putchar(base[num]);
		sub_cnt++;
	}
}

void	ft_treat_decimal(va_list ptr, int sub_cnt)
{
	int	res;

	res = va_arg(ptr, long int);
	if (res < 0)
	{
		res = -res;
		sub_cnt++;
		ft_putchar('-');
	}
	ft_putnbr(res);
	if (res == 0)
		sub_cnt++;
	while (res != 0)
	{
		res = res / 10;
		sub_cnt++;
	}
}

void	ft_treat_unsigned_decimal(va_list ptr, int sub_cnt)
{
	int	res;

	res = va_arg(ptr, unsigned int);
	ft_passbase10(res, ptr, sub_cnt);
}

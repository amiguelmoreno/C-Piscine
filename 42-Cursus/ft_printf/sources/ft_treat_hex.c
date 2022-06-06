/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:06:56 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/03 13:12:58 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthexmin(unsigned long int number, int sub_cnt)
{
	char	*base;

	base = "0123456789abcdef";
	if (number >= 16)
	{
		sub_cnt = ft_puthexmin(number / 16, sub_cnt);
		sub_cnt = ft_puthexmin(number % 16, sub_cnt);
	}
	else
	{
		ft_putchar(base[number]);
		sub_cnt++;
	}
	return (sub_cnt);
}

int	ft_puthexmay(unsigned long int number, int sub_cnt)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (number >= 16)
	{
		sub_cnt = ft_puthexmay(number / 16, sub_cnt);
		sub_cnt = ft_puthexmay(number % 16, sub_cnt);
	}
	else
	{
		ft_putchar(base[number]);
		sub_cnt++;
	}
	return (sub_cnt);
}

int	ft_treat_hex_min(unsigned long int number, int sub_cnt)
{
	sub_cnt = ft_puthexmin(number, sub_cnt);
	return (sub_cnt);
}

int	ft_treat_hex_may(unsigned long int number, int sub_cnt)
{
	sub_cnt = ft_puthexmay(number, sub_cnt);
	return (sub_cnt);
}

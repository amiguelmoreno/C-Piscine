/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:07:07 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/02 19:29:11 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putpnt(unsigned long int number, va_list ptr, int sub_cnt)
{
	char	*base;

	base = "0123456789abcdef";
	if (number >= 16)
	{
		ft_putpnt(number / 16, ptr, sub_cnt);
		ft_putpnt(number % 16, ptr, sub_cnt);
	}
	else
	{
		ft_putchar(base[number]);
		sub_cnt++;
	}
}

void	ft_treat_pointer(va_list ptr, unsigned long int number, int sub_cnt)
{
	ft_putstr("0x");
	sub_cnt += 2;
	ft_putpnt(number, ptr, sub_cnt);
}

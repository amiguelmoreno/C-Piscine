/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:06:38 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/03 11:13:37 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	ft_treat_char(va_list ptr, int sub_cnt)
{
	int	x;

	x = va_arg(ptr, int);
	ft_putchar(x);
	sub_cnt++;
	return (sub_cnt);
}

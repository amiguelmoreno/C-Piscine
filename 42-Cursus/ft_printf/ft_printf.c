/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:45:55 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/31 20:25:27 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_conversion(char const *format, va_list ptr, int i)
{
	int		sub_cnt;
	char	str;

	sub_cnt = 0;
	if (format[i + 1] == 'c')
	{
	}
	return (sub_cnt);
}

int	ft_printf(char const *format, ...)
{
	int		i;
	int		cnt;
	va_list	ptr;

	i = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			cnt += ft_conversion(format, ptr, i);
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			cnt++;
			i++;
		}
	}
	return (cnt);
}

#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'z';
	ft_printf("Hola %c \n", c);
	printf("Hola %c \n", 'z');
}

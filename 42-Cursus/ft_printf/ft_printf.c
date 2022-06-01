/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:45:55 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/01 14:36:31 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_conversion(char value, va_list ptr, int i)
{
	int		sub_cnt;
	char	str;

	sub_cnt = 0;
	if (value == 'c')
		ft_treat_char(va_arg(ptr, int));
	else if (value == 's')
		ft_treat_string(va_arg(ptr, char *));
	else if (value == 'p')
		ft_treat_pointer(va_arg(ptr, void *));
	else if (value == 'd' || value == 'i')
		ft_treat_decimal(va_arg(ptr, ));
	else if (value == 'u')
		ft_treat_decimal(va_arg(ptr, ));
	else if (value == 'x')
		ft_treat_decimal(va_arg(ptr, ));
	else if (value == 'X')
		ft_treat_decimal(va_arg(ptr, ));
	else if (value == '%')
		ft_treat_decimal(va_arg(ptr, ));
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
			cnt += ft_conversion(format[i + 1], ptr, i);
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

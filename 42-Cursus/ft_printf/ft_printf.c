/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:45:55 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/31 14:32:45 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_conversion(char *format, int *ptr)
{
	int	sub_cnt;

	sub_cnt = 0;
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
		if (format[i] == "%")
		{
			cnt += ft_conversion(format[i + 1], ptr);
			i++;
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
	ft_printf("Hola\n");
	printf("Hola\n");
}

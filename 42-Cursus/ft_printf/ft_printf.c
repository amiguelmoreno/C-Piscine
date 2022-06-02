/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:45:55 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/02 20:31:38 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_conversion(char value, va_list ptr, int i)
{
	int	sub_cnt;

	sub_cnt = 0;
	if (value == 'c')
		ft_treat_char(ptr, sub_cnt);
	else if (value == 's')
		ft_treat_string(ptr, sub_cnt);
	else if (value == 'p')
		ft_treat_pointer(ptr, va_arg(ptr, unsigned long int), sub_cnt);
	else if (value == 'd' || value == 'i')
		ft_treat_decimal(ptr, sub_cnt);
	else if (value == 'u')
		ft_treat_unsigned_decimal(ptr, sub_cnt);
	else if (value == 'x')
		ft_treat_hex_min(ptr, sub_cnt);
	else if (value == 'X')
		ft_treat_hex_may(ptr, sub_cnt);
	else if (value == '%')
		ft_treat_percent(ptr, sub_cnt);
	return (sub_cnt);
}

int	ft_printf(char const *format, ...)
{
	int		i;
	int		cnt;
	va_list	ptr;

	i = 0;
	cnt = 0;
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
	int				i;
	char			*str;
	int				*ptr;
	unsigned int	num;

	num = 4232432;
	i = 't';
	str = "Goriontxu ha vuelto 12345";
	//char
	printf("Printf -> char: %c\n", i);
	ft_printf("Printf -> char: %c\n", i);
	// string
	printf("Printf -> string: %s\n", str);
	ft_printf("Printf -> string: %s\n", str);
	// puntero
	printf("Printf -> puntero: %p\n", &ptr);
	ft_printf("Printf -> puntero: %p\n", &ptr);
	// decimal
	printf("Printf -> decimal: %d\n", num);
	ft_printf("Printf -> decimal: %d\n", num);
	// unsigned decimal
	printf("Printf -> unsigned decimal: %i\n", num);
	ft_printf("Printf -> unsigned decimal: %i\n", num);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:07:14 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/02 16:43:09 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_treat_string(va_list ptr, int sub_cnt)
{
	char	*x;
	int		i;

	x = va_arg(ptr, char *);
	i = 0;
	while (x[i])
	{
		write(1, &x[i], 1);
		sub_cnt++;
		i++;
	}
}

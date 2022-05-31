/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_basics.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:15:25 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/31 20:25:56 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

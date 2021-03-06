/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 09:59:55 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/19 23:13:39 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int n;
	int neg;

	while (*str == '\r' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == ' ')
		str++;
	neg = *str == '-';
	n = 0;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
		n = n * 10 + (*(str++) - '0');
	return (n * (1 + -2 * neg));
}

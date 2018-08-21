/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:19:14 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/21 12:45:56 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**out;

	if (!s)
		return (NULL);
	i = -1;
	j = 1;
	while (s[++i])
		if (s[i] != c && (s[i + 1] == c || !(s[i + 1])))
			j++;
	out = (char**)malloc(sizeof(char*) * j);
	i = -1;
	k = -1;
	while (s[++i] && !(j = 0))
	{
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j)
			out[++k] = ft_strsub(s, i, j);
		i += j;
	}
	return (out);
}
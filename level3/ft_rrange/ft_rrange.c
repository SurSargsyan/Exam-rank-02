/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:15:39 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/29 16:16:26 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	*ft_rrange(int start, int end)
{
	int	idx;
	int	size;
	int	*tab;

	idx = 0;
	if (start > end)
		return (ft_rrange(end, start));
	size = ft_absolute_value(start - end);
	tab = (int *)malloc(sizeof(int) * size + 1);
	if (!tab)
		return (0);
	while (idx < start)
	{
		tab[idx] = start;
		start++;
		idx++;
	}
	return (tab);
}
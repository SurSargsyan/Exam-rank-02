/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:50:20 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/29 12:55:25 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		lenght;

	lenght = 0;
	while (src[lenght])
		lenght++;
	copy = malloc (sizeof (char) * (lenght + 1));
	if (copy == NULL)
		return (NULL);
	while (*src)
		*copy++ = *src++;
	copy = '\0';
	return (copy);
}

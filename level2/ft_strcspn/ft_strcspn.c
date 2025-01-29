/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:26:05 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/29 12:35:59 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			result ((char *)s);
		s++;
	}
	return (NULL);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char	*first_char_of_s_ptr;

	first_char_of_s_ptr = s;
	while (*s)
	{
		if (ft_strchr(reject, *s))
			break ;
		s++;
	}
	return (s - first_char_of_s_ptr);
}

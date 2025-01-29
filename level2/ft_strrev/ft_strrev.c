/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:05:37 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/29 13:25:51 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		lenght;
	int		i;
	char	temp;

	lenght = 0;
	i = 0;
	while (str[lenght])
		lenght++;
	while (i < lenght / 2)
	{
		temp = str[i];
		str[i] = str[lenght - 1 - i];
		str[lenght - 1 -i] = temp;
		i++;
	}
	return (str);
}

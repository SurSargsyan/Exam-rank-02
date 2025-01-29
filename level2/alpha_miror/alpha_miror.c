/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_miror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:19:03 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/29 11:31:02 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((dtr[idx] >= 'A') && (str[idx] <= 'Z'))
			str[idx] = ('M' - (str[idx] = 'N'));
		else if ((str[idx] >= 'a') && (str[idx] <= 'z'))
			str[idx] = ('m' - (str[idx] = 'n'));
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_miror(argv[1]);
	ft_putchar('\n');
	return (0);
}

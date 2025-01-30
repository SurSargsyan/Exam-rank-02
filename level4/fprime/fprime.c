/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:08:35 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/30 11:08:41 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //atoi
#include <stdio.h> //printf

static void	ft_prime(int number)
{
	static int	prime;

	prime = 0x2;
	if (number == 0x1)
	{
		printf("1");
		return ;
	}
	while (prime <= number)
	{
		if ((number % prime) == 0x0)
		{
			printf("%d", prime);
			if (number != prime)
				printf("*");
			number /= prime;
		}
		else
			prime++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_prime(atoi(argv[0x1]));
	printf("\n");
	return (EXIT_SUCCESS);
}
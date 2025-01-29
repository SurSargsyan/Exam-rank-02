/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:04:16 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/29 12:13:56 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	idx;
	int	sign;
	int	result;

	idx = 0;
	sign = 1;
	result = 0;
	while (str[idx] == ' ' || (str[idx] >= '\t' && str[idx] <= '\r'))
		idx++;
	if (str[idx] == '-')
	{
		sign = -1;
		idx++;
	}
	else if (str[idx] == '+')
		idx++;
	while (str[idx] != '\0' && (str[idx] >= '0' && str[idx] <= '9'))
	{
		result *= 10;
		result += str[idx] - '0';
		idx++;
	}
	return (result * sign);
}

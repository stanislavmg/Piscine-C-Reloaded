/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:35:37 by sgoremyk          #+#    #+#             */
/*   Updated: 2024/01/12 17:57:23 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	i = 1;
	res = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}

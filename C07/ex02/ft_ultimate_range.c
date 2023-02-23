/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:32:29 by myerturk          #+#    #+#             */
/*   Updated: 2023/02/23 21:52:47 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		i;
	int		*ret_val;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	ret_val = malloc(bound * sizeof(int));
	if (ret_val == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = ret_val;
	i = 0;
	while (i < bound)
	{
		ret_val[i] = min + i;
		i++;
	}
	return (bound);
}

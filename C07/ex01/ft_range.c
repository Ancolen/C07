/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:31:46 by myerturk          #+#    #+#             */
/*   Updated: 2023/02/23 01:31:54 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret_val;
	int	i;

	if (min >= max)
		return (0);
	ret_val = malloc((max - min) * sizeof(int));
	if (ret_val == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		ret_val[i] = min;
		min++;
		i++;
	}
	return (ret_val);
}

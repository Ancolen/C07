/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:29:19 by myerturk          #+#    #+#             */
/*   Updated: 2023/02/23 02:16:52 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		counter;
	char	*ret_val;

	counter = 0;
	while (src[counter])
		counter++;
	ret_val = malloc(sizeof(char) * (counter + 1));
	if (ret_val == 0)
		return (0);
	counter = 0;
	while (src[counter])
	{
		ret_val[counter] = src[counter];
			counter++;
	}
	ret_val[counter] = '\0';
	return (ret_val);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:32:49 by hkilic            #+#    #+#             */
/*   Updated: 2022/08/18 13:32:50 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*p1;
	size_t	index;

	index = 0;
	i = ft_strlen(str);
	p1 = malloc(sizeof(char) * (i + 1));
	if (!p1)
		return (NULL);
	while (str[index])
	{
		p1[index] = str[index];
		index++;
	}
	p1[index] = '\0';
	return (p1);
}

//yeni bir dizin açıp ona mallocla yer açıp kopyalar

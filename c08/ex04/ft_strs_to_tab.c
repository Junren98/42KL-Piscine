/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:47:01 by marvin            #+#    #+#             */
/*   Updated: 2021/09/07 16:47:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}
char	*ft_strdup(char *src)
{
	char	*str;
	char	*ptr;

	str = (char *) malloc ((ft_strlen(src) + 1));
	if (str == NULL)
		return (0);
	ptr = str;
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (str);
}
//function that takes an array of string as argument and the size of this array
//return NULL pointer if an eroor occur
//return array allocated in memory and it last element sstr set to 0, which 
//mark end of array
struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	//set another ptr point to it 
	struct s_stock_str	*ptr;
	struct s_stock_str	*head;

	ptr = (struct s_stock_str *) malloc ((ac + 1) * (sizeof(struct s_stock_str)));
	if (ptr == NULL)
		return (NULL);
	head = ptr;
	while (ac > 0)
	{
		ptr->size = ft_strlen(*av);
		ptr->str = *av++;
		ptr->copy = ft_strdup(ptr->str);
		ptr++;
		ac--;
	}

	ptr-> str = 0;
	return (head);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonbenso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:57:31 by yonbenso          #+#    #+#             */
/*   Updated: 2024/11/15 00:00:04 by yonbenso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup_str;

	len = ft_strlen(s1) + 1;
	dup_str = (char *)malloc(len);
	if (!dup_str)
		return (NULL);
	ft_memcpy(dup_str, s1, len);
	return (dup_str);
}

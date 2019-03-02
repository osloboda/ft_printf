/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osloboda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:21:53 by osloboda          #+#    #+#             */
/*   Updated: 2019/02/01 13:14:54 by osloboda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*buffer;
	int		i;

	i = 0;
	while (src[i++])
		;
	if (!(buffer = (char*)malloc(i)))
		return (0);
	while (i--)
		buffer[i] = src[i];
	return (buffer);
}

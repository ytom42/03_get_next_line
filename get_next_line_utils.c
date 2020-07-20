/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:21:33 by ytomiyos          #+#    #+#             */
/*   Updated: 2020/07/17 14:24:45 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i += 1;
	return (i);
}

int		ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int		i;
	int		src_size;

	i = 0;
	if (!dst)
		return (0);
	src_size = ft_strlen(src);
	if (dstsize == 0)
		return (src_size);
	while (src[i] && (dstsize - 1) > 0)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (src_size);
}

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, s1_len + 1);
	ft_strlcpy((ptr + s1_len), s2, (s2_len + 1));
	return (ptr);
}

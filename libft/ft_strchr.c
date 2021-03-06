/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <khafni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:56:48 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/15 19:06:09 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*(char *)s != '\0' && *s != (char)c)
		s++;
	if (*(char *)s == (char)c)
		return ((char *)s);
	return (0);
}

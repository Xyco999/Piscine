/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:25:47 by cliew             #+#    #+#             */
/*   Updated: 2023/07/01 20:27:58 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	start;
	unsigned int	count;

	count = 0;
	start = 0;
	while (dest[start] != '\0')
	{
		start++;
	}
	while (src[count] != '\0' && start < size)
	{
		dest[start] = src[count];
		count++;
		start++;
	}
	dest[start] = '\0';
	return (sizeof(dest));
}

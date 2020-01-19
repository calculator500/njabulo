/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmkhabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 08:46:33 by nmkhabel          #+#    #+#             */
/*   Updated: 2020/01/19 17:38:39 by nmkhabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN(x) x % 2 == 0
# define EVEN MESSAGE "I have a pair number of arguments."
# define ODD MESSAGE "I have an impair number of arguments."
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

typedef	int		t_bool;
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghochart <ghochart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 18:30:18 by ghochart          #+#    #+#             */
/*   Updated: 2014/09/02 18:30:26 by ghochart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb == 0)
        return (1);
    else if (nb < 0 || nb > 13)
        return (0);
    else
        return (nb * ft_recursive_factorial(nb - 1));
}

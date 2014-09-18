/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghochart <ghochart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 12:25:41 by ghochart          #+#    #+#             */
/*   Updated: 2014/09/02 14:41:38 by ghochart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int i;

    if (nb < 0)
    {
        return (0);
    }
    else
    {
        i = 1;
        while (nb > 0)
        {
            i = i * nb;
            nb--;
        }
    }
    return (i);
}

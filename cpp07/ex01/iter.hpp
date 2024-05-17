/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:35:20 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/16 18:42:56 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T, typename F>
void iter(T *array, int length, F fn)
{
    for (int i = 0; i < length; i++)
        fn(array[i]);
}

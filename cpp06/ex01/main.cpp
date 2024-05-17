/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:27:13 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/14 14:36:06 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Serializer.hpp"

int main(void)
{
    Data *data = new Data();
    data->n = 42;
    uintptr_t raw = Serializer::serialize(data);
    Data *newData = Serializer::deserialize(raw);
    std::cout << "Data: " << data << std::endl;
    std::cout << "newData: " << newData << std::endl;
    delete data;
    return (0);
}

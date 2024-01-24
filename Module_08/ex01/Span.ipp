/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.ipp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:27:30 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/31 17:43:24 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename InputIterator>
void    Span::addNumber(InputIterator begin, InputIterator end)
{
    if (this->numbers.size() + std::distance(begin, end) > this->N)
        throw Span::FullSpanException();
    this->numbers.insert(begin, end);
}
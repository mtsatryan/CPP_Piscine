/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:15:21 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/13 18:48:54 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <string>

class	Karen
{
	private:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		std::string	issue[4];
		void		(Karen::*issuePtr[4])();
	public:
		Karen();
		~Karen();
		void	complain(std::string _issue);

};
#endif

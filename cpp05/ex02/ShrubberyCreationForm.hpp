/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandipe <rpandipe.student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:43:39 by rpandipe          #+#    #+#             */
/*   Updated: 2025/01/27 12:09:58 by rpandipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
	private:
		std::string const m_target;
		ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
};

#endif
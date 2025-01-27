/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandipe <rpandipe.student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:48:32 by rpandipe          #+#    #+#             */
/*   Updated: 2025/01/27 12:16:59 by rpandipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), m_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other): AForm(other)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void  ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getStatus())
	{
		if (executor.getGrade() > this->getExecreq())
			throw(AForm::GradeTooLowException());
		std::string file = this->m_target + "_shrubbery";
	
		std::ofstream out(file.c_str());

		if (out.is_open())
		{
			out << "     /\\" << std::endl;
			out << "    /  \\" << std::endl;
			out << "   /____\\" << std::endl;
			out << "     ||" << std::endl;
			out << "     ||" << std::endl;
			out.close();
		}
		else
			std::cerr <<"Failed to create the file." <<std::endl;
	}
	else
		throw(AForm::FormNotSignedException());
}
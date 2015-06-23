#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "Intern.hpp"

class	OfficeBlock
{
	public:
		OfficeBlock(void);
		~OfficeBlock(void);

		void		setIntern(Intern & intern);
		void		setSigner(Bureaucrat & signer);
		void		setExecutor(Bureaucrat & excecutor);

		void		doBureaucracy(std::string form, std::string target);

		virtual char const			*what(void) throw();

		class	BureaucracyException : public std::exception
		{
			public:
				BureaucracyException(void) throw();
				BureaucracyException(BureaucracyException const & src) throw();
				~BureaucracyException(void) throw();

				const char		*errorBureaucracy(void);

			private:
				BureaucracyException	& operator=(BureaucracyException const & right);
		};


	private:
		OfficeBlock(OfficeBlock const & src);
		OfficeBlock		& operator=(OfficeBlock const & right);

		Intern			* _intern;
		Bureaucrat		* _signer;
		Bureaucrat		* _excecutor;


};

#endif

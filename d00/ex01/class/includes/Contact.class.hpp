#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>

using namespace		std;

class	Contact {

	public:
		Contact(string fn, int addr);
		~Contact(void);

		static int	getNbInst(void);

	private:
		string		_fname;
		string		_lname;
		string		_nname;
		string		_login;
		int	  		_address;
		string		_email;
		string		_fmeal;
		string		_underwearcolor;
		string		_darkestsecret;
		static int	_nbInst;
};

#endif

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>

using namespace		std;

class	Contact {

	public:
		Contact(void);
		~Contact(void);

		int			getAddr(void) const;
		string		getFname(void) const;
		string		getLname(void) const;
		string		getNname(void) const;
		string		getLogin(void) const;
		string		getEmail(void) const;
		string		getFmeal(void) const;
		string		getUnderWearColor(void) const;
		string		getDarkSecret(void) const;

		void		setAddr(int addr);
		void		setFname(string fn);
		void		setLname(string ln);
		void		setNname(string nn);
		void		setLogin(string log);
		void		setEmail(string em);
		void		setFmeal(string fm);
		void		setUnderWearColor(string uwc);
		void		setDarkSecret(string ds);

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
};

#endif

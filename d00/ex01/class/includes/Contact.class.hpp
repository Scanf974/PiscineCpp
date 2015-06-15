#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>

using namespace		std;

class	Contact {

	public:
		Contact(void);
		~Contact(void);

		string		getFname(void) const;
		string		getLname(void) const;
		string		getNname(void) const;
		string		getLogin(void) const;
		string		getAddr(void) const;
		string		getPhone(void) const;
		string		getBirthdayDate(void) const;
		string		getEmail(void) const;
		string		getFmeal(void) const;
		string		getUnderWearColor(void) const;
		string		getDarkSecret(void) const;

		void		setFname(string fn);
		void		setLname(string ln);
		void		setNname(string nn);
		void		setLogin(string log);
		void		setPhone(string pho);
		void		setAddr(string addr);
		void		setBirthdayDate(string bd);
		void		setEmail(string em);
		void		setFmeal(string fm);
		void		setUnderWearColor(string uwc);
		void		setDarkestSecret(string ds);

	private:
		string		_fname;
		string		_lname;
		string		_nname;
		string		_login;
		string 		_address;
		string		_phone;
		string		_birthday;
		string		_email;
		string		_fmeal;
		string		_underwearcolor;
		string		_darkestsecret;
};

#endif

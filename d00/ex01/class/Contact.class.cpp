#include <Contact.class.hpp>

Contact::Contact(void) {}

Contact::~Contact(void) {
	return ;
}

string	Contact::getFname(void) const { return (this->_fname); }
string	Contact::getLname(void) const { return (this->_lname); }
string	Contact::getNname(void) const { return (this->_nname); }
string	Contact::getLogin(void) const { return (this->_login); }
string	Contact::getAddr(void) const { return (this->_address); }
string	Contact::getEmail(void) const { return (this->_email); }
string	Contact::getPhone(void) const { return (this->_phone); }
string	Contact::getBirthdayDate(void) const { return (this->_birthday); }
string	Contact::getFmeal(void) const { return (this->_fmeal); }
string	Contact::getUnderWearColor(void) const { return (this->_underwearcolor); }
string	Contact::getDarkSecret(void) const { return (this->_darkestsecret); }

void	Contact::setFname(string fn) { this->_fname = fn; }
void	Contact::setLname(string ln) { this->_lname = ln; }
void	Contact::setNname(string nn) { this->_nname = nn; }
void	Contact::setLogin(string log) { this->_login = log; }
void	Contact::setAddr(string addr) { this->_address = addr; }
void	Contact::setEmail(string em) { this->_email = em; }
void	Contact::setPhone(string pho) { this->_phone = pho; }
void	Contact::setBirthdayDate(string bd) { this->_birthday = bd; }
void	Contact::setFmeal(string fm) { this->_fmeal = fm; }
void	Contact::setUnderWearColor(string uwc) { this->_underwearcolor = uwc; }
void	Contact::setDarkestSecret(string ds) { this->_darkestsecret = ds; }

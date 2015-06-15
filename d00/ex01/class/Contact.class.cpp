#include <Contact.class.hpp>

Contact::Contact(string fn, int addr) : _fname(fn){
	Contact::_nbInst++;
	this->_address = addr;
	return ;
}

Contact::~Contact(void) {
	Contact::_nbInst--;
	return ;
}

int		Contact::getNbInst() {
	return (Contact::_nbInst);
}

int		Contact::_nbInst = 0;

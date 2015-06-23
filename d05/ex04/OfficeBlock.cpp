#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) : _intern(0), _signer(0), _excecutor(0) {
	return ;
}

OfficeBlock::~OfficeBlock(void) {
	return ;
}

void		OfficeBlock::setIntern(Intern & intern) {
	this->_intern = &intern;
}

void		OfficeBlock::setSigner(Bureaucrat & signer) {
	this->_signer = &signer;
}

void		OfficeBlock::setExecutor(Bureaucrat & excecutor) {
	this->_excecutor = &excecutor;
}


void		OfficeBlock::doBureaucracy(std::string form, std::string target) {
	Form	*fff = 0;

	fff = this->_intern->makeForm(form, target);
	if (fff == 0)
		throw std::exception();
	else
	{
		std::cout << "Intern creates a " << fff->getName() << " (s.grade " << fff->getGradeToSignIt() << ", ex.grade " << fff->getGradeToExecuteIt() << ") targeted on " << target;
		if (fff->getSigned())
			std::cout << " (Signed)" << std::endl;
		else
		{
			std::cout << " (Unsigned)" << std::endl;
			this->_signer->signForm(*fff);
			this->_signer->executeForm(*fff);
		}
	}

}


OfficeBlock::BureaucracyException::BureaucracyException (void) throw () {
	return ;
}

OfficeBlock::BureaucracyException::~BureaucracyException (void) throw () {
	return ;
}

const char		*OfficeBlock::BureaucracyException::errorBureaucracy(void) {
	return "Oh my God: Error Bureaucracy";
}
const char		*OfficeBlock::what(void) throw(){
	return "Error Bureaucracy";
}

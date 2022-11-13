#include "Document.h"
Document::Document() = default;
Document::Document(bool actual, const std::string& name, const std::string& date, const std::string& type,  const std::string& country) :
	actual{actual}, nameOfAct{ name }, date{ date }, typeOfAct{ type }, LegalSystem::LegalSystem(country) {};

Document::~Document() {};

bool Document::isActual() {
	return Document::actual; 
}
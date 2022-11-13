#pragma once
#include "Document.h"

class Article : public Document {
public:
	Article();
	Article(const std::string&, const std::string&, bool, const std::string&, const std::string&, const std::string&, const std::string&);
	~Article();
protected:
	std::string articleID{ "None" };
	std::string content{ "None" };
};
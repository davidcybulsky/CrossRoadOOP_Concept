#include "Article.h"

Article::Article() = default;

Article::Article(const std::string& id, const std::string& content, bool actual, const std::string& name,
	const std::string& date, const std::string& type, const std::string& country) :
	articleID{ id }, content{ content }, Document::Document(actual, name, date, type, country) {};

Article::~Article() {};
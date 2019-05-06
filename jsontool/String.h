#pragma once
#include "IBaseJSON.h"

class String : public IBaseJSON
{
public:
	String(std::string keyName);
	String(std::string keyName, std::string val);

	std::string ToJson() override;

private:
	std::string m_value;
	std::string m_key;
};
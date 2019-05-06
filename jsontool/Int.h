#pragma once
#include "IBaseJSON.h"

class Int : public IBaseJSON
{
public:
	Int();
	Int(int val);

	std::string ToJson() override;

	Int operator++();
	Int operator--();
	Int operator+(Int right);
	Int operator=(Int right);
	bool operator==(Int right);

private:
	int m_value;
};
#pragma once
#include "IBaseJSON.h"

class Int : public IBaseJSON
{
public:
	Int(std::string keyName);
	Int(std::string keyName, int val);

	std::string ToJson() override;

	Int operator++();
	Int operator--();
	Int operator+(Int right);
	Int operator-(Int right);
	Int operator*(Int right);
	Int operator/(Int right);
	Int operator%(Int right);	
	Int operator=(Int right);
	Int operator+=(Int right);
	Int operator-=(Int right);
	Int operator*=(Int right);
	Int operator/=(Int right);
	Int operator%=(Int right);
	bool operator==(Int right);
	operator int();

private:
	int m_value;
	std::string m_key;
};
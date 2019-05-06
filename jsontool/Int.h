#pragma once
#include "IBaseJSON.h"

class Int : public IBaseJSON
{
private:
	int value;
public:
	Int();
	Int(int val);

	std::string IBaseJSON::ToJSON() override;

	friend const Int& operator++(Int& i);

	friend const Int operator++(Int& i, int);

	friend const Int& operator--(Int& i);

	friend const Int operator--(Int& i, int);

	friend const Int operator+(const Int& left, const Int& right);

	friend bool operator==(const Int& left, const Int& right);

	friend Int& operator+=(Int& left, const Int& right);	
	
	Int& operator=(const Int& right) 
	{
		if (this == &right) 
		{
			return *this;
		}
		value = right.value;
		return *this;
	}
};
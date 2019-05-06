#pragma once
#include "IBaseJSON.h"

class Int : public IBaseJSON
{

public:
	Int();
	Int(int val);

	std::string ToJson() override;

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
		m_value = right.m_value;
		return *this;
	}

private:
	int m_value;
};
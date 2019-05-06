#include "stdafx.h"
#include "Int.h"

Int::Int()
{
	m_value = 0;
}

Int::Int(int val)
{
	m_value = val;
}

std::string Int::ToJson()
{
	return std::to_string(m_value);
}

Int Int::operator++()
{
	m_value++;
}

Int Int::operator--()
{
	m_value--;
}

Int Int::operator+(Int right)
{
	m_value = m_value + right.m_value;
}

Int Int::operator=(Int right)
{
	if (this == &right)
	{
		return *this;
	}
	m_value = right.m_value;
	return *this;
}

bool Int::operator==(Int right)
{
	return m_value == right.m_value;
}
#include "stdafx.h"
#include "Int.h"

Int::Int(std::string keyName)
{
	m_key = keyName;
	m_value = 0;
}

Int::Int(std::string keyName, int val)
{
	m_key = keyName;
	m_value = val;
}

std::string Int::ToJson()
{
	return std::string("\"" + m_key + "\": " + std::to_string(m_value) + ",");
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

Int Int::operator-(Int right)
{
	m_value = m_value - right.m_value;
}

Int Int::operator*(Int right)
{
	m_value = m_value * right.m_value;
}

Int Int::operator/(Int right)
{
	m_value = m_value / right.m_value;
}

Int Int::operator%(Int right)
{
	m_value = m_value % right.m_value;
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

Int Int::operator+=(Int right)
{
	m_value += right.m_value;
}

Int Int::operator-=(Int right)
{
	m_value -= right.m_value;
}

Int Int::operator*=(Int right)
{
	m_value *= right.m_value;
}

Int Int::operator/=(Int right)
{
	m_value *= right.m_value;
}

Int Int::operator%=(Int right)
{
	m_value *= right.m_value;
}


bool Int::operator==(Int right)
{
	return m_value == right.m_value;
}

Int::operator int()
{
	return m_value;
}
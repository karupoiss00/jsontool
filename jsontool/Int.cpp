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
	// TODO

	return "";
}

const Int& operator++(Int& i) {
	i.m_value++;
	return i;
}

const Int operator++(Int& i, int) {
	Int oldValue(i.m_value);
	i.m_value++;
	return oldValue;
}

const Int& operator--(Int& i) {
	i.m_value--;
	return i;
}

const Int operator--(Int& i, int) {
	Int oldValue(i.m_value);
	i.m_value--;
	return oldValue;
}

const Int operator+(const Int& left, const Int& right) {
	return Int(left.m_value + right.m_value);
}

Int& operator+=(Int& left, const Int& right) {
	left.m_value += right.m_value;
	return left;
}

bool operator==(const Int& left, const Int& right) {
	return left.m_value == right.m_value;
}
#include "stdafx.h"
#include "Int.h"

Int::Int()
{
	value = 0;
}

Int::Int(int val)
{
	value = val;
}

const Int& operator++(Int& i) {
	i.value++;
	return i;
}

const Int operator++(Int& i, int) {
	Int oldValue(i.value);
	i.value++;
	return oldValue;
}

const Int& operator--(Int& i) {
	i.value--;
	return i;
}

const Int operator--(Int& i, int) {
	Int oldValue(i.value);
	i.value--;
	return oldValue;
}

const Int operator+(const Int& left, const Int& right) {
	return Int(left.value + right.value);
}

Int& operator+=(Int& left, const Int& right) {
	left.value += right.value;
	return left;
}

bool operator==(const Int& left, const Int& right) {
	return left.value == right.value;
}

std::string Int::IBaseJSON::ToJSON()
{
	
	return std::to_string()
}
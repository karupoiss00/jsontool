#include "stdafx.h"
#include "String.h"

String::String(std::string keyName)
{
	m_key = keyName;
	m_value = "";
}

String::String(std::string keyName, std::string val)
{
	m_key = keyName;
	m_value = val;
}

std::string String::ToJson()
{
	return std::string("\"" + m_key + "\": \"" + m_value + "\",");
}

String String::operator=(String right)
{
	m_value = right.m_value;
	return *this;
}
#pragma once
#include "stdafx.h"

class IBaseJSON
{
public:
	virtual std::string ToJSON() = 0;
};
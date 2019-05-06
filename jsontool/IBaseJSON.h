#pragma once
#include "stdafx.h"

class IBaseJSON
{
public:
	virtual ~IBaseJSON() = default;

	virtual std::string ToJson() = 0;
};
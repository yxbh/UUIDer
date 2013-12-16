#pragma once
#include <QString>


namespace BH
{


class RandomStringGenerator
{
public:
	using StringType = QString;

private:
	static StringType s_PossibleChars;

public:
	RandomStringGenerator(void) = delete;

    static StringType Generate(const unsigned p_StrLength = 0);

}; // RandomStringGenerator class

} // BH ns

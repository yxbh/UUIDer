#pragma once
#include <random>
#include <QString>

namespace BH
{


class RandomStringGenerator
{
public:
    using StringType = QString;
    using GeneratorType = std::default_random_engine;

private:
    static GeneratorType s_Generator;

public:
	RandomStringGenerator(void) = delete;

    static StringType Generate(const unsigned p_StrLength = 200);

private:
    static GeneratorType & GetGenerator(void);

}; // RandomStringGenerator class

} // BH ns

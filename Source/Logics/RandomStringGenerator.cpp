#include "RandomStringGenerator.hpp"
#include <chrono>
#include <QDebug>

static QString PossibleCharacters
    ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-=_+!@#$\%^&*()`~<>?:\'\";,.\\| ");

namespace BH
{

using namespace std::chrono;

RandomStringGenerator::GeneratorType RandomStringGenerator::s_Generator
    (high_resolution_clock::now().time_since_epoch().count());

RandomStringGenerator::StringType RandomStringGenerator::Generate(const unsigned p_StrLength)
{
    unsigned random_str_len;
    if (p_StrLength != 0)
        random_str_len = p_StrLength;
    else
    {
        std::uniform_int_distribution<unsigned> dist;
        random_str_len = dist(RandomStringGenerator::GetGenerator());
    }

    QString random_str;
    random_str.reserve(random_str_len + 1);
    std::uniform_int_distribution<unsigned> char_distribution(0, PossibleCharacters.length()-1);
    for (unsigned i{0}; i != random_str_len; ++i)
        random_str += PossibleCharacters.at(char_distribution(RandomStringGenerator::GetGenerator()));

    return random_str;
}

RandomStringGenerator::GeneratorType & RandomStringGenerator::GetGenerator(void)
{
    return s_Generator;
}

} // BH ns

#include "RandomStringGenerator.hpp"
#include <random>


namespace BH
{

RandomStringGenerator::StringType RandomStringGenerator::s_PossibleChars("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-=_+!@#$\%^&*()`~");

RandomStringGenerator::StringType RandomStringGenerator::Generate(const unsigned p_StrLength)
{
    std::default_random_engine rand_eng;
    unsigned random_str_len;
    if (p_StrLength != 0)
        random_str_len = p_StrLength;
    else
    {
        std::uniform_int_distribution<unsigned> dist;
        random_str_len = dist(rand_eng);
    }

    QString random_str;
    random_str.reserve(random_str_len + 1);
    std::uniform_int_distribution<unsigned> char_distribution(0, s_PossibleChars.length()-1);
    for (unsigned i{0}; i != random_str_len; ++i)
        random_str += s_PossibleChars.at(char_distribution(rand_eng));

    return random_str;
}

} // BH ns

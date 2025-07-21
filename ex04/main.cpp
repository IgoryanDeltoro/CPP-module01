#include "StrReplacer.hpp"

int main (int ac, char **str)
{
    if (ac != 4)
    {
        std::cout << "Error: Enter < ./StrReplacer filename str1 str2 >\n";
        return 1;
    }

    StrReplacer s;

    if (s.setFileName(str[1]))
        return 1;
    if (s.setReplacingString(str[2]))
        return 1;
    if (s.setInsertingString(str[3]))
        return 1;
    if (s.replacePartContentByString())
        return 1;
    return 0;
}
#include "StrReplacer.hpp"

int main (int ac, char **str)
{
    if (ac != 4)
    {
        std::cout << "Error: Enter < ./StrReplacer filename str1 str2 >\n";
        return 1;
    }

    StrReplacer s;

    s.readFile(str[1]);
    s.replacePartContentByString(str[2], str[3]);
    std::cout  << s.getFileContents() << "\n";
}
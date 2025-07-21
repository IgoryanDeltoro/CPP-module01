#ifndef STRREPLACER_HPP
#define STRREPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class StrReplacer {
private:
    std::string filename;
    std::string replacingStr;
    std::string insertStr;

public:
    StrReplacer();
    ~StrReplacer();

    int setFileName(const std::string &fn);
    int setReplacingString(const std::string &rs);
    int setInsertingString(const std::string &is);
    int replacePartContentByString();
};

#endif
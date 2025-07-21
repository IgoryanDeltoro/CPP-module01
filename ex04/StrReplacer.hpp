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
    std::string fileContents;


public:
    StrReplacer();
    ~StrReplacer();

    int setFileName(const std::string &fn);
    int setReplacingStr(const std::string &rs);
    int setInsertString(const std::string &is);

    std::string getFileContents();
    int replacePartContentByString();
};

#endif
#ifndef STRREPLACER_HPP
#define STRREPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class StrReplacer
{
private:
    std::string fileContents;

public:
    StrReplacer();
    ~StrReplacer();

    int readFile(char *fn);
    std::string getFileContents();
    void setFileContents(std::string fn);
    void replacePartContentByString(std::string str, std::string insert);
    
};

#endif
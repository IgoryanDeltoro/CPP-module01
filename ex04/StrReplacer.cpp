#include "StrReplacer.hpp"

StrReplacer::StrReplacer() {};
StrReplacer::~StrReplacer() {};

// setters 
int StrReplacer::setFileName(const std::string &fn)
{
    if (!fn.length())
    {
        std::cout << "Error: an input string is empty\n";
        return 1;
    }
    filename = fn;
    return 0;
}
int StrReplacer::setReplacingStr(const std::string &rs) {
    if (!rs.length())
    {
        std::cout << "Error: an input string is empty\n";
        return 1;
    }
    replacingStr = rs;
    return 0;
}
int StrReplacer::setInsertString(const std::string &is) {
    if (!is.length())
    {
        std::cout << "Error: an input string is empty\n";
        return 1;
    }
    insertStr = is;
    return 0;
}

std::string StrReplacer::getFileContents() {
    return fileContents;
}
int StrReplacer::replacePartContentByString() {
    if (filename.length())
    {
        std::fstream inFile(filename.c_str());
        if (!inFile)
        {
            std::cout << "Error: cannot open input file\n";
            return 1;
        }

        std::string word;
        fileContents.clear();
        while (inFile >> word)
        {
            if (word.compare(replacingStr))
                fileContents += word + ' ';
            else
                fileContents += insertStr + ' ';
        }
        inFile.close();
    }
    return 0;
}

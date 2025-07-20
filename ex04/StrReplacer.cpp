#include "StrReplacer.hpp"

StrReplacer::StrReplacer() {};
StrReplacer::~StrReplacer() {};

void StrReplacer::setFileContents(std::string fn) {
    this->fileContents = fn;
}
std::string StrReplacer::getFileContents() {
    return fileContents;
}
int StrReplacer::readFile(char *fn)
{
    std::ifstream inFile(fn);
    if (!inFile)
    {
        std::cout << "Error: cannot open input file\n";
        return -1;
    }
    std::string c((std::istreambuf_iterator<char>(inFile)),
                  std::istreambuf_iterator<char>());
    setFileContents(c);
    inFile.close();
    return static_cast<int>(fileContents.length());
}

void StrReplacer::replacePartContentByString(std::string str, std::string insert)
{
    if (!str.length() || !insert.length())
    {
        std::cout << "Error: one of argument is empty\n";
        return;
    }

    size_t start = 0;
    while ((start = fileContents.find(str, start)) != std::string::npos)
    {
        fileContents.replace(start, str.length(), insert);
        start += insert.length();
    }
}
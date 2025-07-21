#include "StrReplacer.hpp"

StrReplacer::StrReplacer() {};
StrReplacer::~StrReplacer() {};

// setters 
int StrReplacer::setFileName(const std::string &fn)
{
    if (!fn.length())
    {
        std::cout << "Error: input string with file name is empty\n";
        return 1;
    }
    filename = fn;
    return 0;
}
int StrReplacer::setReplacingString(const std::string &rs) {
    if (!rs.length())
    {
        std::cout << "Error: input string for replacement is empty\n";
        return 1;
    }
    replacingStr = rs;
    return 0;
}
int StrReplacer::setInsertingString(const std::string &is) {
    if (!is.length())
    {
        std::cout << "Error: input string for placed inside is empty\n";
        return 1;
    }
    insertStr = is;
    return 0;
}

int StrReplacer::replacePartContentByString() {
    std::ifstream inFile(filename.c_str());
    if (!inFile)
    {
        std::cout << "Error: cannot open input file: ";
        std::cout << filename << std::endl;
        return 1;
    }
    std::string outName = filename + ".replace";
    std::ofstream outFile(outName.c_str());
    if (!outFile)
    {
        std::cout << "Error: cannot create output file: ";
        std::cout << outName << std::endl;
        inFile.close();
        return 1;
    }

    std::string line;
    while (std::getline(inFile, line))
    {
        size_t idxPosit = 0;
        while ((idxPosit = line.find(replacingStr, idxPosit)) != std::string::npos)
        {
            line.erase(idxPosit, replacingStr.length());
            line.insert(idxPosit, insertStr);
            idxPosit += insertStr.length();
        }
        outFile << line << '\n';
    }
    inFile.close();
    outFile.close();
    return 0;
}

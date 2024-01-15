#include "filesMess.hpp"

FilesMess::FilesMess(std::string filename) :
_inFile(filename)
{
    this->_outFile = this->_inFile + ".replace";
}

FilesMess::~FilesMess()
{
}

void    FilesMess::replace(std::string s1, std::string s2)
{
    std::ifstream readfrom(this->_inFile);
    if (readfrom.is_open())
    {
        std::string text;
        if (std::getline(readfrom, text, '\0'))
        {
            std::ofstream puthere(this->_outFile);
            size_t  find_pos = text.find(s1);
            while (find_pos != std::string::npos)
            {
                text.erase(find_pos, s1.length());
                text.insert(find_pos, s2);
                find_pos = text.find(s1);
            }
            puthere << text;
            puthere.close();
        }
        else
        {
            std::cerr << "File is empty." << std::endl;
        }
        readfrom.close();
    }
    else
    {
        std::cerr << "Can't open the file." << std::endl;
        exit(EXIT_FAILURE);
    }
}
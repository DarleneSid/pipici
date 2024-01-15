#ifndef FILESMESS_HPP
# define FILESMESS_HPP

# include <iostream>
# include <fstream>

class FilesMess
{
    private:
        std::string _inFile;
        std::string _outFile;

    public:
        FilesMess(std::string filename);
        ~FilesMess();
        void    replace(std::string s1, std::string s2);
};

#endif
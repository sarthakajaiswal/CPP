#ifndef _FOLDER_HPP 
#define _FOLDER_HPP 

#include <iostream> 
#include <string> 

#include "../01-File/file.hpp"

class Folder 
{
    private: 
        std::string strName; 
        std::string strLocation; 
        unsigned long long ullActualSizeInBytes; 
        unsigned long long ullSizeOnDiskInBytes; 
        unsigned int uTotalNumberOfSubFolders; 
        unsigned int uTotalNumberOfFiles; 
        Date dtCreationDate; 
        Time tCreationTime; 
        FileAttributes fAtbAttributes; 

    public: 
        Folder() 
        {
            ullActualSizeInBytes = 0; 
            ullSizeOnDiskInBytes = 0; 
            uTotalNumberOfFiles = 0; 
            uTotalNumberOfSubFolders = 0; 
        }

        void show() const 
        {
            std::cout << "Name :        " << strName << std::endl; 
            std::cout << "Location:     " << strLocation << std::endl; 
            std::cout << "Size:         " << ullActualSizeInBytes << " bytes" << std::endl; 
            std::cout << "Size on disk: " << ullSizeOnDiskInBytes << " bytes" << std::endl; 
            std::cout << "Contains:     " << uTotalNumberOfFiles << " Files, " 
                      <<  uTotalNumberOfSubFolders << " Folders" << std::endl; 
            
            std::cout << "Created:      "; 
            dtCreationDate.show();
            std::cout << "\t";  
            tCreationTime.show(); 
            std::cout << std::endl; 

            std::cout << "Attributes:   "; 
            fAtbAttributes.show(); 
            std::cout << std::endl; 
        }
};

#endif /* _FOLDER_HPP */
#ifndef _FILE_HPP 
#define _FILE_HPP 

#include <iostream> 
#include <string> 

#include "../include/Date.hpp" 
#include "../include/Time.hpp" 

class FileAttributes 
{
    bool bIsReadOnly; 
    bool bIsHidden; 

    public: 
        FileAttributes() 
        {
            bIsReadOnly = true; 
            bIsHidden = false; 
        } 

        FileAttributes(bool isFileReadOnly, bool isFileHidden)
        {
            this->bIsReadOnly = isFileReadOnly; 
            this->bIsHidden = isFileHidden; 
        }

        void SetReadOnlyAttribute(bool bValue) 
        {
            bIsReadOnly = bValue; 
        }

        void SetHiddenAttribute(bool bValue) 
        {
            bIsHidden = bValue; 
        }

        void show() const
        {
            if(bIsHidden == true) 
                std::cout << "Hidden "; 
            if(bIsReadOnly == true) 
                std::cout << "Read-Only ";  
        }
}; 

class File 
{
    private: 
        std::string strType; 
        std::string strLocation; 
        unsigned long ulActualSizeInBytes; 
        unsigned long ulSizeOnDiskInBytes; 
        Date dtCreatedOn; 
        Time tCreatedTime; 
        Date dtLastModifiedOn; 
        Time tLastModifiedTime; 
        Date dtLastAccessedOn; 
        Time tLastAccessedTime; 
        FileAttributes fAtbAttributes; 

    public: 
        File() {} 

        void show() const 
        {
            std::cout << "Type of file:         " << strType << std::endl; 
            std::cout << "Location :            " << strLocation << std::endl; 
            std::cout << "Size:                 " << ulActualSizeInBytes << " bytes" << std::endl; 
            std::cout << "Size on disk :        " << ulSizeOnDiskInBytes << " bytes" << std::endl; 
            
            std::cout << "Created :             "; 
            dtCreatedOn.show(); 
            std::cout << "   "; 
            tCreatedTime.show(); 
            std::cout << std::endl; 
            
            std::cout << "Modified:             "; 
            dtLastModifiedOn.show(); 
            std::cout << "   "; 
            tLastModifiedTime.show(); 
            std::cout << std::endl; 
            
            std::cout << "Accessed :            "; 
            dtLastAccessedOn.show(); 
            std::cout << "   " ; 
            tLastAccessedTime.show(); 
            std::cout << std::endl; 

            std::cout << "Attributes            "; 
            fAtbAttributes.show(); 
        }
}; 

#endif /* _FILE_HPP */
#ifndef _SAREE_H 
#define _SAREE_H 

#include <iostream> 
#include <string> 
#include <vector> 

#include "../01-File/file.hpp" 
#include "../include/CustomerReview.hpp" 
#include "../include/BestSellerRank.hpp" 
#include "../include/ProductDimention.hpp" 
#include "../include/Organization.hpp"

class Saree 
{
    private: 
        int iNetQuantity; 
        float fWeightInGram; 
        
        std::string strItemModelName; 
        std::string strCountryOfOrigin; 
        std::string strDepartment;  
        std::string strGenericName; 
        std::vector<BestSellerRank> bsrvecBestSellerRanks; 
    
        Organization orgManufacturer; 
        Organization orgPacker; 
        Organization orgImporter; 

        Date dtDateFirstAvailable; 
        ProductDimention dimProductDimentions; 
        CustomerReview crCustomerReviews; 
    
    public: 
        Saree() : 
            orgManufacturer(std::string("CJ Interprises")), 
            orgPacker(std::string("CJ Interprises")), 
            orgImporter(std::string("CJ Interprises")),  
            strItemModelName("Banarasi Saree"), 
            strDepartment("Women"), 
            strGenericName("Saree"), 
            strCountryOfOrigin("India") 
        {} 
        
        void show() 
        {
            std::cout << "Product Dimentions:       "; 
            dimProductDimentions.show(); 
            std::cout << std::endl; 

            std::cout << "Item Model Name:          " << strItemModelName << std::endl; 
            std::cout << "Country of Origin:        " << strCountryOfOrigin << std::endl; 
            std::cout << "Department:               " << strDepartment << std::endl; 
            
            std::cout << "Manufacturer:             "; 
            orgManufacturer.show(); 
            std::cout << std::endl; 
            
            std::cout << "Packer:                   "; 
            orgPacker.show(); 
            std::cout << std::endl; 

            std::cout << "Importer:                 "; 
            orgImporter.show(); 
            std::cout << std::endl; 

            std::cout << "Item Weight:              " << fWeightInGram << std::endl; 
            std::cout << "Net Quantity:             " << iNetQuantity << std::endl; 
            std::cout << "Generic Name:             " << strGenericName << std::endl; 

            for(
                std::vector<BestSellerRank>::iterator iter = bsrvecBestSellerRanks.begin(); 
                iter != bsrvecBestSellerRanks.end(); 
                ++iter
            ) {
                iter->show(); 
                ++iter;  
            }
        }
}; 

#endif /* _SAREE_H */
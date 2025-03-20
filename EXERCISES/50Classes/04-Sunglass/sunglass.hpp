#ifndef _SUNGLASS_HPP 
#define _SUNGLASS_HPP 

#include <iostream> 
#include <string> 
#include <vector> 

#include "../include/Date.hpp" 
#include "../include/ProductDimention.hpp" 
#include "../include/Organization.hpp" 
#include "../include/BestSellerRank.hpp" 
#include "../include/CustomerReview.hpp" 

class Sunglass 
{
    private: 
        float fItemWeightInGrams; 
        unsigned int iNetQuantity;     
        
        std::string strItemModelNumber; 
        std::string strCountryOfOrigin; 
        std::string strGenderDepartment; 
        std::string strGenericName; 
        
        ProductDimention dimProductDimention; 
        Date dtDateFirstAvailable; 
        Organization orgManufacturer; 
        Organization orgPacker; 
        Organization orgImporter; 

        std::vector<BestSellerRank> bsrvecBestSellerRanks; 
        CustomerReview crCustomerReviews; 

    public: 
        Sunglass() : 
            orgManufacturer("Baofeng Framekart Technology"), 
            orgPacker("Baofeng Framekart Technology"), 
            orgImporter("Baofeng FrameKart Technology"), 
            strGenderDepartment("Unisex"), 
            strItemModelNumber("VC S13112"), 
            strCountryOfOrigin("India"), 
            strGenericName("Sunglass"), 
            fItemWeightInGrams(0.0f)
        {}
        
        void show() 
        {
            std::cout << "Product Dimentions:           "; 
            dimProductDimention.show(); 
            std::cout << std::endl; 

            std::cout << "Date first avaialble:         "; 
            dtDateFirstAvailable.show(); 
            std::cout << std::endl; 

            std::cout << "Item Model Number:            " << strItemModelNumber << std::endl; 
            std::cout << "Country Origin:               " << strCountryOfOrigin << std::endl; 
            std::cout << "Department:                   " << strCountryOfOrigin << std::endl; 

            std::cout << "Manufacturer:                 "; 
            orgManufacturer.show(); 
            std::cout << std::endl; 

            std::cout << "Packer:                       "; 
            orgPacker.show(); 
            std::cout << std::endl; 

            std::cout << "Importer:                     "; 
            orgImporter.show();     
            std::cout << std::endl; 

            std::cout << "Item Weight:                  " << fItemWeightInGrams << " gram" << std::endl; 
            std::cout << "Net Quantity:                 " << iNetQuantity << std::endl; 
            std::cout << "Generic Name:                 " << strGenericName << std::endl; 

            std::cout << "Best Seller Ranks:            "; 
            for(
                std::vector<BestSellerRank>::iterator iter = bsrvecBestSellerRanks.begin(); 
                iter != bsrvecBestSellerRanks.end(); 
                ++iter 
            ) 
            {
                iter->show(); 
                std::cout << " "; 
            }
            std::cout << std::endl; 

            std::cout << "Customer Reviews:             "; 
            crCustomerReviews.show(); 
            std::cout << std::endl; 
        }
}; 

#endif /* _SUNGLASS_HPP */ 
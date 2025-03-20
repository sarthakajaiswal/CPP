#ifndef _HELMET_HPP 
#define _HELMET_HPP 

#include <iostream> 
#include <string> 
#include <vector> 

#include "../include/Date.hpp" 
#include "../include/Organization.hpp" 
#include "../include/ProductDimention.hpp" 
#include "../include/BestSellerRank.hpp" 
#include "../include/CustomerReview.hpp" 

enum AgeRange 
{
    KIDS = 0, 
    TEENAGE, 
    ADULT, 
    AGED 
}; 

class Helmet 
{
    private: 
        enum AgeRange eSuitableAgeRange; 
        bool bIsBatteriesIncluded; 
    
        float fItemWeightInGrams; 
        int iNetQuantity; 
    
        std::string strBrand; 
        std::string strColor; 
        std::string strShape; 
        std::string strSize; 
        std::string strGenericName; 
        std::string strMaterialType; 
        
        Date dtDateFirstAvailable; 
        Organization orgManufacturer; 
        Organization orgPacker; 
        CustomerReview crCustomerReviews; 
        ProductDimention dimProductDimentions; 

        std::vector<std::string> strvecIncludedComponents; 
        std::vector<BestSellerRank> bsrvecBestSellerRanks; 

        void ShowAgeRange() 
        {
            switch(this->eSuitableAgeRange) 
            {
                case KIDS: 
                    std::cout << "Kids"; 
                    break; 

                case TEENAGE:   
                    std::cout << "Teen-age"; 
                    break; 

                case ADULT: 
                    std::cout << "Adult"; 
                    break; 

                case AGED: 
                    std::cout << "Aged"; 
                    break; 

                default: 
                    break; 
            } 
        }

    public: 
        Helmet() : 
            orgManufacturer("3 Generations"), 
            orgPacker("Shop on SteelBird") 
        {} 

        void show() 
        {
            std::cout << "Age Range:                "; 
            ShowAgeRange(); 
            std::cout << std::endl; 

            std::cout << "Batteries Included:       "; 
            if(bIsBatteriesIncluded == false) 
                std::cout << "No" << std::endl; 
            else 
                std::cout << "Yes" << std::endl; 

            std::cout << "Brand:                    " << strBrand << std::endl; 
            std::cout << "Color:                    " << strColor << std::endl; 
            
            std::cout << "Included Components:      "; 
            for(
                std::vector<std::string>::iterator iter = strvecIncludedComponents.begin(); 
                iter != strvecIncludedComponents.end(); 
                ++iter) 
                std::cout << *iter << " ";
            std::cout << std::endl; 

            std::cout << "Shape:                    " << strShape << std::endl; 
            std::cout << "Material Type:            " << strMaterialType << std::endl; 
            std::cout << "Size:                     " << strSize << std::endl; 

            std::cout << "Product Dimention:        "; 
            dimProductDimentions.show(); 
            std::cout << std::endl;   

            std::cout << "Date first Available:     "; 
            dtDateFirstAvailable.show(); 
            std::cout << std::endl; 

            std::cout << "Item Weight:              " << fItemWeightInGrams << " gram" << std::endl; 
            std::cout << "Net Quantity:             " << iNetQuantity << std::endl; 
            std::cout << "Generic Name:             " << strGenericName << std::endl; 

            std::cout << "Manufacturer:             "; 
            orgManufacturer.show(); 
            std::cout << std::endl; 

            std::cout << "Packer:                   "; 
            orgPacker.show(); 
            std::cout << std::endl; 

            std::cout << "Customer Reviews:         "; 
            crCustomerReviews.show(); 
            std::cout << std::endl; 

            std::cout << "Best Seller Ranks:        "; 
            for(
                std::vector<BestSellerRank>::iterator iter = bsrvecBestSellerRanks.begin(); 
                iter != bsrvecBestSellerRanks.end(); 
                ++iter
            ) {
                iter->show(); 
                std::cout << " "; 
            }
            std::cout << std::endl; 
        } 
}; 

#endif /* _HELMET_HPP */
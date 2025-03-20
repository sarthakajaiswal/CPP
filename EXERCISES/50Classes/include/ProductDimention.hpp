#ifndef _PRODUCT_DIMENTION_HPP 
#define _PRODUCT_DIMENTION_HPP 

class ProductDimention
{
    private: 
        float fDim1; 
        float fDim2; 
        float fDim3; 
        std::string strDimentionUnit; 

    public: 
        ProductDimention() 
        {
            fDim1 = 1.0f;
            fDim2 = 1.0f; 
            fDim3 = 1.0f; 
            strDimentionUnit = std::string("cms"); 
        } 

        void show() 
        {
            std::cout << fDim1; 
            if(fDim2 != 0.0f) 
                std::cout << " X " << fDim2; 
            if(fDim3 != 0.0f) 
                std::cout << " X " << fDim3; 
            std::cout << " " << strDimentionUnit; 
        }
}; 

#endif /* _PRODUCT_DIMENTION_HPP */
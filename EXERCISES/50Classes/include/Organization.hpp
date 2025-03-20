#ifndef _ORGANIZATION_HPP 
#define _ORGANIZATION_HPP 

class Organization 
{
    private: 
        std::string strTitle; 

        std::string strAddressLine1; 
        std::string strAddressLine2; 
        std::string strAddressTaluka; 
        std::string strAddressDistrict; 
        std::string strAddressState; 
        std::string strAddressCountry; 
        unsigned int iAddressPinCode; 

        std::string strContactNumber; 
        std::string strEmail; 
        std::string strWebsite; 

    public: 
        Organization(std::string strTitle)  
        {
            this->strTitle = strTitle; 
            iAddressPinCode = 0; 
        } 

        Organization(
            std::string strAddressLine1, 
            std::string strAddressLine2, 
            std::string strAddressTaluka, 
            std::string strAddressDistrict, 
            std::string strAddressState, 
            unsigned int uPinCode, 
            std::string strAddressCountry, 
            std::string strEmail, 
            std::string strWebsite
        ) 
        {
            this->strAddressLine1 = strAddressLine1; 
            this->strAddressLine2 = strAddressLine2; 
            this->strAddressTaluka = strAddressTaluka; 
            this->strAddressDistrict = strAddressDistrict; 
            this->strAddressState = strAddressState; 
            this->iAddressPinCode = uPinCode; 
            this->strAddressCountry = strAddressCountry; 
            this->strEmail = strEmail; 
            this->strWebsite = strWebsite; 
        }

        void show() 
        {
            std::cout << strTitle; 
        }
}; 

#endif /* _ORGANIZATION_HPP */
#ifndef _TRIANGLE_H 
#define _TRIANGLE_H 

class Triangle 
{
    private: 
        float a; 
        float b; 
        float c; 
    
    public: 
        Triangle(float fSide1, float fSide2, float fSide3)  
        {
            if((fSide1 + fSide2 <= fSide3) || (fSide2 + fSide3 <= fSide1) || (fSide1 + fSide3 <= fSide2))  
            {
                printf("Invalid side lengths");
                exit (-1); 
            } 

            a = fSide1; 
            b = fSide2; 
            c = fSide3; 
        }

        void show() 
        {
            std::cout << " AB = " << a << " BC = " << b << " CD = "  << c << std::endl; 
        }
}; 

#endif /* _TRIANGLE_H */
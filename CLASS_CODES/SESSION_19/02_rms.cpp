/* 
    GOAL : To show use of iterator in production codes 
    DATE : 08 MARCH 2025
*/

#include <iostream> 
#include <vector> 
#include <cmath> 

double rms(std::vector<double>& d_vec) 
{
    double rms_sum = 0.0; 

    if(d_vec.size() == 0) 
        return 0.0; 

    for(std::vector<double>::iterator iter = d_vec.begin(); iter != d_vec.end(); ++iter) 
    {
        double d = *iter; 
        rms_sum += d * d; 
    }

    return sqrt(rms_sum / d_vec.size()); 
}


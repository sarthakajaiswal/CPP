#include <iostream> 
#include "units.hpp" 

#define CASE(unit_case_value, value_string) case unit_case_value: os << value_string; break; 

std::ostream& operator<<(std::ostream& os, const energy_unit_t& unit) {
    switch (unit) { 
        CASE(KCAL, "KCal"); 
        CASE(CAL, "Calorie");  
        CASE(JOULE, "Joule"); 
        CASE(KILOWATT_HOUR, "kW-H"); 
        CASE(BTU, "BTU"); 
        CASE(eV, "eV"); 
        CASE(MeV, "MeV");         
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const weight_unit_t& unit) {
    switch (unit) {
        CASE(TONNE, "ton"); 
        CASE(QUINTAL, "Qt."); 
        CASE(KG, "kg"); 
        CASE(G, "gm"); 
        CASE(MG, "miligram");  
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit) {   
    switch (unit) {
        CASE(MILES, "Miles"); 
        CASE(KM, "Km");
        CASE(YARD, "Yard"); 
        CASE(M, "m"); 
        CASE(FEET, "Feet"); 
        CASE(INCH, "Inch"); 
        CASE(CM, "cm"); 
        CASE(MM, "mm"); 
        CASE(MICROMETER, "micrometer"); 
        CASE(NANOMETER, "Nanometer"); 
        CASE(PICOMETER, "pm"); 
        CASE(ARMSTRONG, "armstrong");  
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const temperature_unit_t& unit) {
    switch(unit) {
        CASE(DEGREE_CELCIUS, "degree celcius"); 
        CASE(DEGREE_FARENHEIT, "degree farenheit"); 
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const duration_unit_t& unit) {
    switch (unit) {
        CASE(CENTURIES, "centuries"); 
        CASE(DECADES, "decades"); 
        CASE(YEARS, "yrs."); 
        CASE(MONTHS, "months"); 
        CASE(DAYS, "days"); 
        CASE(WEEKS, "weeks"); 
        CASE(HOURS, "hrs."); 
        CASE(MINUTES, "min"); 
        CASE(SECONDS, "seconds"); 
        CASE(MILISECONDS, "ms"); 
        CASE(MICROSECONDS, "microseconds"); 
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const volume_unit_t& unit) {
    switch (unit) {
        CASE(CUBIC_MM, "cubic cm");
        CASE(CUBIC_CM, "cubic mm"); 
        CASE(CUBIC_M, "cubic meter"); 
        CASE(L, "l"); 
        CASE(ML, "ml");
        CASE(KL, "kl");   
    }

    return os; 
}
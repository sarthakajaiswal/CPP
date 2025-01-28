#include <iostream> 
#include "units.hpp" 

std::ostream& operator<<(std::ostream& os, const temperature_unit_t& unit) {
    switch (unit) {
        CASE(DEGREE_CELCIUS, "degree celcius"); 
        CASE(DEGREE_FARENHEIT, "degree farenheit"); 
        CASE(KELVIN, "K"); 
    }
    return os; 
} 

std::ostream& operator<<(std::ostream& os, const length_unit_t& unit) {
    switch (unit) {
        CASE(LIGHT_YEAR, "light lear"); 
        CASE(AU, "au"); 
        CASE(KM, "km"); 
        CASE(M, "m"); 
        CASE(CM, "cm"); 
        CASE(MM, "mm"); 
        CASE(MICROMETER, "micrometer"); 
        CASE(NANOMETER, "nanometer"); 
        CASE(PICOMETER, "pm"); 
        CASE(ARMSTRONG, "armstrong"); 
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const mass_unit_t& unit) {
    switch(unit) {
        CASE(TONN, "tonn"); 
        CASE(QUINTAL, "Qt."); 
        CASE(KG, "kg"); 
        CASE(G, "gm"); 
        CASE(MG, "mg"); 
        CASE(MICROGRAM, "microgram"); 
        CASE(POUND, "pound");
        CASE(ATOMIC_MASS_UNIT, "amu");  
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const area_unit_t& unit) {
    switch(unit) {
        CASE(SQUARE_CM, "sq. cm"); 
        CASE(SQUARE_KM, "sq. km"); 
        CASE(SQUARE_MM, "sq. mm"); 
        CASE(SQUARE_FOOT, "sq. ft."); 
        CASE(SQUARE_INCH, "sq. inch"); 
    }
    return os; 
}

std::ostream& operator<<(std::ostream& os, const pressure_unit_t& unit) {
    switch(unit) {
        CASE(PASCAL, "Pa"); 
        CASE(KILOPASCAL, "kPa"); 
        CASE(MEGAPASCAL, "MPa"); 
        CASE(BAR, "bar"); 
        CASE(MILIBAR, "mbar"); 
        CASE(ATM, "atm"); 
        CASE(TORR, "torr"); 
        CASE(PSI, "psi"); 
        CASE(MMHG, "mmHg");  
        CASE(NEWTON_PER_SQUARE_METER, "M/m^2"); 
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const velocity_unit_t& unit) {
    switch (unit) {
        CASE(M_PER_SEC, "m/s"); 
        CASE(KM_PER_SEC, "km/s"); 
        CASE(KM_PER_MIN, "km/min"); 
        CASE(KM_PER_HR, "km/hr"); 
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const volume_unit_t& unit) {
    switch (unit) {
        CASE(CUBIC_MM, "cu. mm"); 
        CASE(CUBIC_CM, "cu. cm"); 
        CASE(CUBIC_M, "cu. meter"); 
        CASE(CUBIC_KM, "cu. km"); 
        CASE(KL, "kiloliter"); 
        CASE(L, "liter");
        CASE(ML, "ml");  
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const density_unit_t& unit) {
    switch(unit) {
        CASE(KG_PER_M_CUBE, "kg/m3"); 
        CASE(GRAM_PER_CM_CUBE, "g/cm3"); 
        CASE(GRAM_PER_ML, "g/mL");  
        CASE(GRAM_PER_L, "g/L");
        CASE(KG_PER_L, "kg/L");  
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const force_unit_t& unit) {
    switch (unit) {
        CASE(NEWTON, "N"); 
        CASE(KILONEWTON, "kN"); 
        CASE(METER_PER_SECOND_SQUARE, "m/s^2"); 
        CASE(DYNE, "Dyne"); 
        CASE(LBF, "lbs"); 
    }
    return os; 
}

std::ostream& operator<<(std::ostream& os, const duration_unit_t& unit) {
    switch(unit) {
        CASE(CENTURIES, "centuries"); 
        CASE(DECADE, "decades"); 
        CASE(YEARS, "yrs."); 
        CASE(MONTHS, "months"); 
        CASE(DAYS, "days"); 
        CASE(HOURS, "hrs."); 
        CASE(MINUTES, "mins."); 
        CASE(SECONDS, "secs"); 
        CASE(MILISECONDS, "miliseconds"); 
        CASE(NANOSECONDS, "ns"); 
        CASE(MICROSECONDS, "microsecods"); 
    }
    return os; 
}
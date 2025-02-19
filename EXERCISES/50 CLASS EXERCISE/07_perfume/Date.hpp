#ifndef _DATE_HPP
#define _DATE_HPP

class Date{
    private: 
        unsigned short m_day;
        unsigned short m_month;
        unsigned short m_year;

    public: 
        Date(unsigned short day, unsigned short month, unsigned short year);
        Date(unsigned short month, unsigned short year);

        friend std::ostream& operator<<(std::ostream& os, const Date& date);
};

#endif
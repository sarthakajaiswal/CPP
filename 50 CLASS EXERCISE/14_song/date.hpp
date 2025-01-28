#ifndef _DATE_HPP
#define _DATE_HPP 

typedef enum month {
	JAN=1, 
	FEB, 
	MAR, 
	APR, 
	MAY, 
	JUNE, 
	JULY, 
	AUG, 
	SEPT, 
	OCT, 
	NOV, 
	DEC
}month_t; 

class Date {
	private: 
		unsigned short m_day; 
		unsigned short m_month; 
		unsigned short m_year; 
		
	public: 
		Date(
			unsigned short day, 
			month_t month, 
			unsigned short year
		);
		Date(
			month_t month, 
			unsigned short year
		); 
		Date(unsigned short year); 
		
		std::string month_str() const; 

		friend std::ostream& operator<<(std::ostream& os,const Date& date); 
}; 

#endif
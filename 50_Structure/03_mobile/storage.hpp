#ifndef	_STORAGE_HPP
#define	_STORAGE_HPP

const int YES=1;
const int NO=0;

typedef enum storage_unit {
	BYTE = 0, 
	KB, 
	MB, 
	GB, 
	TB
}sunit_t; 

class Storage { 
	private: 
		unsigned short m_amt; 
		sunit_t m_unit;
	
	public: 
		Storage(unsigned short m_amt, sunit_t m_unit);
		friend std::ostream& operator<<(std::ostream& os, const Storage& obj); 
};

std::ostream& operator<<(std::ostream& os, const sunit_t& unit); 		

#endif	
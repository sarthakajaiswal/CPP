#include <iostream> 
#include "tyre_info.hpp" 

TyreInfo::TyreInfo(
	float tyre_width_mm, 
	float aspect_ratio_percent, 
	tyre_construction_t construction_type, 
	float rim_diameter_inch, 
	unsigned short load_index, 
	char speed_rating 
) {
	m_tyre_width_mm = (tyre_width_mm > 0) ? tyre_width_mm : 0; 
	m_aspect_ratio_percent = (aspect_ratio_percent > 0) ? aspect_ratio_percent : 0; 
	m_construction_type = construction_type, 
	m_rim_diameter_inch = (rim_diameter_inch > 0) ? rim_diameter_inch : 0, 
	m_load_index = (load_index > 0) ? load_index : 0; 
	m_speed_rating = speed_rating; 
} 

TyreInfo::TyreInfo(
	float tyre_width_mm, 
	float aspect_ratio_percent, 
	tyre_construction_t construction_type, 
	float rim_diameter_inch	
) {
	m_tyre_width_mm = (tyre_width_mm > 0) ? tyre_width_mm : 0;  
	m_aspect_ratio_percent = (aspect_ratio_percent > 0) ? aspect_ratio_percent : 0;  
	m_construction_type = construction_type;  
	m_rim_diameter_inch = (rim_diameter_inch > 0) ? rim_diameter_inch : 0;  
	m_load_index = 0;  
	m_speed_rating = 0;  
} 
	
std::ostream& operator<<(std::ostream& os, const TyreInfo& obj) {
	os << static_cast<int>(obj.m_tyre_width_mm) << "/" << static_cast<int>(obj.m_aspect_ratio_percent) 
		<< " " << obj.m_construction_type << static_cast<int>(obj.m_rim_diameter_inch); 
		
	if(obj.m_load_index > 0)
		os << " " << obj.m_load_index; 
	if(obj.m_speed_rating != 0) 
		os << " " << obj.m_speed_rating; 
		
	return os; 
} 	

std::ostream& operator<<(std::ostream& os, const tyre_construction_t& type) {
	switch(type) {
		case RADIAL: 
			os << "R"; 
			break; 
		case CROSS_PLY: 
			os << "C"; 
			break; 
		case BIAS_PLY: 
			os << "B"; 
			break;
		case DIAGONAL: 
			os << "D"; 
			break; 
		case PERFORMANCE: 
			os << "P"; 
			break; 
		case PNEUMATIC: 
			os << "PN"; 
			break; 
		case RUNFLAT: 
			os << "RF"; 
	}

	return os; 
} 
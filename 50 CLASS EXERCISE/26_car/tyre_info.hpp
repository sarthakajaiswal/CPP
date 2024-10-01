#ifndef _TYRE_INFO_HPP 
#define _TYRE_INFO_HPP 

enum tyre_construction_t {
	RADIAL=0, 
	CROSS_PLY, BIAS_PLY, BELTED_BIAS, DIAGONAL, 
	PERFORMANCE, PNEUMATIC, RUNFLAT
}; 

class TyreInfo {
	private: 
		float m_tyre_width_mm; 
		float m_aspect_ratio_percent; 
		tyre_construction_t m_construction_type; 
		float m_rim_diameter_inch; 
		unsigned short m_load_index; 
		char m_speed_rating; 
		
	public: 
		TyreInfo(
			float tyre_width_mm, 
			float aspect_ratio_percent, 
			tyre_construction_t tyre_construction_type, 
			float rim_diameter_inch, 
			unsigned short load_index, 
			char speed_rating
		);
		
		TyreInfo(
			float type_width_mm, 
			float aspect_ratio_percent, 
			tyre_construction_t m_construction_type, 
			float rim_diameter_inch 
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const TyreInfo& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const tyre_construction_t& type); 

#endif /* _TYRE_INFO_HPP */ 
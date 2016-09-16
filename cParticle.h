#ifndef cPARTICLE_H_
#define cPARTICLE_H_

#include <TVector3.h>

class cParticle {
	
	public:
	
		cParticle (double x_, double _y, double _z, double mass_, double radii_, double px_, double py_, double pz_);
		~cParticle 	();
		bool show 	();
		bool Ok 		();
	
		TVector3 return_coordin ();
		TVector3 return_speed ();
		double 	 return_mass ();
		double   return_radii ();
		
		void change_coordin (TVector3 new_coordin);
		void change_speed 	(TVector3 new_speed);
		void change_radii 	(double new_radii);
		void change_mass 		(double new_mass);
	
	private:
	
		TVector3 m_coordin;
		double m_mass;
		double m_radii;
		TVector3 m_speed;


};
#endif

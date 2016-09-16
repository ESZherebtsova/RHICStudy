#ifndef cCOLLIDER_H_
#define cCOLLIDER_H_
#include <vector>
#include "cParticle.h"
struct rezalt_collider {
	int t;
}	;


class cCollider {
	
		public:
			cCollider (cParticle particle_);
			~cCollider ();
			void show ();
			void Ok ();
			
			rezalt_collider collision ();
			void step (int count_, double size_of_step_ = 1.0, bool start_ = true);
		
		private:
		
		std::vector <cParticle>  *m_part;
		double m_time;
		int m_counter;
		
};


#endif 

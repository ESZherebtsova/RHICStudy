#ifndef CONST_DEF_CPARTIC_H_
#define CONST_DEF_CPARTIC_H_

//========================================
#ifdef _MSC_VER
		#define _FUNC_  __FUNCTION__
	#elif __GNUC__
		#define _FUNC_  __PRETTY_FUNCTION__
	#endif	
	
//========================================	
#define IF_ERROR_SHOW_(variable, msg)	if (variable < 0)	{ \
																	cout << "ERROR!!!" << endl; \
																	cout << msg << "< 0" << endl; \
																	cout << __FILE__ << endl; \
																	cout << _FUNC_<< "   " << __LINE__ << endl; \
																	return false; \
																} \
																else cout << endl; \
																	return true; 
																	
//========================================		
	#define _DEBUG_ASSERT_(msg) cout << _FUNC_ << ":" << msg; assert(0);
	#define _ASSERT_OK_(); if (!this->Ok ()) { \
						this->show (); \
						_DEBUG_ASSERT_("Not Ok!") \
					} 

					
//========================================		
#define  USE_SUPER_PUPER_GUARDS	

const int one_part_in_collid = -111;
unsigned const int time_to_collide_passid = 999999999;
//========================================		
struct part_param {
	double x;	
	double y;
	double z;
	double mass;
	double radii;
	double px;
	double py; 
	double pz;

};

struct rezalt_collider {
	int t;
}	;

												
#endif

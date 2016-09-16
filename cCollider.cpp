#include <iostream>
#include <assert.h>
#include "cCollider.h"
#include "const_def_cPartic.h"


//==============================
cCollider::cCollider (cParticle particle_) {
	
		m_part [0] = new cParticle particle_;
		m_counter = 0;
		m_time = 0;
	
}

//==============================
cCollider::~cCollider () {
	
	if (m_part [m_counter] != NULL) {
        delete m_part [];
   } 
}

//==============================
bool cCollider::show () {
	
	cout << "m_counter" << m_counter; IF_ERROR_SHOW_( m_counter,  "m_counter")
	cout << "m_time" << m_time; IF_ERROR_SHOW_( m_time,  "m_time")
	
	for (int i = 0; i <= m_counter; i++ ) {
		m_part [0] -> show ();
	}
}

//==============================
bool cCollider::Ok () {
	
	IF_ERROR_SHOW_( m_counter,  "m_counter")
	IF_ERROR_SHOW_( m_time,  "m_time")
	
	for (int i = 0; i <= m_counter; i++ ) {
		m_part [0] -> Ok ();
	}
}

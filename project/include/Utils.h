#ifndef GA_H
#define GA_H


namespace ganalytics {
	
	
	void startNewSession( const char *sUID , int iPeriod );
	void sendScreenView( const char *sScreen );
	void sendEvent( const char *sData);
	void sendSocial( const char *sSocial_network , const char *sAction , const char *sTarget );
	void setCustom_dimension( int iIndex , const char *sValue );
	void setCustom_metric( int iIndex , int iMetric );
	void sendTiming( const char *sCat ,  int iValue, const char *sName , const char *sLabel );
	void stopSession( );
	
}


#endif
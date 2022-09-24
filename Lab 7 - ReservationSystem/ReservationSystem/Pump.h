///////////////////////////////////////////////////////////////////////////////////
// file:  Pump.h
// Job:   holds the Pump class 
//////////////////////////////////////////////////////////////////////////////////

// mult protection
#ifndef _PUMP_
#define _PUMP_

// class Pump
class Pump
{
private:
	//Variables
	int fillCount;				//number of car fillup completed

public:	
	//constructor and destructor
	Pump(void);					
	~Pump(void);				
	
	//accessors  
	int getFillCount(void);
	
	///////////////////////////////////////////////////////////////////////
	// Name:		fillTankUp
	//
	// Arguments:	void
	//
	// Notes:		This function will increment the fill count and pause 
	//				for 30 milliseconds
	//
	// Returns:		void
	//////////////////////////////////////////////////////////////////////
	void fillTankUp(void);		
};

#endif
#ifndef FSTATE_EXPLORE_H
#define FSTATE_EXPLORE_H

#include "..\FuSMState.h"
#include "..\utility.h"

class FStateExplore : public FuSMState
{
public:
	//constructor/functions
	FStateExplore(Control* parent) :FuSMState(FUSM_STATE_EXPLORE, parent) {}
	void Update(float dt);
	float CalculateActivation();
	void Exit();

private:
	void NewRandomPos();
	Point3f m_randPos;
};

#endif 
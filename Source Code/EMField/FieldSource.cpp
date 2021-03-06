/*******************************************************************
	Author: David Ge (dge893@gmail.com, aka Wei Ge)
	Last modified: 06/12/2017
	Allrights reserved by David Ge

********************************************************************/

#include "FieldSource.h"

FieldSource::FieldSource(void)
{
	_fields = NULL;
	_timeIndex = 0;
	Cdtds = 0.0;
}

/*
	a subclass may override this function to do more initializations,
	including reading back configurations values from taskParameters.
*/
int FieldSource::initialize(double Courant, double timeStep, double spaceStep, int maximumRadius, TaskFile *taskParameters)
{
	Cdtds = Courant;
	dt = timeStep;
	ds = spaceStep;
	maxRadius = maximumRadius;
	return ERR_OK;
}
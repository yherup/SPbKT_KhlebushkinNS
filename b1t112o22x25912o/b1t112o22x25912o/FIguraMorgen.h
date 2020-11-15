#pragma once
#include "ferz.h"
#include "SlonSlawaMarlow.h"
#include "Peshka.h"


ref class FIguraMorgen
{
public:
	FIguraMorgen(int , int, int, int, int, int);
	~FIguraMorgen();
	int take(int);
	int px, py, fx, fy, sx, sy;
};


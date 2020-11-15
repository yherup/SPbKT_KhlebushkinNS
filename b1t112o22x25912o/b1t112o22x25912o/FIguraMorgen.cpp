#include "FIguraMorgen.h"
#include "ferz.h"
#include "SlonSlawaMarlow.h"
#include "Peshka.h"
#include <math.h>

FIguraMorgen::FIguraMorgen(int a, int b, int c, int d, int f, int e)
{
	px = a;
	py = b;
	sx = c;
	sy = d;
	fx = f;
	fy = e;
}

FIguraMorgen::~FIguraMorgen()
{

}

int FIguraMorgen::take(int n)
{
	int c = 0, d=0;
	if (n == 1)
	{
		if ((sx == px + 1 || sx == px - 1) && sy == py + 1)
		{
			c++;
		}
		if ((fx == px + 1 || fx == px - 1) && fy == py + 1)
		{
			d++;
		}
		if (c == 1 && d == 1)
			return 11;
		else if (c == 1 && d == 0)
			return 10;
		else if (c == 0 && d == 1)
			return 2;
		else
			return 0;
	}
	if (n == 2)
	{
		if (abs(px - sx) == abs(py - sy))
		{
			c++;
		}
		if (abs(fx - sx) == abs(fy - sy))
		{
			d++;
		}
		if (c == 1 && d == 1)
			return 11;
		else if (c == 1 && d == 0)
			return 10;
		else if (c == 0 && d == 1)
			return 2;
		else
			return 0;
	}
	if (n == 3)
	{
		if ((abs(sx - fx) == abs(sy - fy)) || (fx == sx) || (fy == sy))
		{
			c++;
		}
		if ((abs(fx - px) == abs(fy - py))||(fx==px)||(fy==py))
		{
			d++;
		}
		if (c == 1 && d == 1)
			return 11;
		else if (c == 1 && d == 0)
			return 10;
		else if (c == 0 && d == 1)
			return 2;
		else
			return 0;
	}
}

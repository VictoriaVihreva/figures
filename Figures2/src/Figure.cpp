#include "Figure.h"

bool operator==(Figure& f1, Figure& f2)
{
	return f1.Square() == f2.Square();
}
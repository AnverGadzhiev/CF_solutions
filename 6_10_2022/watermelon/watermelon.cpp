#include "watermelon.h"

bool IsItPossibleToDivideBerry(const int& berry_weight) 
{
    return (berry_weight > 2) && !bool(berry_weight % 2);
}
#include <iostream>
#include "undergrad.h"

void setAge(undergrad *ptr, int a) {
	ptr->stuPtr->setAge(a);
}
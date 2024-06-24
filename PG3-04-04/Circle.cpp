#include "Circle.h"
#include <stdio.h>
#define PI 3.14159265359

void Circle::Size()
{
	result_ = radius_ * radius_ * PI;
}

void Circle::Draw()
{
	printf("â~ÇÃñ êœÇÕ%f\n", result_);
}

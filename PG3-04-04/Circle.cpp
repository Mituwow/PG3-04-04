#include "Circle.h"
#include <stdio.h>
#define PI 3.14159265359

void Circle::Size()
{
	result_ = radius_ * radius_ * PI;
}

void Circle::Draw()
{
	printf("�~�̖ʐς�%f\n", result_);
}

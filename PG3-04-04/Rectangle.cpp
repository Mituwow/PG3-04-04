#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size()
{
	result_ = width_ * height_;
}

void Rectangle::Draw()
{
	printf("‹éŒ`‚Ì–ÊÏ‚Í%f\n", result_);
}

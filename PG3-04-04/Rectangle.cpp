#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size()
{
	result_ = width_ * height_;
}

void Rectangle::Draw()
{
	printf("��`�̖ʐς�%f\n", result_);
}

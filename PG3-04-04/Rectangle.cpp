#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size()
{
	result_ = width_ * height_;
}

void Rectangle::Draw()
{
	Size();
	printf("��`�̖ʐς�%f\n", result_);
}

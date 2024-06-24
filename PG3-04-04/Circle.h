#pragma once
#include "IShape.h"

class Circle : public IShape {
public:
	void Size() override;
	void Draw() override;

private:
	float radius_ = 2.0f;
	float result_ = 0.0f;

};
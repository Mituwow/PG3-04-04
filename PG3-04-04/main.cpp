#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

//�l���o�Ă��Ȃ��I�I�I

int main(){

	IShape* shape[2];

	shape[0] = new Circle;
	shape[1] = new Rectangle;

	for (int i = 0; i < 2; i++) {
		shape[i]->Draw();
	}

	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
	}

	for (int i = 0; i < 2; i++) {
		delete shape[i];
	}

	return 0;
}
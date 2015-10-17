#pragma once
#ifndef __CAR__
#define __CAR__

#include "DynamicObject.h"
#include "stdlib.h"
#include <cmath>
#define _USE_MATH_DEFINES

class Car : public DynamicObject {
public:

	Car(Vector3 *position);
	~Car();
	void draw();
	void draw(int wf);

private:
	// Nomes:
	//		T -> face de cima (top)
	//		B -> face de baixo (bottom)
	//		L -> vertice da esquerda (visto pelo condutor)
	//		R -> vertice da direita (visto pelo condutor)
	//		F -> vertice da frente
	Vector3 *_vertTL, *_vertTR, *_vertTF, *_vertBL, *_vertBR, *_vertBF;
	int wf;
	double _l, _h;

	float computeSqrt();
	void computeVertices();
	float getFrontVertexY(float x, float hypotenuse);
	void drawCube(int wf);
};

#endif

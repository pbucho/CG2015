/*
 * Orange.cpp
 *
 *  Created on: 30/09/2015
 *      Author: Pedro
 */

#include "Orange.h"
#include <GL/glut.h>

Orange::Orange(Vector3 position, float radius) {
	setColor(Vector3(1.0f, 0.5f, 0.0f));
	this->position = position;
	this->radius = radius;

	setObjRadius(radius);
}

Orange::~Orange() {
	// TODO Auto-generated destructor stub
}

void Orange::draw() {
	draw(0);
}

void Orange::setColor(Vector3 color){
	this->color = color;
}

Vector3 Orange::getColor(){
	return color;
}

void Orange::draw(int wf) {

	glColor3f(color.getX(), color.getY(), color.getZ());

	glPushMatrix();
	glTranslated(position.getX(), position.getY(), position.getZ());
	glScalef(4.0f, 4.0f, 4.0f);
	if (wf) {
		glutWireSphere(radius, 50, 5);
	} else {
		glutSolidSphere(radius, 50, 5);
	}
	glPopMatrix();
}

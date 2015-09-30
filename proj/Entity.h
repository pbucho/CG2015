/*
 * Entity.h
 *
 *  Created on: 30 Sep 2015
 *      Author: eu
 */

#ifndef PROJ_ENTITY_H_
#define PROJ_ENTITY_H_

#include "Vector3.h"

class Vector3;
class Entity {
public:
	Entity();
	virtual ~Entity();
	virtual Vector3 getPosition();
	virtual Vector3 setPosition(double x, double y, double z);
	virtual Vector3 setPosition(const Vector3 &p);
};

#endif /* PROJ_ENTITY_H_ */

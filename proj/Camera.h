/*
 * Camera.h
 *
 *  Created on: 30/09/2015
 *      Author: 5702pedro.bucho
 */

#ifndef PROJ_CAMERA_H_
#define PROJ_CAMERA_H_

#include "Vector3.h"

class Camera {
protected:
	double _near;
	double _far;

private:
	Vector3 _up;
	Vector3 _center;
	Vector3 _at;

public:
	Camera(double near, double far, Vector3 up, Vector3 center, Vector3 at);
	virtual ~Camera();

	virtual void update();
	virtual void computeProjectionMatrix();
	virtual void computeVisualizationMatrix();
};

#endif /* PROJ_CAMERA_H_ */

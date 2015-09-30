/*
 * GameManager.h
 *
 *  Created on: 30/09/2015
 *      Author: 5702pedro.bucho
 */

#ifndef PROJ_GAMEMANAGER_H_
#define PROJ_GAMEMANAGER_H_

#include "Camera.h"

class GameManager {
private:
	Camera *_cameras;

public:
	GameManager();
	virtual ~GameManager();

	void display();
	void reshape(GLsizei w, GLsizei h);
	void keyPressed();
	void onTimer();
	void idle();
	void update();
	void init();
};

#endif /* PROJ_GAMEMANAGER_H_ */

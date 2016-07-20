#include "Player.h"

Player::Player() {
	// Initialize speed and position
	this->position.resize(NUM_DIMENSIONS);
	this->velocity.resize(NUM_DIMENSIONS);
	// Start at zero.
	this->reorientAtZero();
	this->stop();
	return;
}
Player::~Player() {
	return;
}
void Player::accelerate(double x_component, double y_component) {
	this->velocity[X_AXIS] += x_component;
	
	// Enforce the speed cap.
	if(this->velocity[X_AXIS] > 100.0) {
		this->velocity[X_AXIS] = 100.0;
	}
	
	this->velocity[Y_AXIS] += y_component;
	// Enforce the speed cap.
	if (this->velocity[Y_AXIS]) {
		this->velocity[Y_AXIS] = 100.0;
	}
	
	return;
}
void Player::updatePostion() {
	// Add the vo
	this->position[X_AXIS] += this->velocity[X_AXIS];
	this->position[Y_AXIS] += this->velocity[Y_AXIS];
	return;
}
bool Player::stop() {
	return ((this->velocity[X_AXIS] = 0) && (this->position[Y_AXIS] = 0)) ? true : false;
}
bool Player::reorientAtZero() {
	return ((this->position[X_AXIS] = 0) && (this->position[Y_AXIS] = 0)) ? true : false;
}
void Player::printStats() {
	printf("Position (km away from the origin): %f (X), %f (Y)\nVelocity (km/h): %f (X), %f (Y)\n",this->position[X_AXIS], this->position[Y_AXIS], this->velocity[X_AXIS], this->velocity[Y_AXIS]);
	return;
}
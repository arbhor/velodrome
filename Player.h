#ifndef Player_h
#define Player_h

#include <Vector>
#include "constants.h"

class Player {
private:
	const int NUM_DIMENSIONS = 2;	// Number of spatial dimensions
	enum {X_AXIS, Y_AXIS};			// Specifies axis numbering.
	const int MAX_SPEED = 100.0;	// Speed ceiling
	std::vector<double> position;	// Position of the player
	std::vector<double> velocity;	// Speed and direction of the player
	/* std::vector<double> inertia;	// "Slows down" velocity changes. */
public:
	Player();
	~Player();
	double getXPosition(); // Returns position on x plane.
	double getYPosition(); // Returns position on y plane.
	void accelerate(double x_component, double y_component); // Increses the speed by the amount specified.
	void updatePostion(); // Sums velocity to position.
	bool stop(); // Clears velocity
	bool reorientAtZero(); // Clears position
	void printStats(); // Prints velocity and position (does not work for small masses)
};

#endif
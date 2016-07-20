#ifndef Player_hpp
#define Player_hpp

#include <Vector>
#include "constants.h"

class Player {
private:
	const int NUM_DIMENSIONS = 2;								// Number of spatial dimensions
	const int X_AXIS = 0;										// Specifies the x-axis as the first element in an array.
	const int Y_AXIS = 1;										// Specifies the y-axis as the second element in an array.
	const int MAX_SPEED = 100.0;								// Speed ceiling
	std::vector<double> position;								// Position of the player
	std::vector<double> velocity;								// Speed and direction of the player
public:
	Player();
	~Player();
	void accelerate(double x_component, double y_component);	// Increses the speed by the amount specified.
	void updatePostion();										// Sums velocity to position.
	bool stop();												// Clears velocity
	bool reorientAtZero();										// Clears position
	void printStats();
};

#endif
#ifndef ViewController_hpp
#define ViewController_hpp

#include <SDL2/SDL.h>
#include "constants.h"

class ViewController {
private:
	SDL_Window * viewport;									// The SDL window
	SDL_Surface * viewportSurface;							// The surface of the SDL window
	
	SDL_Event event;										// Current SDL event
public:
	ViewController();										// Contructor, initializes properties
	~ViewController();										// Destructor, calls destroySDL and closes controllers.
	bool viewLoaded();										// Initializations for controllers when the view loads.
	void updateDisplay();									// Main function for changing the display
	bool initializeSDL();									// Start up SDL
	void destroySDL();										// Close SDL
	// Hastily implemented for SDL_Quit
	int getEventType();
	void updateEvent();
};

#endif

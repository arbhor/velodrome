#include "ViewController.h"

ViewController::ViewController() {
	this->viewport = NULL;
	this->viewportSurface = NULL;
}

ViewController::~ViewController() {
	destroySDL();
}

bool ViewController::viewLoaded() {
	if(this->initializeSDL()) {
		// Initialize controllers.
	}
	else {
		return false;
	}
	return true;
}

void ViewController::updateDisplay() {
	// Draw the background
	this->backgroundView.drawBackground(this->player.getXPosition(), this->player.getYPosition(), this->viewportSurface);
	
	// Draw the player
	this->playerView.drawPlayer(this->viewportSurface);
	
	// Draw the player input box
	this->plyInputView.drawPlyInput(this->viewportSurface);
	return;
}

bool ViewController::initializeSDL() {
	// Initialize SDL
	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("SDL Initialization failure: %s", SDL_GetError());
		return false;
	}
	
	// Create a window
	this->viewport = SDL_CreateWindow("Velodrome",
								SDL_WINDOWPOS_CENTERED,
								SDL_WINDOWPOS_CENTERED,
								SDL_WINDOW_LENGTH,
								SDL_WINDOW_HEIGHT,
								SDL_WINDOW_SHOWN);
	if(this->viewport == NULL) {
		printf("SDL Window failure: %s", SDL_GetError());
		return false;
	}
	
	// Retrieve viewport surface
	this->viewportSurface = SDL_GetWindowSurface(this->viewport);
	
	return true;
}

void ViewController::destroySDL() {
	SDL_FreeSurface(this->viewportSurface);
	SDL_DestroyWindow(this->viewport);
	SDL_Quit();
}

/* I did these hastily just for SDL_Quit events */
int ViewController::getEventType() {
	return this->event.type;
}
void ViewController::updateEvent() {
	SDL_PollEvent(&this->event);
	return;
}
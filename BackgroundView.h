#ifndef BackgroundView_h
#define BackgroundView_h
#include "constants.h"

#if FOR_WINDOWS_OS
	#include <SDL.h>
#else
	#include <SDL2/SDL.h>
#endif

class BackgroundView {
public:
	void drawGrid(double atX, double atY, SDL_Surface * toSurface);
	void drawBackground(double atX, double atY, SDL_Surface * toSurface);
};

#endif

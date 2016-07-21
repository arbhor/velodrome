#ifndef BackgroundView_h
#define BackgroundView_h

#include <SDL2/SDL.h>

class BackgroundView {
	public:
		void drawGrid(double atX, double atY, SDL_Surface * toSurface);
		void drawBackground(double atX, double atY, SDL_Surface * toSurface);
};

#endif
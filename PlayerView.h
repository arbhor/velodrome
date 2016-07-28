#ifndef PlayerView_h
#define PlayerView_h
#include "constants.h"

#if FOR_WINDOWS_OS
	#include <SDL.h>
#else
	#include <SDL2/SDL.h>
#endif

class PlayerView {
public:
	void drawPlayer(SDL_Surface * toSurface);
};

#endif

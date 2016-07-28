#ifndef PlayerInputView_h
#define PlayerInputView_h
#include "constants.h"

#if FOR_WINDOWS_OS
	#include <SDL.h>
#else
	#include <SDL2/SDL.h>
#endif

class PlayerInputView {
public:
	void drawPlyInput(SDL_Surface * toSurface);
};

#endif

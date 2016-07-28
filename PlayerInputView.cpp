#include "PlayerInputView.h"

void PlayerInputView::drawPlyInput(SDL_Surface * toSurface)
{
	SDL_Renderer* gRenderer = NULL;
	SDL_Rect plyrInputScreen;
	plyrInputScreen.x = 0;
	plyrInputScreen.y = SDL_WINDOW_HEIGHT / 4;
	plyrInputScreen.w = SDL_WINDOW_LENGTH / 4;
	plyrInputScreen.h = SDL_WINDOW_HEIGHT / 4;
	SDL_RenderSetViewport(gRenderer, &plyrInputScreen);
	return;
}
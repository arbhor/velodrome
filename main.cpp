#include "ViewController.h"

int main(int argc, const char * argv[]) {
	// Initialize the view controller
	ViewController viewController;
	viewController.viewLoaded();
	
	// Keep the window up until close.
	while (viewController.getEventType() != SDL_QUIT) {
		viewController.updateEvent();
	}
	
	return 0;
}
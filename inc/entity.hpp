#ifndef entity_h
#define entity_h

#include "window.hpp"
#include "location.hpp"

class Entity
{
	public:
		void Place();
		SDL_Texture* loadTexture(std::string path, Window main);

	protected:
        //Location L;
		int xPosition, yPosition; //Coordinates of entity on window
		int height, width;        //Dimensions of image on window
		int degrees = 0;
		SDL_Texture* texture;
		SDL_Renderer* renderer;
};

#endif

// ============================================================================
// [Include Section]
// ============================================================================
#include "CApp.h"
// ============================================================================
// [Defines & Constants]
// ============================================================================
#define APPTITLE 		"Game"

using namespace std;


//vars
const int SCREEN_WIDTH 	= 1280;
const int SCREEN_HEIGHT	= 720;
SDL_Rect SpriteClip;
Texture spriteSheetTexture;





CApp::CApp() :
	running(false)
{
}

CApp::~CApp()
{
	OnCleanup();
}

int CApp::OnInit()
{
	// Initialize the SDL library.
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		fprintf(stderr, "SDL_Init() failed: %s\n", SDL_GetError());
		return APP_FAILED;
	}
	
	window = SDL_CreateWindow(APPTITLE, 
							  SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
							  SCREEN_WIDTH, SCREEN_HEIGHT, 
							  SDL_WINDOW_SHOWN);
    
	if (window != NULL) {
		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	}
    
    spriteSheetTexture.setTex(loadTexture("/res/player_rest.bmp", renderer));
    
    SpriteClip.x = 0;
    SpriteClip.y = 0;
    SpriteClip.w = 75;
    SpriteClip.h = 75;
    
    
	cout<<"Application succesfully launched!"<<endl;
	return APP_OK;
}

void CApp::OnCleanup()
{
	if (renderer != NULL) {
		SDL_DestroyRenderer(renderer);	
	}
	if (window != NULL)	{
		SDL_DestroyWindow(window);
	}

    cout<<"Application succesfully quit!"<<endl;
	SDL_Quit();
}

int CApp::OnExecute()
{
	// Initialize application.
	int state = OnInit();
	if (state != APP_OK) {
		return state;
	}
	
	// Enter the SDL event loop.
	SDL_Event event;

	running = true;
	
	while (running)
	{
		while (SDL_PollEvent(&event)) {
        	OnEvent(&event);
        }
		
		OnUpdate();
		OnRender();
	}
	
	return state;
}

void CApp::OnEvent(SDL_Event* event)
{
	switch (event->type)
	{
		case SDL_QUIT:
			running = false;
			break;
			
		case SDL_KEYDOWN:
			if (event->key.keysym.sym == SDLK_ESCAPE) {
				running = false;
			}
            
        
		default:
			break;
	}
}

void CApp::OnUpdate()
{
    
    
}

void CApp::OnRender()
{
	SDL_RenderClear(renderer);

    //setViewport(createViewport(400, 400, 100, 100), renderer);
    
    spriteSheetTexture.render( 200, 200, &SpriteClip, renderer);
	
	SDL_RenderPresent(renderer);
}
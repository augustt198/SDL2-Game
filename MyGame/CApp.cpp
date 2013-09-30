// ============================================================================
// [Include Section]
// ============================================================================
#include "CApp.h"
// ============================================================================
// [Defines & Constants]
// ============================================================================
#define APPTITLE 		"Game"

using namespace std;

const int SCREEN_WIDTH 	= 1280;
const int SCREEN_HEIGHT	= 720;


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
    
	
    surface = SDL_LoadBMP("res/player_rest.bmp");
    if(surface == nullptr){
        cout<<"Error loading image: "<<SDL_GetError()<<endl;
    }
    texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    
    
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
            if(event->key.keysym.sym == SDLK_a){
                player.move(2);
            }
            if(event->key.keysym.sym == SDLK_d){
                player.move(1);
            }
        
		default:
			break;
	}
}

void CApp::OnUpdate()
{
	// Update your game logic here
}

void CApp::OnRender()
{
	SDL_RenderClear(renderer);

    //renderTex(renderer, SurfaceToTex(player.getPlayerSurface(), renderer));
    //geo.draw(renderer);
    
    SDL_SetRenderDrawColor( renderer, 0xFF, 0xFF, 0xFF, 0xFF );
    SDL_RenderClear( renderer );
    
    //Render red filled quad
    SDL_Rect fillRect = { SCREEN_WIDTH / 4, SCREEN_HEIGHT / 4, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 };
    SDL_SetRenderDrawColor( renderer, 0xFF, 0x00, 0x00, 0xFF );
    SDL_RenderFillRect( renderer, &fillRect );
    
    //Render green outlined quad
    SDL_Rect outlineRect = { SCREEN_WIDTH / 6, SCREEN_HEIGHT / 6, SCREEN_WIDTH * 2 / 3, SCREEN_HEIGHT * 2 / 3 };
    SDL_SetRenderDrawColor( renderer, 0x00, 0xFF, 0x00, 0xFF );
    SDL_RenderDrawRect( renderer, &outlineRect );
    
    //Draw blue horizontal line
    SDL_SetRenderDrawColor( renderer, 0x00, 0x00, 0xFF, 0xFF );
    SDL_RenderDrawLine( renderer, 0, SCREEN_HEIGHT / 2, SCREEN_WIDTH, SCREEN_HEIGHT / 2 );
	
	SDL_RenderPresent(renderer);
}
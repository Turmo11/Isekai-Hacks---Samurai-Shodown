#ifndef __ModuleAudio_H__
#define __ModuleAudio_H__

#include "Module.h"

#include "SDL/include/SDL.h"
#include "SDL_mixer/include/SDL_mixer.h"
#pragma comment( lib, "SDL_mixer/libx86/SDL2_mixer.lib" )

#define MAX_EFFECTS 20
#define MAX_SOUNDTRACK 10
#define MUSIC_VOLUME 80 //volume controller range between 0 and 100 (less-more)

class ModuleAudio : public Module
{
public:
	ModuleAudio();
	~ModuleAudio();

	Mix_Chunk* LoadFX(const char* path);
	bool PlayFX(Mix_Chunk* chunk);
	bool UnLoadFx(Mix_Chunk* chunk);

	bool Init();
	bool CleanUp();

public:

	Mix_Chunk * effects[MAX_EFFECTS];
	Mix_Music * soundtracks[MAX_SOUNDTRACK];

};

#endif //__ModuleAudio_H__


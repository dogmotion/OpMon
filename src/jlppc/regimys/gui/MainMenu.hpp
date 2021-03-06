/*
MainMenu.hpp
Auteur : Jlppc
Fichier sous license GPL-3.0
http://opmon-game.ga
Contient le namespace MainMenu
*/
#ifndef MAINMENU_HPP
#define MAINMENU_HPP

#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include "MainFrame.hpp"

namespace MainFrame {
/**
Namespace contenant les éléments du menu principal
*/
namespace MainMenu {

extern SDL_Texture *fond;
extern SDL_Texture *play;
extern SDL_Texture *charge;
extern SDL_Texture *options;
extern SDL_Texture *exit;
extern SDL_Texture *cursor;
extern SDL_Rect curPos[4];
extern SDL_Rect textPos[4];
extern Mix_Music *fondMusTitle;
extern Mix_Chunk *bruitArr;
extern Mix_Chunk *bruitPush;
extern Mix_Chunk *bruitNope;

extern bool continuer;

void initVars();
void verifVars();
void deleteVars();
int mainMenu();
int boucle0();
}
}


#endif // MAINMENU_HPP

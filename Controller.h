#pragma once
#include "Game.h"
class Controller :
    public Game
{
public:
    Controller();
    ~Controller();
    void Init();

    static void keyboard(unsigned char, int, int);

    void mouse();


};


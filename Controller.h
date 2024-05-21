#pragma once
#include "Game.h"
class Controller :
    public Game
{
public:
    Controller();
    ~Controller();
    void Init();

    void keyboard();

    void mouse();


};


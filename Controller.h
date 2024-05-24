#pragma once
#include "Game.h"
class Controller :
    public Game
{
public:
    Controller();
    ~Controller();
    virtual void Init();
    void BindCallBackFunc() override;
    void keyboard();
    
    void mouse();


};


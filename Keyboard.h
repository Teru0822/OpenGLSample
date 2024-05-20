#pragma once
#include "Controller.h"
class Keyboard :
    public Controller
{

public:
    Keyboard();
    ~Keyboard();

    void kbDown();
    void kbUp();

    void spe_kbDown();
    void spe_kbUp();
};


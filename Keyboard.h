#pragma once
#include "Controller.h"
class Keyboard :
    public Controller
{

public:
    Keyboard();
    ~Keyboard();

    void Init();

    static void kbDown(unsigned char, int, int);
    static void kbUp(unsigned char, int, int);

    void spe_kbDown();
    void spe_kbUp();
};


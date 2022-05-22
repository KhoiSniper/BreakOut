#pragma once
#include <SFML/Graphics.hpp>
#include <fstream>
using namespace std;
using namespace sf;

class BestScore
{
    public:
        BestScore(RenderWindow &windowRef);
        void HandleEvent(Event &e);
        void Draw();
    private:
        Text text,text1;
        Font font;
        RenderWindow &m_windowRef;
};
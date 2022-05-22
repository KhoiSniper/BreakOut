#include "BestScore.h"
#include "GameStateManager.h"
#include <iostream>

BestScore::BestScore(RenderWindow &windowRef):m_windowRef(windowRef)
{
    ifstream file;
    file.open("BestScore.txt",ios::in);
    int score;
    file>>score;
    file.close();
    
    font.loadFromFile("Font/crystal.ttf");

    text.setCharacterSize(30);
    text.setFont(font);
    text.setFillColor(Color::White);
    text.setPosition(180,200);
    text.setString("Your highest score: "+std::to_string(score));

    text1.setCharacterSize(30);
    text1.setFont(font);
    text1.setFillColor(Color::White);
    text1.setPosition(180,280);
    text1.setString("Press A to return!");

}
void BestScore::HandleEvent(Event &e)
{
    if(e.type==Event::KeyReleased)
    {
       if(e.key.code==Keyboard::isKeyPressed(Keyboard::A))
       {
           ChangeStateTo(0);
       }
    }
}

void BestScore::Draw()
{
    m_windowRef.clear(Color::Black);
    m_windowRef.draw(text);
    m_windowRef.draw(text1);
    m_windowRef.display();
}


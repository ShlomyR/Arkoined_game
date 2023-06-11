#pragma once

#include "MenuOption.hxx"


class PlayOption : public MenuOption
{
public:
    void draw(sf::RenderWindow& ) override;
    bool handleInput(InputHandler& , GameState &) override;
    void makeButton(sf::RenderWindow&) override;
    bool isSelected() const override;
    void setIsSelected(bool) override;
    sf::Text getText() override;
private:
    sf::Text m_playText;
    bool m_isSelected = false;
    static bool m_isMusicPlayed;
};
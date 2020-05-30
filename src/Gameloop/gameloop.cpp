#include "gameloop.hpp"

Gameloop::Gameloop() : window_running_or_not( false )
{

}

bool                Gameloop::Run() const
{
    return window_running_or_not;
};

void                Gameloop::ChangeWindowRunningState() {
    this->window_running_or_not = !this->window_running_or_not;
};
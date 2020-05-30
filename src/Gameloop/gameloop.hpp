#ifndef _GAMELOOP_HPP_
# define _GAMELOOP_HPP_

#include "patron_gameloop.hpp"
#include "../WindowManager/window_manager.hpp"

class               Gameloop : PatronGameloop
{
private:
    bool            window_running_or_not;
public:
    Gameloop();
    virtual ~Gameloop(){};
    WindowManager   window();
    void            ChangeWindowRunningState();
    bool            Run() const; // geter for window_running_or_not
};

#endif // _GAMELOOP_HPP_
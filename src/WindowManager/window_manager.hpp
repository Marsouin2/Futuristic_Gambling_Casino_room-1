#ifndef _WINDOW_MANAGER_HPP_
# define _WINDOW_MANAGER_HPP_

#include "patron_window_manager.hpp"

class                   WindowManager : PatronWindowManager
{
private:

public:
    WindowManager(){};
    virtual ~WindowManager(){};
    void                InitWindow(){};
    void                CloseWindow(){};
    void                ClearWindow(){};
};

#endif // _WINDOW_MANAGER_HPP_
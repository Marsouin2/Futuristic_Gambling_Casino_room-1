#ifndef _PATRON_WINDOW_MANAGER_HPP_
# define _PATRON_WINDOW_MANAGER_HPP_

class               PatronWindowManager
{
private:

public:
    PatronWindowManager(){};
    virtual ~PatronWindowManager(){};
    virtual void    InitWindow() = 0;
    virtual void    CloseWindow() = 0;
    virtual void    ClearWindow() = 0;
};

#endif // _PATRON_WINDOW_MANAGER_HPP_
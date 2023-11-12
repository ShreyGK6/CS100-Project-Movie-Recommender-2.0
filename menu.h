#ifndef __MENU_H__
#define __MENU_H__

class menu
{
    public:

    menu();
    void display();

    private:

    void callSettings();
    void callMovieRec();
    void callSearch();
    void callOverview();
    void signOut();
    void options();
};

#endif
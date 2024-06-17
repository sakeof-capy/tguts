#include "../include/MyApp.hpp"
#include "../include/MyFrame.hpp"

bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame();
    frame->Show(true);


    MyFrame *frame2 = new MyFrame();
    frame2->Show(true);

    return true;
}

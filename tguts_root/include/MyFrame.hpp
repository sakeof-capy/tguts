#ifndef MYFRAME_HPP_
#define MYFRAME_HPP_

#include <wx/wx.h>

class MyFrame : public wxFrame
{
public:
    MyFrame();

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};

#endif //MYFRAME_HPP_

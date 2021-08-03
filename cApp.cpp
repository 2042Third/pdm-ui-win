#pragma once
#include "cApp.h"
#include "cMain.h" 
#include "id.h"


wxIMPLEMENT_APP(cApp);
// cApp::cApp()
// {

// }

cApp::~cApp()
{
}

bool cApp::OnInit()
{
	if ( !wxApp::OnInit() )
        return false;

	wxSize size=wxGetDisplaySize();
	size.Scale(0.3, 0.4);

	panel_main = new cMain(nullptr, window::id::MAINWINDOW, _("pdm - version 0.1"), wxDefaultPosition,size, wxDEFAULT_FRAME_STYLE, wxASCII_STR(wxFrameNameStr));
	panel_main->Show(true);
	return true;
}

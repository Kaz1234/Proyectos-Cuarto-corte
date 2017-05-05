//---------------------------------------------------------------------------
//
// Name:        Cifrado de cesar graficoApp.cpp
// Author:      licoc
// Created:     04/05/2017 09:56:04 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#include "Cifrado de cesar graficoApp.h"
#include "Cifrado de cesar graficoFrm.h"

IMPLEMENT_APP(Cifrado_de_cesar_graficoFrmApp)

bool Cifrado_de_cesar_graficoFrmApp::OnInit()
{
    Cifrado_de_cesar_graficoFrm* frame = new Cifrado_de_cesar_graficoFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Cifrado_de_cesar_graficoFrmApp::OnExit()
{
	return 0;
}

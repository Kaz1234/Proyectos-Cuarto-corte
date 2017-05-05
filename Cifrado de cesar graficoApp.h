//---------------------------------------------------------------------------
//
// Name:        Cifrado de cesar graficoApp.h
// Author:      licoc
// Created:     04/05/2017 09:56:04 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __CIFRADO_DE_CESAR_GRAFICOFRMApp_h__
#define __CIFRADO_DE_CESAR_GRAFICOFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Cifrado_de_cesar_graficoFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif

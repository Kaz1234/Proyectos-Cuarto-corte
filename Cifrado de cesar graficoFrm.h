///-----------------------------------------------------------------
///
/// @file      Cifrado de cesar graficoFrm.h
/// @author    licoc
/// Created:   04/05/2017 09:56:04 p.m.
/// @section   DESCRIPTION
///            Cifrado_de_cesar_graficoFrm class declaration
///
///------------------------------------------------------------------

#ifndef __CIFRADO_DE_CESAR_GRAFICOFRM_H__
#define __CIFRADO_DE_CESAR_GRAFICOFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
////Header Include End

////Dialog Style Start
#undef Cifrado_de_cesar_graficoFrm_STYLE
#define Cifrado_de_cesar_graficoFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End
#include <fstream>
class Cifrado_de_cesar_graficoFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		void Mnusalir1010Click(wxCommandEvent& event);
		Cifrado_de_cesar_graficoFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Cifrado de cesar grafico"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Cifrado_de_cesar_graficoFrm_STYLE);
		virtual ~Cifrado_de_cesar_graficoFrm();
		void WxopenClick(wxCommandEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		void WxButton2Click(wxCommandEvent& event);
		void WxopenClick0(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxMenuBar *WxMenuBar1;
		wxStaticText *WxStaticText1;
		wxTextCtrl *PDescifrado;
		wxTextCtrl *PCifrado;
		wxTextCtrl *Numero;
		wxButton *WxButton2;
		wxButton *WxButton1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		wxString codigo, temporal;
		int numero;
        enum
		{
			////GUI Enum Control ID Start
			ID_MNU_ARCHIVO_1001 = 1001,
			ID_MNU_GUARDAR_1004 = 1004,
			ID_MNU_GUARDARARCHIVO_1006 = 1006,
			ID_MNU_GUARDARCOMO____1008 = 1008,
			ID_MNU_SALIR_1010 = 1010,
			
			ID_WXSTATICTEXT1 = 1017,
			ID_PDESCIFRADO = 1016,
			ID_PCIFRADO = 1015,
			ID_NUMERO = 1014,
			ID_WXBUTTON2 = 1012,
			ID_WXBUTTON1 = 1011,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
		
        
};

#endif

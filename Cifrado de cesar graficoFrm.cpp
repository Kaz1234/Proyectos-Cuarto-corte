///-----------------------------------------------------------------
///
/// @file      Cifrado de cesar graficoFrm.cpp
/// @author    licoc
/// Created:   04/05/2017 09:56:04 p.m.
/// @section   DESCRIPTION
///            Cifrado_de_cesar_graficoFrm class implementation
///
///------------------------------------------------------------------

#include "Cifrado de cesar graficoFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Cifrado_de_cesar_graficoFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Cifrado_de_cesar_graficoFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Cifrado_de_cesar_graficoFrm::OnClose)
	EVT_MENU(ID_MNU_SALIR_1010, Cifrado_de_cesar_graficoFrm::Mnusalir1010Click)
END_EVENT_TABLE()
////Event Table End

Cifrado_de_cesar_graficoFrm::Cifrado_de_cesar_graficoFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Cifrado_de_cesar_graficoFrm::~Cifrado_de_cesar_graficoFrm()
{
}

void Cifrado_de_cesar_graficoFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_ARCHIVO_1001_Mnu_Obj = new wxMenu();
	ID_MNU_ARCHIVO_1001_Mnu_Obj->Append(ID_MNU_ABRIR_1002, _("Abrir"), _(""), wxITEM_NORMAL);
	ID_MNU_ARCHIVO_1001_Mnu_Obj->Append(wxID_STATIC, _("Nuevo"), _(""), wxITEM_NORMAL);
	
	wxMenu *ID_MNU_GUARDAR_1004_Mnu_Obj = new wxMenu();
	ID_MNU_GUARDAR_1004_Mnu_Obj->Append(ID_MNU_GUARDARARCHIVO_1006, _("Guardar archivo"), _(""), wxITEM_NORMAL);
	ID_MNU_GUARDAR_1004_Mnu_Obj->Append(ID_MNU_GUARDARCOMO____1008, _("Guardar como..."), _(""), wxITEM_NORMAL);
	ID_MNU_ARCHIVO_1001_Mnu_Obj->Append(ID_MNU_GUARDAR_1004, _("Guardar"), ID_MNU_GUARDAR_1004_Mnu_Obj);
	ID_MNU_ARCHIVO_1001_Mnu_Obj->AppendSeparator();
	ID_MNU_ARCHIVO_1001_Mnu_Obj->Append(ID_MNU_SALIR_1010, _("Salir"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_ARCHIVO_1001_Mnu_Obj, _("Archivo"));
	SetMenuBar(WxMenuBar1);

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("N° Desplazamiento"), wxPoint(41, 11), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxBOLD, false));

	WxMemo2 = new wxTextCtrl(this, ID_WXMEMO2, wxEmptyString, wxPoint(67, 168), wxSize(325, 121), wxTE_MULTILINE, wxDefaultValidator, _("WxMemo2"));
	WxMemo2->SetMaxLength(0);
	WxMemo2->SetFocus();
	WxMemo2->SetInsertionPointEnd();

	WxMemo1 = new wxTextCtrl(this, ID_WXMEMO1, wxEmptyString, wxPoint(67, 40), wxSize(325, 114), wxTE_MULTILINE, wxDefaultValidator, _("WxMemo1"));
	WxMemo1->SetMaxLength(0);
	WxMemo1->SetFocus();
	WxMemo1->SetInsertionPointEnd();

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _(""), wxPoint(158, 11), wxSize(21, 19), 0, wxDefaultValidator, _("WxEdit1"));

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _("Descifrar texto"), wxPoint(290, 8), wxSize(108, 25), wxNO_BORDER, wxDefaultValidator, _("WxButton2"));
	WxButton2->SetForegroundColour(wxColour(255,255,255));
	WxButton2->SetBackgroundColour(wxColour(_("BLUE")));
	WxButton2->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxBOLD, false));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Cifrar texto"), wxPoint(194, 7), wxSize(81, 25), wxNO_BORDER, wxDefaultValidator, _("WxButton1"));
	WxButton1->SetForegroundColour(wxColour(255,255,255));
	WxButton1->SetBackgroundColour(wxColour(_("LIME GREEN")));
	WxButton1->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxBOLD, false));

	SetTitle(_("Cifrado de cesar grafico"));
	SetIcon(wxNullIcon);
	SetSize(339,49,466,349);
	Center();
	
	////GUI Items Creation End
}

void Cifrado_de_cesar_graficoFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * Mnusalir1010Click
 */
void Cifrado_de_cesar_graficoFrm::Mnusalir1010Click(wxCommandEvent& event)
{
	Close();
}

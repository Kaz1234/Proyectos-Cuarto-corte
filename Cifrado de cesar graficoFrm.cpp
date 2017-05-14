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
	
	EVT_TEXT(ID_PCIFRADO,Cifrado_de_cesar_graficoFrm::PcifradoUpdated)
	
	EVT_TEXT(ID_WXNUMER,Cifrado_de_cesar_graficoFrm::wxNumerUpdated)
	EVT_BUTTON(ID_BT_DECO,Cifrado_de_cesar_graficoFrm::Bt_DecoClick)
	EVT_BUTTON(ID_BT_CODIFICAR,Cifrado_de_cesar_graficoFrm::Bt_CodificarClick)
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

	WxStaticText4 = new wxStaticText(this, ID_WXSTATICTEXT4, _("Texto Cifrado"), wxPoint(32, 375), wxDefaultSize, 0, _("WxStaticText4"));
	WxStaticText4->SetForegroundColour(wxColour(0,0,255));
	WxStaticText4->SetFont(wxFont(14, wxSWISS, wxNORMAL, wxBOLD, false));

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, _("Texto Descifrado"), wxPoint(10, 176), wxDefaultSize, 0, _("WxStaticText3"));
	WxStaticText3->SetForegroundColour(wxColour(0,0,255));
	WxStaticText3->SetFont(wxFont(14, wxSWISS, wxNORMAL, wxBOLD, false));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("Nº de Desplazamiento:"), wxPoint(67, 77), wxDefaultSize, 0, _("WxStaticText2"));
	WxStaticText2->SetForegroundColour(wxColour(255,255,255));
	WxStaticText2->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxBOLD, false));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Cifrado de Cesar"), wxPoint(213, 13), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetForegroundColour(wxColour(0,0,255));
	WxStaticText1->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Pdecifrado = new wxTextCtrl(this, ID_PDECIFRADO, wxEmptyString, wxPoint(167, 310), wxSize(430, 155), wxTE_MULTILINE, wxDefaultValidator, _("Pdecifrado"));
	Pdecifrado->SetMaxLength(0);
	Pdecifrado->SetFocus();
	Pdecifrado->SetInsertionPointEnd();

	Pcifrado = new wxTextCtrl(this, ID_PCIFRADO, wxEmptyString, wxPoint(169, 116), wxSize(427, 161), wxTE_MULTILINE, wxDefaultValidator, _("Pcifrado"));
	Pcifrado->SetMaxLength(0);
	Pcifrado->SetFocus();
	Pcifrado->SetInsertionPointEnd();

	wxNumer = new wxTextCtrl(this, ID_WXNUMER, _(""), wxPoint(220, 78), wxSize(21, 19), 0, wxDefaultValidator, _("wxNumer"));

	Bt_Deco = new wxButton(this, ID_BT_DECO, _("Descifrar texto"), wxPoint(434, 75), wxSize(108, 25), wxNO_BORDER, wxDefaultValidator, _("Bt_Deco"));
	Bt_Deco->SetForegroundColour(wxColour(255,255,255));
	Bt_Deco->SetBackgroundColour(wxColour(_("BLUE")));
	Bt_Deco->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxBOLD, false));

	Bt_Codificar = new wxButton(this, ID_BT_CODIFICAR, _("Cifrar texto"), wxPoint(298, 75), wxSize(81, 25), wxNO_BORDER, wxDefaultValidator, _("Bt_Codificar"));
	Bt_Codificar->SetForegroundColour(wxColour(255,255,255));
	Bt_Codificar->SetBackgroundColour(wxColour(_("LIME GREEN")));
	Bt_Codificar->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxBOLD, false));

	SetTitle(_("Cifrado de cesar grafico"));
	SetIcon(wxNullIcon);
	SetSize(92,19,637,521);
	Center();
	
	////GUI Items Creation End
}

void Cifrado_de_cesar_graficoFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

void Cifrado_de_cesar_graficoFrm::Mnusalir1010Click(wxCommandEvent& event)
{
	Close();
}

void Cifrado_de_cesar_graficoFrm::wxNumerUpdated(wxCommandEvent& event)
{
	if(wxNumer->GetValue() !=""){
	   Bt_Codificar->Enable(true);
    }else{
        Bt_Codificar->Enable(false);
        }
}


void Cifrado_de_cesar_graficoFrm::PcifradoUpdated(wxCommandEvent& event)
{
	// insert your code here
}


void Cifrado_de_cesar_graficoFrm::Bt_CodificarClick(wxCommandEvent& event)
{
	wxString codigo;
    char temporal;
	int numero;
    int longitud;
        
    numero=wxAtoi(wxNumer->GetValue());
    codigo=Pcifrado->GetValue();
    longitud = codigo.size();
    
	for(int i=0; i<longitud; i++){
        if(codigo[i]>96 && codigo[i]<123){
            
            temporal=codigo[i];
            temporal = temporal -((numero%26));
			codigo[i]=temporal;
			
			if(codigo[i]<97){
                temporal = codigo[i];
                temporal = temporal + 26;
				codigo[i]=temporal;
			}
			
			Pdecifrado->SetValue(codigo);

        }
    }
}


void Cifrado_de_cesar_graficoFrm::Bt_DecoClick(wxCommandEvent& event)
{
	wxString codigo;
    char temporal;
	int numero;
    int longitud;
        
    numero=wxAtoi(wxNumer->GetValue());
    codigo=Pdecifrado->GetValue();
    longitud = codigo.size();
    
	for(int i=0; i<longitud; i++){
        if(codigo[i]>96 && codigo[i]<123){
            
            temporal=codigo[i];
            temporal = temporal -((numero%26));
			codigo[i]=temporal;
			
			if(codigo[i]<97){
                temporal = codigo[i];
                temporal = temporal + 26;
				codigo[i]=temporal;
			}
			
			Pcifrado->SetValue(codigo);

        }
    }
}

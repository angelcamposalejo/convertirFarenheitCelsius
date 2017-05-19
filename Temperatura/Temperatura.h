#pragma once  //______________________________________ Temperatura.h  
#include "Resource.h"
class Temperatura : public Win::Dialog
{
public:
	Temperatura()
	{
	}
	~Temperatura()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxFarenheit;
	Win::Button btConvertir;
	Win::Textbox tbxResultado;
	Win::Label lb2;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(427);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(91);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Temperatura";
		lb1.Create(NULL, L"Farenheit", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 57, 26, 98, 25, hWnd, 1000);
		tbxFarenheit.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 40, 57, 126, 25, hWnd, 1001);
		btConvertir.Create(NULL, L"Convertir", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 183, 56, 96, 28, hWnd, 1002);
		tbxResultado.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 301, 58, 119, 25, hWnd, 1003);
		lb2.Create(NULL, L"Celsius", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 312, 29, 99, 25, hWnd, 1004);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxFarenheit.Font = fontArial014A;
		btConvertir.Font = fontArial014A;
		tbxResultado.Font = fontArial014A;
		lb2.Font = fontArial014A;
	}
	//_________________________________________________
	void btConvertir_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btConvertir.IsEvent(e, BN_CLICKED)) { btConvertir_Click(e); return true; }
		return false;
	}
};

#include "stdafx.h"  //________________________________________ Temperatura.cpp
#include "Temperatura.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Temperatura app;
	return app.BeginDialog(IDI_Temperatura, hInstance);
}

void Temperatura::Window_Open(Win::Event& e)
{
}

void Temperatura::btConvertir_Click(Win::Event& e)
{
}


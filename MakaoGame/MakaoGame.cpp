#include "pch.h"

using namespace System;
using namespace System::Windows::Forms;


int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MakaoGame::StartScreen start_form;
	Application::Run(% start_form);

    return 0;
}

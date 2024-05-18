#include "src\ConversionUtils.h"
#include "src\Constants.h"
#include "MainForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // Indique que le thread principal doit être en mode STA
int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	securedataeraser::MainForm form;
	Application::Run(% form);

	return 0;
}

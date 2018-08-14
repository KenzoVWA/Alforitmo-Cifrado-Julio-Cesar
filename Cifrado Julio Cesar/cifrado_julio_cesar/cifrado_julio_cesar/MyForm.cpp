
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	cifrado_julio_cesar::MyForm form;
	Application::Run(gcnew cifrado_julio_cesar::MyForm());
	return 0;
}
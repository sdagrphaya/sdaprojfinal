#include "MainLogin.h"
#include <Windows.h>
using namespace Project10;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MainLogin());
	return 0;
}
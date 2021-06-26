#include <iostream>
#include <windows.h> 



using namespace std;



void antidbg() {

	if (system("TASKKILL /F /IM HTTPDebuggerSvc.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}

	if (system("TASKKILL /F /IM KsDumperClient.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}

	if (system("TASKKILL /F /IM HTTPDebuggerUI.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}

	if (system("TASKKILL /F /IM FolderChangesView.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}


	if (system("TASKKILL /F /IM ProcessHacker.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}



	if (system("TASKKILL /F /IM procmon.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}



	if (system("TASKKILL /F /IM idaq.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}


	if (system("TASKKILL /F /IM idaq64.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}



	if (system("TASKKILL /F /IM Wireshark.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}



	if (system("TASKKILL /F /IM Fiddler.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}


	if (system("TASKKILL /F /IM Xenos64.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}

	if (system("TASKKILL /F /IM Cheat Engine.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}


	if (system("TASKKILL /F /IM HTTP Debugger Windows Service (32 bit).exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}



	if (system("TASKKILL /F /IM KsDumper.exe >NUL 2> Debugger"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}



	if (system("TASKKILL /F /IM x64dbg.exe >NUL 2> 1"))
	{

	}
	else
	{
		MessageBox(0, "Debugger Dedected", "Error", MB_OK | MB_ICONERROR);
		exit(0);
	}

}

int main()
{

	SetConsoleTitle("Anti-Debugger");
	system("Color  4");

	cout << " \n";
	cout << " Debugger Log\n";

	while (true) {

		antidbg();
	}

	system("pause");
	return 0;
}
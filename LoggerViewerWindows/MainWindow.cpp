/**

    @file      MainWindow.cpp
    @brief     MainWindow class.
    @details   ~
    @author    Marcin Siemiñski
    @date      3.09.2022
    @copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	LoggerViewerWindows::MainWindow frm;
	Application::Run(% frm);
}
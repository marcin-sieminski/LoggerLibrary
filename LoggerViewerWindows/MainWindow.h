/**

    @file      MainWindow.h
    @brief     MainWindow class.
    @details   ~
    @author    Marcin Siemiñski
    @date      3.09.2022
    @copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include "Logger.h"
#include "LoggerViewerModel.h"

namespace LoggerViewerWindows {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

 /**

     @class   MainWindow
     @brief   MainWindow class.
     @details ~

 **/
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radioButtonTraceLevel;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBoxLoggingLevel;
	private: System::Windows::Forms::RadioButton^ radioButtonDebugLevel;
	private: System::Windows::Forms::RadioButton^ radioButtonFatalLevel;
	private: System::Windows::Forms::RadioButton^ radioButtonErrorLevel;
	private: System::Windows::Forms::RadioButton^ radioButtonWarningLevel;
	private: System::Windows::Forms::RadioButton^ radioButtonInfoLevel;
	private: System::Windows::Forms::GroupBox^ groupBoxTarget;
	private: System::Windows::Forms::CheckBox^ checkBoxNetwork;
	private: System::Windows::Forms::CheckBox^ checkBoxFile;
	private: System::Windows::Forms::TextBox^ textBoxFileLog;
	private: System::Windows::Forms::GroupBox^ groupBoxViewer;
	private: System::Windows::Forms::TabControl^ tabControlViewer;
	private: System::Windows::Forms::TabPage^ tabPageFileViewer;
	private: System::Windows::Forms::TabPage^ tabPageNetworkViewer;
	private: System::Windows::Forms::TextBox^ textBoxNetworkViewer;
	private: System::Windows::Forms::Button^ buttonGenerateLog;
	private: System::Windows::Forms::GroupBox^ groupBoxLogMessage;
	private: System::Windows::Forms::TextBox^ textBoxLogMessage;







	private: System::Windows::Forms::GroupBox^ groupBoxLogMessageLevel;
	private: System::Windows::Forms::RadioButton^ radioButtonFatalLevelMessage;

	private: System::Windows::Forms::RadioButton^ radioButtonErrorLevelMessage;

	private: System::Windows::Forms::RadioButton^ radioButtonWarningLevelMessage;

	private: System::Windows::Forms::RadioButton^ radioButtonInfoLevelMessage;

	private: System::Windows::Forms::RadioButton^ radioButtonDebugLevelMessage;

	private: System::Windows::Forms::RadioButton^ radioButtonTraceLevelMessage;
	private: System::Windows::Forms::Button^ buttonReadFile;
	private: System::Windows::Forms::Button^ buttonClear;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radioButtonTraceLevel = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxLoggingLevel = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonFatalLevel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonErrorLevel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonWarningLevel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonInfoLevel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDebugLevel = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxTarget = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxNetwork = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxFile = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxFileLog = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxViewer = (gcnew System::Windows::Forms::GroupBox());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonReadFile = (gcnew System::Windows::Forms::Button());
			this->tabControlViewer = (gcnew System::Windows::Forms::TabControl());
			this->tabPageFileViewer = (gcnew System::Windows::Forms::TabPage());
			this->tabPageNetworkViewer = (gcnew System::Windows::Forms::TabPage());
			this->textBoxNetworkViewer = (gcnew System::Windows::Forms::TextBox());
			this->buttonGenerateLog = (gcnew System::Windows::Forms::Button());
			this->groupBoxLogMessage = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxLogMessage = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxLogMessageLevel = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonFatalLevelMessage = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonErrorLevelMessage = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonWarningLevelMessage = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonInfoLevelMessage = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDebugLevelMessage = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonTraceLevelMessage = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxLoggingLevel->SuspendLayout();
			this->groupBoxTarget->SuspendLayout();
			this->groupBoxViewer->SuspendLayout();
			this->tabControlViewer->SuspendLayout();
			this->tabPageFileViewer->SuspendLayout();
			this->tabPageNetworkViewer->SuspendLayout();
			this->groupBoxLogMessage->SuspendLayout();
			this->groupBoxLogMessageLevel->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButtonTraceLevel
			// 
			this->radioButtonTraceLevel->AutoSize = true;
			this->radioButtonTraceLevel->Checked = true;
			this->radioButtonTraceLevel->Location = System::Drawing::Point(6, 19);
			this->radioButtonTraceLevel->Name = L"radioButtonTraceLevel";
			this->radioButtonTraceLevel->Size = System::Drawing::Size(53, 17);
			this->radioButtonTraceLevel->TabIndex = 0;
			this->radioButtonTraceLevel->TabStop = true;
			this->radioButtonTraceLevel->Text = L"Trace";
			this->radioButtonTraceLevel->UseVisualStyleBackColor = true;
			// 
			// groupBoxLoggingLevel
			// 
			this->groupBoxLoggingLevel->Controls->Add(this->radioButtonFatalLevel);
			this->groupBoxLoggingLevel->Controls->Add(this->radioButtonErrorLevel);
			this->groupBoxLoggingLevel->Controls->Add(this->radioButtonWarningLevel);
			this->groupBoxLoggingLevel->Controls->Add(this->radioButtonInfoLevel);
			this->groupBoxLoggingLevel->Controls->Add(this->radioButtonDebugLevel);
			this->groupBoxLoggingLevel->Controls->Add(this->radioButtonTraceLevel);
			this->groupBoxLoggingLevel->Location = System::Drawing::Point(12, 19);
			this->groupBoxLoggingLevel->Name = L"groupBoxLoggingLevel";
			this->groupBoxLoggingLevel->Size = System::Drawing::Size(133, 166);
			this->groupBoxLoggingLevel->TabIndex = 1;
			this->groupBoxLoggingLevel->TabStop = false;
			this->groupBoxLoggingLevel->Text = L"Set logging level";
			// 
			// radioButtonFatalLevel
			// 
			this->radioButtonFatalLevel->AutoSize = true;
			this->radioButtonFatalLevel->Location = System::Drawing::Point(6, 138);
			this->radioButtonFatalLevel->Name = L"radioButtonFatalLevel";
			this->radioButtonFatalLevel->Size = System::Drawing::Size(48, 17);
			this->radioButtonFatalLevel->TabIndex = 5;
			this->radioButtonFatalLevel->Text = L"Fatal";
			this->radioButtonFatalLevel->UseVisualStyleBackColor = true;
			// 
			// radioButtonErrorLevel
			// 
			this->radioButtonErrorLevel->AutoSize = true;
			this->radioButtonErrorLevel->Location = System::Drawing::Point(6, 114);
			this->radioButtonErrorLevel->Name = L"radioButtonErrorLevel";
			this->radioButtonErrorLevel->Size = System::Drawing::Size(47, 17);
			this->radioButtonErrorLevel->TabIndex = 4;
			this->radioButtonErrorLevel->Text = L"Error";
			this->radioButtonErrorLevel->UseVisualStyleBackColor = true;
			// 
			// radioButtonWarningLevel
			// 
			this->radioButtonWarningLevel->AutoSize = true;
			this->radioButtonWarningLevel->Location = System::Drawing::Point(7, 90);
			this->radioButtonWarningLevel->Name = L"radioButtonWarningLevel";
			this->radioButtonWarningLevel->Size = System::Drawing::Size(65, 17);
			this->radioButtonWarningLevel->TabIndex = 3;
			this->radioButtonWarningLevel->Text = L"Warning";
			this->radioButtonWarningLevel->UseVisualStyleBackColor = true;
			// 
			// radioButtonInfoLevel
			// 
			this->radioButtonInfoLevel->AutoSize = true;
			this->radioButtonInfoLevel->Location = System::Drawing::Point(6, 66);
			this->radioButtonInfoLevel->Name = L"radioButtonInfoLevel";
			this->radioButtonInfoLevel->Size = System::Drawing::Size(43, 17);
			this->radioButtonInfoLevel->TabIndex = 2;
			this->radioButtonInfoLevel->Text = L"Info";
			this->radioButtonInfoLevel->UseVisualStyleBackColor = true;
			// 
			// radioButtonDebugLevel
			// 
			this->radioButtonDebugLevel->AutoSize = true;
			this->radioButtonDebugLevel->Location = System::Drawing::Point(6, 42);
			this->radioButtonDebugLevel->Name = L"radioButtonDebugLevel";
			this->radioButtonDebugLevel->Size = System::Drawing::Size(57, 17);
			this->radioButtonDebugLevel->TabIndex = 1;
			this->radioButtonDebugLevel->Text = L"Debug";
			this->radioButtonDebugLevel->UseVisualStyleBackColor = true;
			// 
			// groupBoxTarget
			// 
			this->groupBoxTarget->Controls->Add(this->checkBoxNetwork);
			this->groupBoxTarget->Controls->Add(this->checkBoxFile);
			this->groupBoxTarget->Location = System::Drawing::Point(315, 109);
			this->groupBoxTarget->Name = L"groupBoxTarget";
			this->groupBoxTarget->Size = System::Drawing::Size(210, 76);
			this->groupBoxTarget->TabIndex = 2;
			this->groupBoxTarget->TabStop = false;
			this->groupBoxTarget->Text = L"Target";
			// 
			// checkBoxNetwork
			// 
			this->checkBoxNetwork->AutoSize = true;
			this->checkBoxNetwork->Location = System::Drawing::Point(6, 42);
			this->checkBoxNetwork->Name = L"checkBoxNetwork";
			this->checkBoxNetwork->Size = System::Drawing::Size(66, 17);
			this->checkBoxNetwork->TabIndex = 1;
			this->checkBoxNetwork->Text = L"Network";
			this->checkBoxNetwork->UseVisualStyleBackColor = true;
			// 
			// checkBoxFile
			// 
			this->checkBoxFile->AutoSize = true;
			this->checkBoxFile->Checked = true;
			this->checkBoxFile->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxFile->Location = System::Drawing::Point(6, 19);
			this->checkBoxFile->Name = L"checkBoxFile";
			this->checkBoxFile->Size = System::Drawing::Size(42, 17);
			this->checkBoxFile->TabIndex = 0;
			this->checkBoxFile->Text = L"File";
			this->checkBoxFile->UseVisualStyleBackColor = true;
			// 
			// textBoxFileLog
			// 
			this->textBoxFileLog->Location = System::Drawing::Point(6, 0);
			this->textBoxFileLog->Multiline = true;
			this->textBoxFileLog->Name = L"textBoxFileLog";
			this->textBoxFileLog->ReadOnly = true;
			this->textBoxFileLog->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxFileLog->Size = System::Drawing::Size(713, 196);
			this->textBoxFileLog->TabIndex = 3;
			// 
			// groupBoxViewer
			// 
			this->groupBoxViewer->Controls->Add(this->buttonClear);
			this->groupBoxViewer->Controls->Add(this->buttonReadFile);
			this->groupBoxViewer->Controls->Add(this->tabControlViewer);
			this->groupBoxViewer->Location = System::Drawing::Point(12, 191);
			this->groupBoxViewer->Name = L"groupBoxViewer";
			this->groupBoxViewer->Size = System::Drawing::Size(737, 287);
			this->groupBoxViewer->TabIndex = 4;
			this->groupBoxViewer->TabStop = false;
			this->groupBoxViewer->Text = L"Viewer";
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(93, 253);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(75, 23);
			this->buttonClear->TabIndex = 2;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MainWindow::buttonClear_Click);
			// 
			// buttonReadFile
			// 
			this->buttonReadFile->Location = System::Drawing::Point(11, 254);
			this->buttonReadFile->Name = L"buttonReadFile";
			this->buttonReadFile->Size = System::Drawing::Size(75, 23);
			this->buttonReadFile->TabIndex = 1;
			this->buttonReadFile->Text = L"Read File";
			this->buttonReadFile->UseVisualStyleBackColor = true;
			this->buttonReadFile->Click += gcnew System::EventHandler(this, &MainWindow::buttonReadFile_Click);
			// 
			// tabControlViewer
			// 
			this->tabControlViewer->Controls->Add(this->tabPageFileViewer);
			this->tabControlViewer->Controls->Add(this->tabPageNetworkViewer);
			this->tabControlViewer->Location = System::Drawing::Point(7, 19);
			this->tabControlViewer->Name = L"tabControlViewer";
			this->tabControlViewer->SelectedIndex = 0;
			this->tabControlViewer->Size = System::Drawing::Size(730, 228);
			this->tabControlViewer->TabIndex = 0;
			// 
			// tabPageFileViewer
			// 
			this->tabPageFileViewer->Controls->Add(this->textBoxFileLog);
			this->tabPageFileViewer->Location = System::Drawing::Point(4, 22);
			this->tabPageFileViewer->Name = L"tabPageFileViewer";
			this->tabPageFileViewer->Padding = System::Windows::Forms::Padding(3);
			this->tabPageFileViewer->Size = System::Drawing::Size(722, 202);
			this->tabPageFileViewer->TabIndex = 0;
			this->tabPageFileViewer->Text = L"File";
			this->tabPageFileViewer->UseVisualStyleBackColor = true;
			// 
			// tabPageNetworkViewer
			// 
			this->tabPageNetworkViewer->Controls->Add(this->textBoxNetworkViewer);
			this->tabPageNetworkViewer->Location = System::Drawing::Point(4, 22);
			this->tabPageNetworkViewer->Name = L"tabPageNetworkViewer";
			this->tabPageNetworkViewer->Padding = System::Windows::Forms::Padding(3);
			this->tabPageNetworkViewer->Size = System::Drawing::Size(722, 202);
			this->tabPageNetworkViewer->TabIndex = 1;
			this->tabPageNetworkViewer->Text = L"Network";
			this->tabPageNetworkViewer->UseVisualStyleBackColor = true;
			// 
			// textBoxNetworkViewer
			// 
			this->textBoxNetworkViewer->Enabled = false;
			this->textBoxNetworkViewer->Location = System::Drawing::Point(7, 4);
			this->textBoxNetworkViewer->Multiline = true;
			this->textBoxNetworkViewer->Name = L"textBoxNetworkViewer";
			this->textBoxNetworkViewer->Size = System::Drawing::Size(715, 195);
			this->textBoxNetworkViewer->TabIndex = 0;
			// 
			// buttonGenerateLog
			// 
			this->buttonGenerateLog->Location = System::Drawing::Point(531, 121);
			this->buttonGenerateLog->Name = L"buttonGenerateLog";
			this->buttonGenerateLog->Size = System::Drawing::Size(214, 53);
			this->buttonGenerateLog->TabIndex = 5;
			this->buttonGenerateLog->Text = L"Generate Log Message";
			this->buttonGenerateLog->UseVisualStyleBackColor = true;
			this->buttonGenerateLog->Click += gcnew System::EventHandler(this, &MainWindow::buttonGenerateLog_Click);
			// 
			// groupBoxLogMessage
			// 
			this->groupBoxLogMessage->Controls->Add(this->textBoxLogMessage);
			this->groupBoxLogMessage->Location = System::Drawing::Point(315, 19);
			this->groupBoxLogMessage->Name = L"groupBoxLogMessage";
			this->groupBoxLogMessage->Size = System::Drawing::Size(427, 83);
			this->groupBoxLogMessage->TabIndex = 6;
			this->groupBoxLogMessage->TabStop = false;
			this->groupBoxLogMessage->Text = L"Log message";
			// 
			// textBoxLogMessage
			// 
			this->textBoxLogMessage->Location = System::Drawing::Point(7, 20);
			this->textBoxLogMessage->Multiline = true;
			this->textBoxLogMessage->Name = L"textBoxLogMessage";
			this->textBoxLogMessage->Size = System::Drawing::Size(420, 63);
			this->textBoxLogMessage->TabIndex = 0;
			// 
			// groupBoxLogMessageLevel
			// 
			this->groupBoxLogMessageLevel->Controls->Add(this->radioButtonFatalLevelMessage);
			this->groupBoxLogMessageLevel->Controls->Add(this->radioButtonErrorLevelMessage);
			this->groupBoxLogMessageLevel->Controls->Add(this->radioButtonWarningLevelMessage);
			this->groupBoxLogMessageLevel->Controls->Add(this->radioButtonInfoLevelMessage);
			this->groupBoxLogMessageLevel->Controls->Add(this->radioButtonDebugLevelMessage);
			this->groupBoxLogMessageLevel->Controls->Add(this->radioButtonTraceLevelMessage);
			this->groupBoxLogMessageLevel->Location = System::Drawing::Point(151, 19);
			this->groupBoxLogMessageLevel->Name = L"groupBoxLogMessageLevel";
			this->groupBoxLogMessageLevel->Size = System::Drawing::Size(133, 166);
			this->groupBoxLogMessageLevel->TabIndex = 1;
			this->groupBoxLogMessageLevel->TabStop = false;
			this->groupBoxLogMessageLevel->Text = L"Set log message level";
			// 
			// radioButtonFatalLevelMessage
			// 
			this->radioButtonFatalLevelMessage->AutoSize = true;
			this->radioButtonFatalLevelMessage->Location = System::Drawing::Point(6, 138);
			this->radioButtonFatalLevelMessage->Name = L"radioButtonFatalLevelMessage";
			this->radioButtonFatalLevelMessage->Size = System::Drawing::Size(48, 17);
			this->radioButtonFatalLevelMessage->TabIndex = 5;
			this->radioButtonFatalLevelMessage->Text = L"Fatal";
			this->radioButtonFatalLevelMessage->UseVisualStyleBackColor = true;
			// 
			// radioButtonErrorLevelMessage
			// 
			this->radioButtonErrorLevelMessage->AutoSize = true;
			this->radioButtonErrorLevelMessage->Location = System::Drawing::Point(6, 114);
			this->radioButtonErrorLevelMessage->Name = L"radioButtonErrorLevelMessage";
			this->radioButtonErrorLevelMessage->Size = System::Drawing::Size(47, 17);
			this->radioButtonErrorLevelMessage->TabIndex = 4;
			this->radioButtonErrorLevelMessage->Text = L"Error";
			this->radioButtonErrorLevelMessage->UseVisualStyleBackColor = true;
			// 
			// radioButtonWarningLevelMessage
			// 
			this->radioButtonWarningLevelMessage->AutoSize = true;
			this->radioButtonWarningLevelMessage->Location = System::Drawing::Point(7, 90);
			this->radioButtonWarningLevelMessage->Name = L"radioButtonWarningLevelMessage";
			this->radioButtonWarningLevelMessage->Size = System::Drawing::Size(65, 17);
			this->radioButtonWarningLevelMessage->TabIndex = 3;
			this->radioButtonWarningLevelMessage->Text = L"Warning";
			this->radioButtonWarningLevelMessage->UseVisualStyleBackColor = true;
			// 
			// radioButtonInfoLevelMessage
			// 
			this->radioButtonInfoLevelMessage->AutoSize = true;
			this->radioButtonInfoLevelMessage->Location = System::Drawing::Point(6, 66);
			this->radioButtonInfoLevelMessage->Name = L"radioButtonInfoLevelMessage";
			this->radioButtonInfoLevelMessage->Size = System::Drawing::Size(43, 17);
			this->radioButtonInfoLevelMessage->TabIndex = 2;
			this->radioButtonInfoLevelMessage->Text = L"Info";
			this->radioButtonInfoLevelMessage->UseVisualStyleBackColor = true;
			// 
			// radioButtonDebugLevelMessage
			// 
			this->radioButtonDebugLevelMessage->AutoSize = true;
			this->radioButtonDebugLevelMessage->Checked = true;
			this->radioButtonDebugLevelMessage->Location = System::Drawing::Point(6, 42);
			this->radioButtonDebugLevelMessage->Name = L"radioButtonDebugLevelMessage";
			this->radioButtonDebugLevelMessage->Size = System::Drawing::Size(57, 17);
			this->radioButtonDebugLevelMessage->TabIndex = 1;
			this->radioButtonDebugLevelMessage->TabStop = true;
			this->radioButtonDebugLevelMessage->Text = L"Debug";
			this->radioButtonDebugLevelMessage->UseVisualStyleBackColor = true;
			// 
			// radioButtonTraceLevelMessage
			// 
			this->radioButtonTraceLevelMessage->AutoSize = true;
			this->radioButtonTraceLevelMessage->Location = System::Drawing::Point(6, 19);
			this->radioButtonTraceLevelMessage->Name = L"radioButtonTraceLevelMessage";
			this->radioButtonTraceLevelMessage->Size = System::Drawing::Size(53, 17);
			this->radioButtonTraceLevelMessage->TabIndex = 0;
			this->radioButtonTraceLevelMessage->Text = L"Trace";
			this->radioButtonTraceLevelMessage->UseVisualStyleBackColor = true;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(775, 487);
			this->Controls->Add(this->groupBoxLogMessage);
			this->Controls->Add(this->groupBoxTarget);
			this->Controls->Add(this->buttonGenerateLog);
			this->Controls->Add(this->groupBoxViewer);
			this->Controls->Add(this->groupBoxLogMessageLevel);
			this->Controls->Add(this->groupBoxLoggingLevel);
			this->Name = L"MainWindow";
			this->Text = L"Logger Generator & Viewer";
			this->groupBoxLoggingLevel->ResumeLayout(false);
			this->groupBoxLoggingLevel->PerformLayout();
			this->groupBoxTarget->ResumeLayout(false);
			this->groupBoxTarget->PerformLayout();
			this->groupBoxViewer->ResumeLayout(false);
			this->tabControlViewer->ResumeLayout(false);
			this->tabPageFileViewer->ResumeLayout(false);
			this->tabPageFileViewer->PerformLayout();
			this->tabPageNetworkViewer->ResumeLayout(false);
			this->tabPageNetworkViewer->PerformLayout();
			this->groupBoxLogMessage->ResumeLayout(false);
			this->groupBoxLogMessage->PerformLayout();
			this->groupBoxLogMessageLevel->ResumeLayout(false);
			this->groupBoxLogMessageLevel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonGenerateLog_Click(System::Object^ sender, System::EventArgs^ e) {
		auto message = textBoxLogMessage->Text;
		LoggerLibrary::Logger::LogLevel loggingLevel;
		LoggerLibrary::Logger::LogLevel logMessageLevel;
		bool enableFileOutput = false;
		bool enableNetworkOutput = false;

		if (radioButtonTraceLevel->Checked)
		{
			loggingLevel = LoggerLibrary::Logger::TraceLevel;
		}
		else if (radioButtonDebugLevel->Checked)
		{
			loggingLevel = LoggerLibrary::Logger::DebugLevel;
		}
		else if (radioButtonInfoLevel->Checked)
		{
			loggingLevel = LoggerLibrary::Logger::InfoLevel;
		}
		else if (radioButtonWarningLevel->Checked)
		{
			loggingLevel = LoggerLibrary::Logger::WarningLevel;
		}
		else if (radioButtonErrorLevel->Checked)
		{
			loggingLevel = LoggerLibrary::Logger::ErrorLevel;
		}
		else
		{
			loggingLevel = LoggerLibrary::Logger::FatalLevel;
		}

		if (checkBoxFile->Checked)
		{
			enableFileOutput = true;
		}
		if (checkBoxNetwork->Checked)
		{
			enableNetworkOutput = true;
		}

		if (radioButtonTraceLevelMessage->Checked)
		{
			logMessageLevel = LoggerLibrary::Logger::TraceLevel;
		}
		else if (radioButtonDebugLevelMessage->Checked)
		{
			logMessageLevel = LoggerLibrary::Logger::DebugLevel;
		}
		else if (radioButtonInfoLevelMessage->Checked)
		{
			logMessageLevel = LoggerLibrary::Logger::InfoLevel;
		}
		else if (radioButtonWarningLevelMessage->Checked)
		{
			logMessageLevel = LoggerLibrary::Logger::WarningLevel;
		}
		else if (radioButtonErrorLevelMessage->Checked)
		{
			logMessageLevel = LoggerLibrary::Logger::ErrorLevel;
		}
		else
		{
			logMessageLevel = LoggerLibrary::Logger::FatalLevel;
		}


		LoggerViewerModel::LoggerViewerModel::Log(message, loggingLevel, enableFileOutput, enableNetworkOutput, logMessageLevel);

	}

	private: System::Void buttonReadFile_Click(System::Object^ sender, System::EventArgs^ e) {

		textBoxFileLog->Text = LoggerViewerModel::LoggerViewerModel::ReadLogFile();
	}

	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxFileLog->Text = "";
	}
};
}

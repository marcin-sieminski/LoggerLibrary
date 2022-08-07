#pragma once

namespace LoggerViewerWindows {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
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
	private: System::Windows::Forms::GroupBox^ groupBoxErrorId;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBoxArea;
	private: System::Windows::Forms::RadioButton^ radioButtonAreaAdministration;
	private: System::Windows::Forms::RadioButton^ radioButtonAreaMain;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->tabControlViewer = (gcnew System::Windows::Forms::TabControl());
			this->tabPageFileViewer = (gcnew System::Windows::Forms::TabPage());
			this->tabPageNetworkViewer = (gcnew System::Windows::Forms::TabPage());
			this->textBoxNetworkViewer = (gcnew System::Windows::Forms::TextBox());
			this->buttonGenerateLog = (gcnew System::Windows::Forms::Button());
			this->groupBoxLogMessage = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxLogMessage = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxErrorId = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxArea = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonAreaMain = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonAreaAdministration = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxLoggingLevel->SuspendLayout();
			this->groupBoxTarget->SuspendLayout();
			this->groupBoxViewer->SuspendLayout();
			this->tabControlViewer->SuspendLayout();
			this->tabPageFileViewer->SuspendLayout();
			this->tabPageNetworkViewer->SuspendLayout();
			this->groupBoxLogMessage->SuspendLayout();
			this->groupBoxErrorId->SuspendLayout();
			this->groupBoxArea->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButtonTraceLevel
			// 
			this->radioButtonTraceLevel->AutoSize = true;
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
			this->groupBoxLoggingLevel->Text = L"Log level";
			// 
			// radioButtonFatalLevel
			// 
			this->radioButtonFatalLevel->AutoSize = true;
			this->radioButtonFatalLevel->Location = System::Drawing::Point(6, 138);
			this->radioButtonFatalLevel->Name = L"radioButtonFatalLevel";
			this->radioButtonFatalLevel->Size = System::Drawing::Size(48, 17);
			this->radioButtonFatalLevel->TabIndex = 5;
			this->radioButtonFatalLevel->TabStop = true;
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
			this->radioButtonErrorLevel->TabStop = true;
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
			this->radioButtonWarningLevel->TabStop = true;
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
			this->radioButtonInfoLevel->TabStop = true;
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
			this->radioButtonDebugLevel->TabStop = true;
			this->radioButtonDebugLevel->Text = L"Debug";
			this->radioButtonDebugLevel->UseVisualStyleBackColor = true;
			// 
			// groupBoxTarget
			// 
			this->groupBoxTarget->Controls->Add(this->checkBoxNetwork);
			this->groupBoxTarget->Controls->Add(this->checkBoxFile);
			this->groupBoxTarget->Location = System::Drawing::Point(380, 74);
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
			this->checkBoxFile->Location = System::Drawing::Point(6, 19);
			this->checkBoxFile->Name = L"checkBoxFile";
			this->checkBoxFile->Size = System::Drawing::Size(42, 17);
			this->checkBoxFile->TabIndex = 0;
			this->checkBoxFile->Text = L"File";
			this->checkBoxFile->UseVisualStyleBackColor = true;
			// 
			// textBoxFileLog
			// 
			this->textBoxFileLog->Enabled = false;
			this->textBoxFileLog->Location = System::Drawing::Point(6, 6);
			this->textBoxFileLog->Multiline = true;
			this->textBoxFileLog->Name = L"textBoxFileLog";
			this->textBoxFileLog->Size = System::Drawing::Size(545, 190);
			this->textBoxFileLog->TabIndex = 3;
			// 
			// groupBoxViewer
			// 
			this->groupBoxViewer->Controls->Add(this->tabControlViewer);
			this->groupBoxViewer->Location = System::Drawing::Point(12, 191);
			this->groupBoxViewer->Name = L"groupBoxViewer";
			this->groupBoxViewer->Size = System::Drawing::Size(578, 253);
			this->groupBoxViewer->TabIndex = 4;
			this->groupBoxViewer->TabStop = false;
			this->groupBoxViewer->Text = L"Viewer";
			// 
			// tabControlViewer
			// 
			this->tabControlViewer->Controls->Add(this->tabPageFileViewer);
			this->tabControlViewer->Controls->Add(this->tabPageNetworkViewer);
			this->tabControlViewer->Location = System::Drawing::Point(7, 19);
			this->tabControlViewer->Name = L"tabControlViewer";
			this->tabControlViewer->SelectedIndex = 0;
			this->tabControlViewer->Size = System::Drawing::Size(565, 228);
			this->tabControlViewer->TabIndex = 0;
			// 
			// tabPageFileViewer
			// 
			this->tabPageFileViewer->Controls->Add(this->textBoxFileLog);
			this->tabPageFileViewer->Location = System::Drawing::Point(4, 22);
			this->tabPageFileViewer->Name = L"tabPageFileViewer";
			this->tabPageFileViewer->Padding = System::Windows::Forms::Padding(3);
			this->tabPageFileViewer->Size = System::Drawing::Size(557, 202);
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
			this->tabPageNetworkViewer->Size = System::Drawing::Size(557, 202);
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
			this->textBoxNetworkViewer->Size = System::Drawing::Size(547, 195);
			this->textBoxNetworkViewer->TabIndex = 0;
			// 
			// buttonGenerateLog
			// 
			this->buttonGenerateLog->Location = System::Drawing::Point(158, 157);
			this->buttonGenerateLog->Name = L"buttonGenerateLog";
			this->buttonGenerateLog->Size = System::Drawing::Size(432, 28);
			this->buttonGenerateLog->TabIndex = 5;
			this->buttonGenerateLog->Text = L"Generate Log Message";
			this->buttonGenerateLog->UseVisualStyleBackColor = true;
			this->buttonGenerateLog->Click += gcnew System::EventHandler(this, &MainWindow::buttonGenerateLog_Click);
			// 
			// groupBoxLogMessage
			// 
			this->groupBoxLogMessage->Controls->Add(this->textBoxLogMessage);
			this->groupBoxLogMessage->Location = System::Drawing::Point(150, 19);
			this->groupBoxLogMessage->Name = L"groupBoxLogMessage";
			this->groupBoxLogMessage->Size = System::Drawing::Size(341, 48);
			this->groupBoxLogMessage->TabIndex = 6;
			this->groupBoxLogMessage->TabStop = false;
			this->groupBoxLogMessage->Text = L"Log message";
			// 
			// textBoxLogMessage
			// 
			this->textBoxLogMessage->Location = System::Drawing::Point(7, 20);
			this->textBoxLogMessage->Name = L"textBoxLogMessage";
			this->textBoxLogMessage->Size = System::Drawing::Size(328, 20);
			this->textBoxLogMessage->TabIndex = 0;
			// 
			// groupBoxErrorId
			// 
			this->groupBoxErrorId->Controls->Add(this->textBox1);
			this->groupBoxErrorId->Location = System::Drawing::Point(497, 19);
			this->groupBoxErrorId->Name = L"groupBoxErrorId";
			this->groupBoxErrorId->Size = System::Drawing::Size(93, 48);
			this->groupBoxErrorId->TabIndex = 7;
			this->groupBoxErrorId->TabStop = false;
			this->groupBoxErrorId->Text = L"Error id";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(81, 20);
			this->textBox1->TabIndex = 0;
			// 
			// groupBoxArea
			// 
			this->groupBoxArea->Controls->Add(this->radioButtonAreaAdministration);
			this->groupBoxArea->Controls->Add(this->radioButtonAreaMain);
			this->groupBoxArea->Location = System::Drawing::Point(151, 74);
			this->groupBoxArea->Name = L"groupBoxArea";
			this->groupBoxArea->Size = System::Drawing::Size(223, 76);
			this->groupBoxArea->TabIndex = 8;
			this->groupBoxArea->TabStop = false;
			this->groupBoxArea->Text = L"Area";
			// 
			// radioButtonAreaMain
			// 
			this->radioButtonAreaMain->AutoSize = true;
			this->radioButtonAreaMain->Location = System::Drawing::Point(7, 20);
			this->radioButtonAreaMain->Name = L"radioButtonAreaMain";
			this->radioButtonAreaMain->Size = System::Drawing::Size(48, 17);
			this->radioButtonAreaMain->TabIndex = 0;
			this->radioButtonAreaMain->TabStop = true;
			this->radioButtonAreaMain->Text = L"Main";
			this->radioButtonAreaMain->UseVisualStyleBackColor = true;
			// 
			// radioButtonAreaAdministration
			// 
			this->radioButtonAreaAdministration->AutoSize = true;
			this->radioButtonAreaAdministration->Location = System::Drawing::Point(7, 43);
			this->radioButtonAreaAdministration->Name = L"radioButtonAreaAdministration";
			this->radioButtonAreaAdministration->Size = System::Drawing::Size(90, 17);
			this->radioButtonAreaAdministration->TabIndex = 1;
			this->radioButtonAreaAdministration->TabStop = true;
			this->radioButtonAreaAdministration->Text = L"Administration";
			this->radioButtonAreaAdministration->UseVisualStyleBackColor = true;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 454);
			this->Controls->Add(this->groupBoxArea);
			this->Controls->Add(this->groupBoxErrorId);
			this->Controls->Add(this->groupBoxLogMessage);
			this->Controls->Add(this->groupBoxTarget);
			this->Controls->Add(this->buttonGenerateLog);
			this->Controls->Add(this->groupBoxViewer);
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
			this->groupBoxErrorId->ResumeLayout(false);
			this->groupBoxErrorId->PerformLayout();
			this->groupBoxArea->ResumeLayout(false);
			this->groupBoxArea->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonGenerateLog_Click(System::Object^ sender, System::EventArgs^ e) {
		auto message = ;
		auto exceptionId = 100;
		auto area = "Main";

		Logger::SetLevel(Logger::TraceLevel);

		Logger::Trace("Message: %s. Error id: %d. Area: %s.", message, exceptionId, area);

		LOG_INFO(message, area);

	}
};
}

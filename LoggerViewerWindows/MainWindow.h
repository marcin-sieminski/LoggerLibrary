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
			this->radioButtonDebugLevel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonInfoLevel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonWarningLevel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonErrorLevel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFatalLevel = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxTarget = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxFile = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxNetwork = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxFileLog = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxViewer = (gcnew System::Windows::Forms::GroupBox());
			this->tabControlViewer = (gcnew System::Windows::Forms::TabControl());
			this->tabPageFileViewer = (gcnew System::Windows::Forms::TabPage());
			this->tabPageNetworkViewer = (gcnew System::Windows::Forms::TabPage());
			this->textBoxNetworkViewer = (gcnew System::Windows::Forms::TextBox());
			this->buttonGenerateLog = (gcnew System::Windows::Forms::Button());
			this->groupBoxLoggingLevel->SuspendLayout();
			this->groupBoxTarget->SuspendLayout();
			this->groupBoxViewer->SuspendLayout();
			this->tabControlViewer->SuspendLayout();
			this->tabPageFileViewer->SuspendLayout();
			this->tabPageNetworkViewer->SuspendLayout();
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
			this->groupBoxLoggingLevel->Location = System::Drawing::Point(13, 13);
			this->groupBoxLoggingLevel->Name = L"groupBoxLoggingLevel";
			this->groupBoxLoggingLevel->Size = System::Drawing::Size(133, 174);
			this->groupBoxLoggingLevel->TabIndex = 1;
			this->groupBoxLoggingLevel->TabStop = false;
			this->groupBoxLoggingLevel->Text = L"Logging level";
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
			// groupBoxTarget
			// 
			this->groupBoxTarget->Controls->Add(this->checkBoxNetwork);
			this->groupBoxTarget->Controls->Add(this->checkBoxFile);
			this->groupBoxTarget->Location = System::Drawing::Point(13, 194);
			this->groupBoxTarget->Name = L"groupBoxTarget";
			this->groupBoxTarget->Size = System::Drawing::Size(133, 73);
			this->groupBoxTarget->TabIndex = 2;
			this->groupBoxTarget->TabStop = false;
			this->groupBoxTarget->Text = L"Target";
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
			// textBoxFileLog
			// 
			this->textBoxFileLog->Enabled = false;
			this->textBoxFileLog->Location = System::Drawing::Point(6, 6);
			this->textBoxFileLog->Multiline = true;
			this->textBoxFileLog->Name = L"textBoxFileLog";
			this->textBoxFileLog->Size = System::Drawing::Size(378, 190);
			this->textBoxFileLog->TabIndex = 3;
			// 
			// groupBoxViewer
			// 
			this->groupBoxViewer->Controls->Add(this->tabControlViewer);
			this->groupBoxViewer->Location = System::Drawing::Point(156, 13);
			this->groupBoxViewer->Name = L"groupBoxViewer";
			this->groupBoxViewer->Size = System::Drawing::Size(411, 253);
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
			this->tabControlViewer->Size = System::Drawing::Size(398, 228);
			this->tabControlViewer->TabIndex = 0;
			// 
			// tabPageFileViewer
			// 
			this->tabPageFileViewer->Controls->Add(this->textBoxFileLog);
			this->tabPageFileViewer->Location = System::Drawing::Point(4, 22);
			this->tabPageFileViewer->Name = L"tabPageFileViewer";
			this->tabPageFileViewer->Padding = System::Windows::Forms::Padding(3);
			this->tabPageFileViewer->Size = System::Drawing::Size(390, 202);
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
			this->tabPageNetworkViewer->Size = System::Drawing::Size(390, 202);
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
			this->textBoxNetworkViewer->Size = System::Drawing::Size(377, 195);
			this->textBoxNetworkViewer->TabIndex = 0;
			// 
			// buttonGenerateLog
			// 
			this->buttonGenerateLog->Location = System::Drawing::Point(13, 274);
			this->buttonGenerateLog->Name = L"buttonGenerateLog";
			this->buttonGenerateLog->Size = System::Drawing::Size(554, 44);
			this->buttonGenerateLog->TabIndex = 5;
			this->buttonGenerateLog->Text = L"Generate Log Message";
			this->buttonGenerateLog->UseVisualStyleBackColor = true;
			this->buttonGenerateLog->Click += gcnew System::EventHandler(this, &MainWindow::buttonGenerateLog_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 331);
			this->Controls->Add(this->buttonGenerateLog);
			this->Controls->Add(this->groupBoxViewer);
			this->Controls->Add(this->groupBoxTarget);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonGenerateLog_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

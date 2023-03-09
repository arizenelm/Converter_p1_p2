#pragma once
#include "Conver_10_p.h"
#include "Conver_p_10.h"
#include "Editor.h"
#include "History.h"
#include "Control.h"
#include "HistoryForm.h"
#include "ManualForm.h"
#include <msclr\marshal_cppstd.h>

namespace PO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Control_* ctrl;
		Generic::List<System::Windows::Forms::Button^>^ buttons;


		MyForm(void)
		{
			InitializeComponent();
			ctrl = new Control_();
			buttons = gcnew Generic::List<System::Windows::Forms::Button^>();

			buttons->Add(button1);
			buttons->Add(button2);
			buttons->Add(button3);
			buttons->Add(button4);
			buttons->Add(button5);
			buttons->Add(button6);
			buttons->Add(button7);
			buttons->Add(button8);
			buttons->Add(button9);
			buttons->Add(button10);
			buttons->Add(button11);
			buttons->Add(button12);
			buttons->Add(button13);
			buttons->Add(button14);
			buttons->Add(button15);
			buttons->Add(button16);

			MakeInactive(10);
		}			 

	private: void MakeInactive(int p)
		{
			for (int i = 0; i < buttons->Count; i++)
			{
				if (i < p)
					buttons[i]->Enabled = true;
				else
					buttons[i]->Enabled = false;
			}
		}

		// íà÷àëüíûå îñíîâàíèÿ ñèñòåìû ñ÷èñëåíèÿ
		Byte p1 = 2, p2 = 10;

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox ^textBox_StartNumber;



	private: System::Windows::Forms::Label ^label1;
	private: System::Windows::Forms::DomainUpDown ^Notation1;



	private: System::Windows::Forms::MenuStrip ^menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem ^èñòîğèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem ^ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem ^ñïğàâêàToolStripMenuItem1;
	private: System::Windows::Forms::TextBox ^textBox_FinishNumber;


	private: System::Windows::Forms::Label ^label2;
	private: System::Windows::Forms::DomainUpDown ^Notation2;

	private: System::Windows::Forms::Button ^button1;
	private: System::Windows::Forms::Button ^button2;
	private: System::Windows::Forms::Button ^button3;
	private: System::Windows::Forms::Button ^button4;
	private: System::Windows::Forms::Button ^button5;
	private: System::Windows::Forms::Button ^button6;
	private: System::Windows::Forms::Button ^button7;
	private: System::Windows::Forms::Button ^button8;
	private: System::Windows::Forms::Button ^button9;
	private: System::Windows::Forms::Button ^button10;
	private: System::Windows::Forms::Button ^button11;
	private: System::Windows::Forms::Button ^button12;
	private: System::Windows::Forms::Button ^button13;
	private: System::Windows::Forms::Button ^button14;
	private: System::Windows::Forms::Button ^button15;
	private: System::Windows::Forms::Button ^button16;
	private: System::Windows::Forms::Button ^button17;
	private: System::Windows::Forms::Button ^button18;
	private: System::Windows::Forms::Button ^button19;
	private: System::Windows::Forms::Button ^DoConvertion;


	private: System::Windows::Forms::ToolStripMenuItem ^ïîñìîòğåòüÈñòîğèşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem ^î÷èñòèòüÈñòîğèşToolStripMenuItem;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_StartNumber = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Notation1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->èñòîğèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñìîòğåòüÈñòîğèşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüÈñòîğèşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox_FinishNumber = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Notation2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->DoConvertion = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox_StartNumber
			// 
			this->textBox_StartNumber->CausesValidation = false;
			this->textBox_StartNumber->Location = System::Drawing::Point(34, 43);
			this->textBox_StartNumber->Margin = System::Windows::Forms::Padding(2);
			this->textBox_StartNumber->Name = L"textBox_StartNumber";
			this->textBox_StartNumber->ReadOnly = true;
			this->textBox_StartNumber->Size = System::Drawing::Size(243, 20);
			this->textBox_StartNumber->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 76);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Îñíîâàíèå ñ. ñ÷. èñõîäíîãî ÷èñëà";
			// 
			// Notation1
			// 
			this->Notation1->Items->Add(L"16");
			this->Notation1->Items->Add(L"15");
			this->Notation1->Items->Add(L"14");
			this->Notation1->Items->Add(L"13");
			this->Notation1->Items->Add(L"12");
			this->Notation1->Items->Add(L"11");
			this->Notation1->Items->Add(L"10");
			this->Notation1->Items->Add(L"9");
			this->Notation1->Items->Add(L"8");
			this->Notation1->Items->Add(L"7");
			this->Notation1->Items->Add(L"6");
			this->Notation1->Items->Add(L"5");
			this->Notation1->Items->Add(L"4");
			this->Notation1->Items->Add(L"3");
			this->Notation1->Items->Add(L"2");
			this->Notation1->Location = System::Drawing::Point(232, 75);
			this->Notation1->Margin = System::Windows::Forms::Padding(2);
			this->Notation1->Name = L"Notation1";
			this->Notation1->Size = System::Drawing::Size(44, 20);
			this->Notation1->TabIndex = 6;
			this->Notation1->Tag = L"1";
			this->Notation1->Text = L"10";
			this->Notation1->SelectedItemChanged += gcnew System::EventHandler(this, &MyForm::Notation1_SelectedItemChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->èñòîğèÿToolStripMenuItem,
					this->ñïğàâêàToolStripMenuItem, this->ñïğàâêàToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(317, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// èñòîğèÿToolStripMenuItem
			// 
			this->èñòîğèÿToolStripMenuItem->Name = L"èñòîğèÿToolStripMenuItem";
			this->èñòîğèÿToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->èñòîğèÿToolStripMenuItem->Text = L"Âûõîä";
			this->èñòîğèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::èñòîğèÿToolStripMenuItem_Click);
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïîñìîòğåòüÈñòîğèşToolStripMenuItem,
					this->î÷èñòèòüÈñòîğèşToolStripMenuItem
			});
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->ñïğàâêàToolStripMenuItem->Text = L"Èñòîğèÿ";
			// 
			// ïîñìîòğåòüÈñòîğèşToolStripMenuItem
			// 
			this->ïîñìîòğåòüÈñòîğèşToolStripMenuItem->Name = L"ïîñìîòğåòüÈñòîğèşToolStripMenuItem";
			this->ïîñìîòğåòüÈñòîğèşToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->ïîñìîòğåòüÈñòîğèşToolStripMenuItem->Text = L"Ïîñìîòğåòü èñòîğèş";
			this->ïîñìîòğåòüÈñòîğèşToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîñìîòğåòüÈñòîğèşToolStripMenuItem_Click);
			// 
			// î÷èñòèòüÈñòîğèşToolStripMenuItem
			// 
			this->î÷èñòèòüÈñòîğèşToolStripMenuItem->Name = L"î÷èñòèòüÈñòîğèşToolStripMenuItem";
			this->î÷èñòèòüÈñòîğèşToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->î÷èñòèòüÈñòîğèşToolStripMenuItem->Text = L"Î÷èñòèòü èñòîğèş";
			this->î÷èñòèòüÈñòîğèşToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòüÈñòîğèşToolStripMenuItem_Click);
			// 
			// ñïğàâêàToolStripMenuItem1
			// 
			this->ñïğàâêàToolStripMenuItem1->Name = L"ñïğàâêàToolStripMenuItem1";
			this->ñïğàâêàToolStripMenuItem1->Size = System::Drawing::Size(65, 20);
			this->ñïğàâêàToolStripMenuItem1->Text = L"Ñïğàâêà";
			this->ñïğàâêàToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñïğàâêàToolStripMenuItem1_Click);
			// 
			// textBox_FinishNumber
			// 
			this->textBox_FinishNumber->Location = System::Drawing::Point(34, 167);
			this->textBox_FinishNumber->Margin = System::Windows::Forms::Padding(2);
			this->textBox_FinishNumber->Name = L"textBox_FinishNumber";
			this->textBox_FinishNumber->ReadOnly = true;
			this->textBox_FinishNumber->Size = System::Drawing::Size(243, 20);
			this->textBox_FinishNumber->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 201);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Îñíîâàíèå ñ. ñ÷. ğåçóëüòàòà";
			// 
			// Notation2
			// 
			this->Notation2->Items->Add(L"16");
			this->Notation2->Items->Add(L"15");
			this->Notation2->Items->Add(L"14");
			this->Notation2->Items->Add(L"13");
			this->Notation2->Items->Add(L"12");
			this->Notation2->Items->Add(L"11");
			this->Notation2->Items->Add(L"10");
			this->Notation2->Items->Add(L"9");
			this->Notation2->Items->Add(L"8");
			this->Notation2->Items->Add(L"7");
			this->Notation2->Items->Add(L"6");
			this->Notation2->Items->Add(L"5");
			this->Notation2->Items->Add(L"4");
			this->Notation2->Items->Add(L"3");
			this->Notation2->Items->Add(L"2");
			this->Notation2->Location = System::Drawing::Point(232, 199);
			this->Notation2->Margin = System::Windows::Forms::Padding(2);
			this->Notation2->Name = L"Notation2";
			this->Notation2->Size = System::Drawing::Size(44, 20);
			this->Notation2->TabIndex = 6;
			this->Notation2->Text = L"16";
			this->Notation2->SelectedItemChanged += gcnew System::EventHandler(this, &MyForm::Notation2_SelectedItemChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(34, 284);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 8;
			this->button1->Text = L"0";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(95, 284);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 19);
			this->button2->TabIndex = 8;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(157, 284);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 19);
			this->button3->TabIndex = 8;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(218, 284);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 19);
			this->button4->TabIndex = 8;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(34, 308);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 19);
			this->button5->TabIndex = 8;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(95, 308);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(56, 19);
			this->button6->TabIndex = 8;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(158, 307);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(56, 19);
			this->button7->TabIndex = 8;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(218, 308);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(56, 19);
			this->button8->TabIndex = 8;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(34, 332);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(56, 19);
			this->button9->TabIndex = 8;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(95, 332);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(56, 19);
			this->button10->TabIndex = 8;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(157, 332);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(56, 19);
			this->button11->TabIndex = 8;
			this->button11->Text = L"A";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(218, 332);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(56, 19);
			this->button12->TabIndex = 8;
			this->button12->Text = L"B";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(34, 355);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(56, 19);
			this->button13->TabIndex = 8;
			this->button13->Text = L"C";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(95, 355);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(56, 19);
			this->button14->TabIndex = 8;
			this->button14->Text = L"D";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(157, 355);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(56, 19);
			this->button15->TabIndex = 8;
			this->button15->Text = L"E";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(218, 355);
			this->button16->Margin = System::Windows::Forms::Padding(2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(56, 19);
			this->button16->TabIndex = 8;
			this->button16->Text = L"F";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(34, 379);
			this->button17->Margin = System::Windows::Forms::Padding(2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(56, 19);
			this->button17->TabIndex = 8;
			this->button17->Text = L".";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(95, 379);
			this->button18->Margin = System::Windows::Forms::Padding(2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(56, 19);
			this->button18->TabIndex = 8;
			this->button18->Text = L"BS";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(157, 379);
			this->button19->Margin = System::Windows::Forms::Padding(2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(56, 19);
			this->button19->TabIndex = 8;
			this->button19->Text = L"CL";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// DoConvertion
			// 
			this->DoConvertion->Location = System::Drawing::Point(218, 379);
			this->DoConvertion->Margin = System::Windows::Forms::Padding(2);
			this->DoConvertion->Name = L"DoConvertion";
			this->DoConvertion->Size = System::Drawing::Size(56, 19);
			this->DoConvertion->TabIndex = 8;
			this->DoConvertion->Text = L"Evecut";
			this->DoConvertion->UseVisualStyleBackColor = true;
			this->DoConvertion->Click += gcnew System::EventHandler(this, &MyForm::DoConvertion_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(317, 444);
			this->Controls->Add(this->DoConvertion);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Notation2);
			this->Controls->Add(this->Notation1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_FinishNumber);
			this->Controls->Add(this->textBox_StartNumber);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Êîíâåğòåğ_p1_p2";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	void DoCommand(int j)
	{
		if (j == 25)
		{
			Application::Exit();
			return;
		}
		if (j == 20)
		{
			int p = std::atoi(msclr::interop::marshal_as<string>(Notation1->Text).c_str());
			MakeInactive(p);
			ctrl->pin = p;
			return;
		}
		if (j == 21)
		{
			int p = std::atoi(msclr::interop::marshal_as<string>(Notation2->Text).c_str());
			ctrl->pout = p;
			return;
		}

		if (j == 24)
		{
			ManualForm^ mf = gcnew ManualForm();
			mf->Show();
			return;
		}

		String^ tmp = msclr::interop::marshal_as<String^>(ctrl->DoCommand(j));
		if (j == 22)
		{
			HistoryForm^ hf = gcnew HistoryForm();
			hf->Show();
			hf->setText(tmp);
			return;
		}


		if (j == 19)
			textBox_FinishNumber->Text = tmp;
		else
			textBox_StartNumber->Text = tmp;
	}

	// ÇÀÏÓÑÊ
	private: System::Void DoConvertion_Click(System::Object ^sender, System::EventArgs ^e) {
		DoCommand(19);
	}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(0);
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(1);
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(2);
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(3);
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(4);
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(5);
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(6);
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(7);
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(8);
}

private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(9);
}

private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(10);
}

private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(11);
}

private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(12);
}

private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(13);
}

private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(14);
}

private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(15);
}

private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(16);
}

private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(17);
}

private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(18);
}

private: System::Void Notation1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(20);
}
private: System::Void Notation2_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(21);
}
private: System::Void ïîñìîòğåòüÈñòîğèşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(22);
}
private: System::Void î÷èñòèòüÈñòîğèşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(23);
}
private: System::Void ñïğàâêàToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(24);
}
private: System::Void èñòîğèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DoCommand(25);
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			ndobj = gcnew System::Collections::Generic::List<System::String^>;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Collections::Generic::List<System::String^>^ ndobj;
	private: System::Collections::Generic::List<System::String^>^ mlist;
	//Kintamieji
	private: System::String^ failo_vardas = "";


	protected:









	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;



	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBoxVardas;
	private: System::Windows::Forms::TextBox^ textBoxPavarde;
	private: System::Windows::Forms::Label^ Vardas;
	private: System::Windows::Forms::Label^ Pavarde;
	private: System::Windows::Forms::TextBox^ textBoxEgzaminas;
	private: System::Windows::Forms::Label^ Egzaminas;
	private: System::Windows::Forms::Button^ PridetiButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ failasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ atidarytiFailąToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pridėtiStudentąToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ atvaizduotiStudentusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ išeitiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBoxVardas = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPavarde = (gcnew System::Windows::Forms::TextBox());
			this->Vardas = (gcnew System::Windows::Forms::Label());
			this->Pavarde = (gcnew System::Windows::Forms::Label());
			this->textBoxEgzaminas = (gcnew System::Windows::Forms::TextBox());
			this->Egzaminas = (gcnew System::Windows::Forms::Label());
			this->PridetiButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->failasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atidarytiFailąToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pridėtiStudentąToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atvaizduotiStudentusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->išeitiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(477, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Pasirinkti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(450, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pasirinkite tekstinį failą kur bus saugomi duomenys";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(584, 401);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(638, 508);
			this->listBox1->TabIndex = 3;
			this->listBox1->Visible = false;
			// 
			// textBoxVardas
			// 
			this->textBoxVardas->Location = System::Drawing::Point(44, 218);
			this->textBoxVardas->Name = L"textBoxVardas";
			this->textBoxVardas->Size = System::Drawing::Size(118, 29);
			this->textBoxVardas->TabIndex = 0;
			this->textBoxVardas->Visible = false;
			// 
			// textBoxPavarde
			// 
			this->textBoxPavarde->Location = System::Drawing::Point(204, 218);
			this->textBoxPavarde->Name = L"textBoxPavarde";
			this->textBoxPavarde->Size = System::Drawing::Size(156, 29);
			this->textBoxPavarde->TabIndex = 1;
			this->textBoxPavarde->Visible = false;
			// 
			// Vardas
			// 
			this->Vardas->AutoSize = true;
			this->Vardas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vardas->Location = System::Drawing::Point(67, 181);
			this->Vardas->Name = L"Vardas";
			this->Vardas->Size = System::Drawing::Size(81, 25);
			this->Vardas->TabIndex = 2;
			this->Vardas->Text = L"Vardas";
			this->Vardas->Visible = false;
			// 
			// Pavarde
			// 
			this->Pavarde->AutoSize = true;
			this->Pavarde->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pavarde->Location = System::Drawing::Point(240, 181);
			this->Pavarde->Name = L"Pavarde";
			this->Pavarde->Size = System::Drawing::Size(92, 25);
			this->Pavarde->TabIndex = 3;
			this->Pavarde->Text = L"Pavardė";
			this->Pavarde->Visible = false;
			// 
			// textBoxEgzaminas
			// 
			this->textBoxEgzaminas->Location = System::Drawing::Point(466, 218);
			this->textBoxEgzaminas->Name = L"textBoxEgzaminas";
			this->textBoxEgzaminas->Size = System::Drawing::Size(52, 29);
			this->textBoxEgzaminas->TabIndex = 4;
			this->textBoxEgzaminas->Visible = false;
			// 
			// Egzaminas
			// 
			this->Egzaminas->AutoSize = true;
			this->Egzaminas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Egzaminas->Location = System::Drawing::Point(388, 181);
			this->Egzaminas->Name = L"Egzaminas";
			this->Egzaminas->Size = System::Drawing::Size(207, 25);
			this->Egzaminas->TabIndex = 6;
			this->Egzaminas->Text = L"Egzamino rezultatas";
			this->Egzaminas->Visible = false;
			// 
			// PridetiButton
			// 
			this->PridetiButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PridetiButton->Location = System::Drawing::Point(894, 181);
			this->PridetiButton->Name = L"PridetiButton";
			this->PridetiButton->Size = System::Drawing::Size(303, 184);
			this->PridetiButton->TabIndex = 7;
			this->PridetiButton->Text = L"Pridėti studentą";
			this->PridetiButton->UseVisualStyleBackColor = true;
			this->PridetiButton->Visible = false;
			this->PridetiButton->Click += gcnew System::EventHandler(this, &Form1::PridetiButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 278);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 25);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Kiek namų darbų įvesite:";
			this->label2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(300, 268);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(60, 43);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(401, 269);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 43);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Įvesti ND";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(646, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(212, 25);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Mediana ar vidurkis\?";
			this->label3->Visible = false;
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"Vidurkis");
			this->domainUpDown1->Items->Add(L"Mediana");
			this->domainUpDown1->Location = System::Drawing::Point(651, 218);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(190, 29);
			this->domainUpDown1->TabIndex = 12;
			this->domainUpDown1->Text = L"Pasirinkite...";
			this->domainUpDown1->Visible = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(72, 590);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(434, 129);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Atvaizduoti studentus";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->failasToolStripMenuItem,
					this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1248, 38);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// failasToolStripMenuItem
			// 
			this->failasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->atidarytiFailąToolStripMenuItem,
					this->pridėtiStudentąToolStripMenuItem, this->atvaizduotiStudentusToolStripMenuItem, this->išeitiToolStripMenuItem
			});
			this->failasToolStripMenuItem->Name = L"failasToolStripMenuItem";
			this->failasToolStripMenuItem->Size = System::Drawing::Size(81, 34);
			this->failasToolStripMenuItem->Text = L"Failas";
			// 
			// atidarytiFailąToolStripMenuItem
			// 
			this->atidarytiFailąToolStripMenuItem->Name = L"atidarytiFailąToolStripMenuItem";
			this->atidarytiFailąToolStripMenuItem->Size = System::Drawing::Size(333, 40);
			this->atidarytiFailąToolStripMenuItem->Text = L"Pasirinkti failą";
			this->atidarytiFailąToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pridėtiStudentąToolStripMenuItem
			// 
			this->pridėtiStudentąToolStripMenuItem->Name = L"pridėtiStudentąToolStripMenuItem";
			this->pridėtiStudentąToolStripMenuItem->Size = System::Drawing::Size(333, 40);
			this->pridėtiStudentąToolStripMenuItem->Text = L"Pridėti studentą";
			this->pridėtiStudentąToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::PridetiButton_Click);
			// 
			// atvaizduotiStudentusToolStripMenuItem
			// 
			this->atvaizduotiStudentusToolStripMenuItem->Name = L"atvaizduotiStudentusToolStripMenuItem";
			this->atvaizduotiStudentusToolStripMenuItem->Size = System::Drawing::Size(333, 40);
			this->atvaizduotiStudentusToolStripMenuItem->Text = L"Atvaizduoti studentus";
			this->atvaizduotiStudentusToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// išeitiToolStripMenuItem
			// 
			this->išeitiToolStripMenuItem->Name = L"išeitiToolStripMenuItem";
			this->išeitiToolStripMenuItem->Size = System::Drawing::Size(333, 40);
			this->išeitiToolStripMenuItem->Text = L"Išeiti";
			this->išeitiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::išeitiToolStripMenuItem_Click);
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(73, 34);
			this->apieToolStripMenuItem->Text = L"Apie";
			this->apieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::apieToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1248, 942);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PridetiButton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Egzaminas);
			this->Controls->Add(this->textBoxEgzaminas);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxVardas);
			this->Controls->Add(this->textBoxPavarde);
			this->Controls->Add(this->Pavarde);
			this->Controls->Add(this->Vardas);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PridetiButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ vardas = textBoxVardas->Text;
		System::String^ pavarde = textBoxPavarde->Text;
		System::String^ budas = domainUpDown1->Text;
		int egz = Convert::ToInt32(textBoxEgzaminas->Text);
		int check = 0, galutinis = 0, n, m, temp;

		if (failo_vardas != "")
		{
			System::IO::StreamWriter^ sw = System::IO::File::AppendText(failo_vardas);
			sw->Write(vardas + " ," + pavarde + " ");
			if (budas == "Mediana") {
				if (Convert::ToInt32(textBox1->Text) % 2 == 1) {
					check = Convert::ToInt32(textBox1->Text) / 2 + 1;
				}
				else {
					check = Convert::ToInt32(textBox1->Text) / 2;
				}
				// Sort
				for (n = 0; n < Convert::ToInt32(textBox1->Text); n++) {
					for (m = n + 1; m < Convert::ToInt32(textBox1->Text); m++)
					{
						if (Convert::ToInt32(Controls["nd" + (m).ToString()]->Text) < Convert::ToInt32(Controls["nd" + (n).ToString()]->Text)) {
							temp = Convert::ToInt32(Controls["nd" + (n).ToString()]->Text);
							Controls["nd" + (n).ToString()]->Text = Controls["nd" + (m).ToString()]->Text;
							Controls["nd" + (m).ToString()]->Text = temp.ToString();
						}
					}
				}
				galutinis = Convert::ToInt32(Controls["nd" + (check).ToString()]->Text) * 0.4;
			}
			else {
				temp = 0;
				for (int i = 0; i < Convert::ToInt32(textBox1->Text); i++) {
					temp += Convert::ToInt32(Controls["nd" + (check).ToString()]->Text);
				}
				temp = temp / Convert::ToInt32(textBox1->Text);
				galutinis = temp * 0.4;
			}
			galutinis = galutinis + (egz * 0.6);
			sw->Write("Galutinis: ");
			sw->Write(galutinis.ToString() + "\r\n");
			sw->Close();
			listBox1->Items->Clear();
			openFile(failo_vardas);
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->InitialDirectory = "..\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt";
	openFileDialog1->InitialDirectory = "..\\";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) openFile(openFileDialog1->FileName);
	if (failo_vardas != "") {
		PridetiButton->Visible = "True";
		button2->Visible = "True";
		Egzaminas->Visible = "True";
		textBoxEgzaminas->Visible = "True";
		textBox1->Visible = "True";
		listBox1->Visible = "True";
		label2->Visible = "True";
		textBoxVardas->Visible = "True";
		textBoxPavarde->Visible = "True";
		Vardas->Visible = "True";
		Pavarde->Visible = "True";
		label3->Visible = "True";
		domainUpDown1->Visible = "True";
		button3->Visible = "True";
	}
}
public: void openFile(System::String^ str) {
		   System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(str);
		   failo_vardas = openFileDialog1->FileName;
		   sr->Close();
	   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Laukelis turi būti užpildytas!", "Klaida", MessageBoxButtons::OK);
		return;
	}
	int nd = Convert::ToInt32(textBox1->Text);
	int x = 30;
	int y = 178;
	if (nd < 1 || nd > 9) {
		MessageBox::Show("Mažiausiai 1 | Daugiausiai 6", "Klaida!", MessageBoxButtons::OK);
		return;
	}
	for (int i = 0; i < nd; i++) {
		TextBox^ b = gcnew TextBox;
		b->Location = System::Drawing::Point(x, y);
		b->Show();
		b->Size = Drawing::Size(31, 31);
		this->Controls->Add(b);
		
		b->Name = "nd" + i.ToString();
		b->Text = "ND" + (1 + i).ToString();
		if (i != 0) b->Location = System::Drawing::Point(x += 45, y);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(failo_vardas);
	String^ line;
	listBox1->BeginUpdate();
	while ((line = sr->ReadLine()) != nullptr) listBox1->Items->Add(line);
	listBox1->EndUpdate();
	sr->Close();
}
private: System::Void išeitiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Form1::Close();
}
private: System::Void apieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"Programa skirta studentams įvesti, juos saugoti tekstiniame faile ir atvaizduoti ekrane. \n Prieš saugant į failą, programa automatiškai suskaičiuoja studento galutinį pažymį pagal pateiktus duomenis.",
		"Apie programa", MessageBoxButtons::OK);
}
};
}

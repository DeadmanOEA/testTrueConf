#pragma once

#include <map>
#include <string>
#include <tuple>
#include <msclr\marshal_cppstd.h>



namespace TestProg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ catTB;
	private: System::Windows::Forms::TextBox^ outTB;
	private: System::Windows::Forms::Button^ openBut;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->catTB = (gcnew System::Windows::Forms::TextBox());
			this->outTB = (gcnew System::Windows::Forms::TextBox());
			this->openBut = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(-2, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Входные данные";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(322, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Результат преобразования";
			// 
			// catTB
			// 
			this->catTB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->catTB->Enabled = false;
			this->catTB->Location = System::Drawing::Point(3, 76);
			this->catTB->Multiline = true;
			this->catTB->Name = L"catTB";
			this->catTB->Size = System::Drawing::Size(343, 143);
			this->catTB->TabIndex = 3;
			// 
			// outTB
			// 
			this->outTB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->outTB->Enabled = false;
			this->outTB->Location = System::Drawing::Point(6, 254);
			this->outTB->Multiline = true;
			this->outTB->Name = L"outTB";
			this->outTB->Size = System::Drawing::Size(340, 163);
			this->outTB->TabIndex = 4;
			// 
			// openBut
			// 
			this->openBut->Dock = System::Windows::Forms::DockStyle::Fill;
			this->openBut->Location = System::Drawing::Point(3, 3);
			this->openBut->Name = L"openBut";
			this->openBut->Size = System::Drawing::Size(340, 28);
			this->openBut->TabIndex = 0;
			this->openBut->Text = L"Открыть файл";
			this->openBut->UseVisualStyleBackColor = true;
			this->openBut->Click += gcnew System::EventHandler(this, &MainForm::openBut_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->openBut, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 7);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(346, 34);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(350, 427);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->outTB);
			this->Controls->Add(this->catTB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"Преобразование файла";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*Функция открытия и чтения файла*/
		private: System::Void openBut_Click(System::Object^ sender, System::EventArgs^ e)
		{
			/*Чтение*/
			String^ FileName = "";
			OpenFileDialog^ openFD = gcnew OpenFileDialog;
			openFD->InitialDirectory = "c:\\";
			openFD->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFD->FilterIndex = 2;
			openFD->RestoreDirectory = true;


			if (openFD->ShowDialog() == Windows::Forms::DialogResult::OK) FileName = openFD->FileName;

			try
			{
				StreamReader^ file = File::OpenText(FileName);

				String^ str = "";
				catTB->Text = file->ReadToEnd();
				str = catTB->Text;
				std::map < std::string, std::string > fmap;

				String^ key;
				String^ val;
				String^ val0 = "";

				for (int i = 0; i < str->Length; i++)
				{
					if (str[i] != ' ')
					{
						if (str[i] == '\r')
						{
							String^ fkeyzero;
							if (fmap.size() != 0)
							{
								String^ fkey1 = marshal_as<String^>(fmap.begin()->first);
								String^ fkey2 = key;
								String^ fkeynull;
								fkeyzero = fkey1;
								int yes = 0;

								for (int i = 0; i < fkey2->Length; i++)
								{
									for (int j = 0; j < fkey1->Length; j++)
									{
										if (fkey2[i] == fkey1[j])
										{
											for (int f = 0; f < fkey1->Length; f++)
											{
												if (f != j) fkeynull += fkey1[f];
											}
											fkey1 = fkeynull;
											yes++;
											break;
										}
									}
								}

								if (yes == marshal_as<String^>(fmap.begin()->first)->Length)
								{
									
									fmap.insert(std::pair<std::string, std::string>(marshal_as<std::string>(fkeyzero), marshal_as<std::string>(val)));

								}
								else fmap.insert(std::pair<std::string, std::string>(marshal_as<std::string>(key), marshal_as<std::string>(val)));
							}
							else fmap.insert(std::pair<std::string, std::string>(marshal_as<std::string>(key), marshal_as<std::string>(val)));

							val = val0;
						}
						else if (str[i] != '\n') val += str[i];
						if (i == str->Length) fmap.insert(std::pair<std::string, std::string>(marshal_as<std::string>(key), marshal_as<std::string>(val)));
					}
					else if (str[i] == ' ')
					{
						key = val;
						val = val0;
					}	
				}

				for (auto it = fmap.begin(); it != fmap.end(); ++it)
				{
					outTB->Text += marshal_as<String^>(it->first)  + " " + marshal_as<String^>(it->second) + "\r" + "\n";
				}
			}
			catch (Exception^ e)
			{
				MessageBox::Show(this, "Ошибка при открытии файла", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};
}

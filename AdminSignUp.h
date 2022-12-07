#include "Main.h"
#pragma once
#include "AdminHomePage.h"
#include <msclr\marshal_cppstd.h>
namespace Project10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminSignUp
	/// </summary>
	public ref class AdminSignUp : public System::Windows::Forms::Form
	{
	public:
		AdminSignUp(void)
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
		~AdminSignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ AdminSignUpDropdown;
	private: System::Windows::Forms::TextBox^ AdminSignUpUsername;
	private: System::Windows::Forms::TextBox^ AdminSignUpPassword;
	private: System::Windows::Forms::TextBox^ AdminSignUpName;
	private: System::Windows::Forms::TextBox^ AdminSignUpAddress;
	private: System::Windows::Forms::TextBox^ AdminSignUpPhoneNumber;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminSignUp::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->AdminSignUpDropdown = (gcnew System::Windows::Forms::ComboBox());
			this->AdminSignUpUsername = (gcnew System::Windows::Forms::TextBox());
			this->AdminSignUpPassword = (gcnew System::Windows::Forms::TextBox());
			this->AdminSignUpName = (gcnew System::Windows::Forms::TextBox());
			this->AdminSignUpAddress = (gcnew System::Windows::Forms::TextBox());
			this->AdminSignUpPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(313, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(417, 136);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(253, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username: ";
			this->label1->Click += gcnew System::EventHandler(this, &AdminSignUp::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(253, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password: ";
			this->label2->Click += gcnew System::EventHandler(this, &AdminSignUp::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(253, 357);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"PhoneNumber:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->Location = System::Drawing::Point(253, 315);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 32);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Address";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label5->Location = System::Drawing::Point(253, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 32);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Name:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label6->Location = System::Drawing::Point(253, 398);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(175, 32);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Designation:";
			// 
			// AdminSignUpDropdown
			// 
			this->AdminSignUpDropdown->FormattingEnabled = true;
			this->AdminSignUpDropdown->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"General Staff", L"Inventory Manager",
					L"Floor Manager", L"Workshop Manager", L"Outlet Admin"
			});
			this->AdminSignUpDropdown->Location = System::Drawing::Point(481, 405);
			this->AdminSignUpDropdown->Name = L"AdminSignUpDropdown";
			this->AdminSignUpDropdown->Size = System::Drawing::Size(254, 28);
			this->AdminSignUpDropdown->TabIndex = 7;
			// 
			// AdminSignUpUsername
			// 
			this->AdminSignUpUsername->Location = System::Drawing::Point(481, 188);
			this->AdminSignUpUsername->Name = L"AdminSignUpUsername";
			this->AdminSignUpUsername->Size = System::Drawing::Size(254, 26);
			this->AdminSignUpUsername->TabIndex = 8;
			// 
			// AdminSignUpPassword
			// 
			this->AdminSignUpPassword->Location = System::Drawing::Point(481, 229);
			this->AdminSignUpPassword->Name = L"AdminSignUpPassword";
			this->AdminSignUpPassword->PasswordChar = '*';
			this->AdminSignUpPassword->Size = System::Drawing::Size(254, 26);
			this->AdminSignUpPassword->TabIndex = 9;
			// 
			// AdminSignUpName
			// 
			this->AdminSignUpName->Location = System::Drawing::Point(481, 278);
			this->AdminSignUpName->Name = L"AdminSignUpName";
			this->AdminSignUpName->Size = System::Drawing::Size(254, 26);
			this->AdminSignUpName->TabIndex = 10;
			// 
			// AdminSignUpAddress
			// 
			this->AdminSignUpAddress->Location = System::Drawing::Point(481, 322);
			this->AdminSignUpAddress->Name = L"AdminSignUpAddress";
			this->AdminSignUpAddress->Size = System::Drawing::Size(254, 26);
			this->AdminSignUpAddress->TabIndex = 11;
			// 
			// AdminSignUpPhoneNumber
			// 
			this->AdminSignUpPhoneNumber->Location = System::Drawing::Point(481, 364);
			this->AdminSignUpPhoneNumber->Name = L"AdminSignUpPhoneNumber";
			this->AdminSignUpPhoneNumber->Size = System::Drawing::Size(254, 26);
			this->AdminSignUpPhoneNumber->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->Location = System::Drawing::Point(253, 472);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(505, 65);
			this->button1->TabIndex = 13;
			this->button1->Text = L"SignUp";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminSignUp::button1_Click);
			// 
			// AdminSignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1027, 567);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->AdminSignUpPhoneNumber);
			this->Controls->Add(this->AdminSignUpAddress);
			this->Controls->Add(this->AdminSignUpName);
			this->Controls->Add(this->AdminSignUpPassword);
			this->Controls->Add(this->AdminSignUpUsername);
			this->Controls->Add(this->AdminSignUpDropdown);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AdminSignUp";
			this->Text = L"AdminSignUp";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminHomePage obj;
		Staff s;
		String^ ausername = AdminSignUpUsername->Text;
		String^ apass = AdminSignUpPassword->Text;
		String^ aname = AdminSignUpName->Text;
		String^ aAddress = AdminSignUpAddress->Text;
		String^ aPhone = AdminSignUpPhoneNumber->Text;
		String^ aDesignation = AdminSignUpDropdown->SelectedItem->ToString();

		std::string userName = msclr::interop::marshal_as<std::string>(ausername);
		std::string AdminPassword = msclr::interop::marshal_as<std::string>(apass);
		std::string AdminName = msclr::interop::marshal_as<std::string>(aname);
		std::string AdminAdd = msclr::interop::marshal_as<std::string>(aAddress);
		std::string AdminPh = msclr::interop::marshal_as<std::string>(aPhone);
		std::string AdminDesignation = msclr::interop::marshal_as<std::string>(aDesignation);
		if (s.Signup(AdminName, AdminAdd, AdminPh, AdminDesignation, userName, AdminPassword)) {
			this->Hide();
			MessageBox::Show("Sign Up Successful");
			obj.ShowDialog();
		}
		else {
			MessageBox::Show("SignUp Unsuccessful");
		}
	}
};
}

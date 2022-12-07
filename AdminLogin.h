#pragma once
#include "Main.h"
#include "StaffDashboard.h"
#include <msclr\marshal_cppstd.h>

namespace Project10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminLogin
	/// </summary>
	public ref class AdminLogin : public System::Windows::Forms::Form
	{
	public:
		AdminLogin(void)
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
		~AdminLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ AdminUserName;

	private: System::Windows::Forms::TextBox^ AdminPassword;

	private: System::Windows::Forms::Button^ AdminLoginButton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminLogin::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AdminUserName = (gcnew System::Windows::Forms::TextBox());
			this->AdminPassword = (gcnew System::Windows::Forms::TextBox());
			this->AdminLoginButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(257, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(203, 193);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AdminLogin::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 238);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"UserName\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(66, 306);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// AdminUserName
			// 
			this->AdminUserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminUserName->Location = System::Drawing::Point(237, 245);
			this->AdminUserName->Name = L"AdminUserName";
			this->AdminUserName->Size = System::Drawing::Size(240, 35);
			this->AdminUserName->TabIndex = 3;
			// 
			// AdminPassword
			// 
			this->AdminPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminPassword->Location = System::Drawing::Point(237, 306);
			this->AdminPassword->Name = L"AdminPassword";
			this->AdminPassword->Size = System::Drawing::Size(240, 35);
			this->AdminPassword->TabIndex = 4;
			// 
			// AdminLoginButton
			// 
			this->AdminLoginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminLoginButton->Location = System::Drawing::Point(72, 375);
			this->AdminLoginButton->Name = L"AdminLoginButton";
			this->AdminLoginButton->Size = System::Drawing::Size(582, 52);
			this->AdminLoginButton->TabIndex = 6;
			this->AdminLoginButton->Text = L"Login\r\n";
			this->AdminLoginButton->UseVisualStyleBackColor = true;
			this->AdminLoginButton->Click += gcnew System::EventHandler(this, &AdminLogin::AdminLoginButton_Click);
			// 
			// AdminLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 482);
			this->Controls->Add(this->AdminLoginButton);
			this->Controls->Add(this->AdminPassword);
			this->Controls->Add(this->AdminUserName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AdminLogin";
			this->Text = L"AdminLogin";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AdminLoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		StaffDashboard obj;
		OutletAdmin a;
		String^ aname = AdminUserName->Text;
		String^ apass = AdminPassword->Text;
		std::string adminName = msclr::interop::marshal_as<std::string>(aname);
		std::string adminPassword = msclr::interop::marshal_as<std::string>(apass);
		if (a.SignIn(adminName, adminPassword)) {
			this->Hide();
			MessageBox::Show("Login Successful");
			obj.ShowDialog();
		}
		else {
			MessageBox::Show("Login Unsuccessful");
		}
	}
};
}

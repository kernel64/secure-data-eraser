#pragma once
#include <cstdlib>
#include "src\AboutForm.h"
#include <msclr/marshal_cppstd.h> 


namespace securedataeraser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

			this->Text = ConvertirStdString(APP_NAME + " " + APP_VERSION);
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ exitBtn;
	protected:

	private: System::Windows::Forms::Button^ eraseBtn;


	private: System::Windows::Forms::Button^ addFilesBtn;
	private: System::Windows::Forms::Button^ aboutBtn;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::CheckedListBox^ filesCheckedList;

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->aboutBtn = (gcnew System::Windows::Forms::Button());
			this->eraseBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->addFilesBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->filesCheckedList = (gcnew System::Windows::Forms::CheckedListBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->aboutBtn);
			this->groupBox1->Controls->Add(this->eraseBtn);
			this->groupBox1->Controls->Add(this->exitBtn);
			this->groupBox1->Controls->Add(this->addFilesBtn);
			this->groupBox1->Location = System::Drawing::Point(665, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(151, 342);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Actions";
			// 
			// aboutBtn
			// 
			this->aboutBtn->Location = System::Drawing::Point(14, 140);
			this->aboutBtn->Name = L"aboutBtn";
			this->aboutBtn->Size = System::Drawing::Size(124, 35);
			this->aboutBtn->TabIndex = 1;
			this->aboutBtn->Text = L"About !";
			this->aboutBtn->UseVisualStyleBackColor = true;
			this->aboutBtn->Click += gcnew System::EventHandler(this, &MainForm::aboutBtn_Click);
			// 
			// eraseBtn
			// 
			this->eraseBtn->Location = System::Drawing::Point(14, 86);
			this->eraseBtn->Name = L"eraseBtn";
			this->eraseBtn->Size = System::Drawing::Size(124, 38);
			this->eraseBtn->TabIndex = 3;
			this->eraseBtn->Text = L"Erase";
			this->eraseBtn->UseVisualStyleBackColor = true;
			this->eraseBtn->Click += gcnew System::EventHandler(this, &MainForm::eraseBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->Location = System::Drawing::Point(14, 298);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(124, 38);
			this->exitBtn->TabIndex = 1;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &MainForm::exitBtn_Click);
			// 
			// addFilesBtn
			// 
			this->addFilesBtn->Location = System::Drawing::Point(15, 34);
			this->addFilesBtn->Name = L"addFilesBtn";
			this->addFilesBtn->Size = System::Drawing::Size(124, 37);
			this->addFilesBtn->TabIndex = 2;
			this->addFilesBtn->Text = L"Add Files";
			this->addFilesBtn->UseVisualStyleBackColor = true;
			this->addFilesBtn->Click += gcnew System::EventHandler(this, &MainForm::addFilesBtn_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->filesCheckedList);
			this->groupBox2->Location = System::Drawing::Point(22, 36);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(637, 308);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Files";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(9, 17);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(142, 20);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Check/Uncheck All";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox1_CheckedChanged);
			// 
			// filesCheckedList
			// 
			this->filesCheckedList->FormattingEnabled = true;
			this->filesCheckedList->Location = System::Drawing::Point(6, 38);
			this->filesCheckedList->Name = L"filesCheckedList";
			this->filesCheckedList->Size = System::Drawing::Size(625, 259);
			this->filesCheckedList->TabIndex = 0;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(22, 355);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(631, 23);
			this->progressBar1->TabIndex = 2;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(828, 390);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	
	private: System::Void aboutBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		AboutForm^ infoForm = gcnew AboutForm();

		// Afficher la nouvelle forme en tant que boîte de dialogue modale
		infoForm->ShowDialog();

	}
	private: System::Void addFilesBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Créer une boîte de dialogue pour la sélection des fichiers
		
		this->openFileDialog1->Multiselect = true; // Permettre la sélection de plusieurs fichiers

		// Afficher la boîte de dialogue et vérifier si l'utilisateur a appuyé sur OK
		if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			for each (String ^ filePath in this->openFileDialog1->FileNames) {
				this->filesCheckedList->Items->Add(gcnew String(filePath), false);
			}
		}
	}

	private:
			   int CountSelectedItems() {
				   int count = 0;
				   for (int i = 0; i < filesCheckedList->Items->Count; i++) {
					   if (filesCheckedList->GetItemChecked(i)) {
						   count++;
					   }
				   }
				   return count;
			   }

	private: System::Void eraseBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		int countSelectedFiles = CountSelectedItems();

		if (countSelectedFiles < 1) {
			MessageBox::Show("You must select files before !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to securely delete selected files?", "Delete Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			try {

				int totalSteps = countSelectedFiles;
				int currentStep = 0;
				List<String^>^ elementsToRemove = gcnew List<String^>(); // Liste temporaire pour stocker les éléments à supprimer


				for each (String ^ fichier in filesCheckedList->CheckedItems) {
					// Supprimer le fichier de manière sécurisée
					SupprimerFichierSecurise(fichier);

					// Mettre à jour la barre de progression
					currentStep++;
					int progressPercentage = (currentStep * 100) / totalSteps;
					progressBar1->Value = progressPercentage;
					Application::DoEvents(); // Permet à l'interface utilisateur de se mettre à jour

					elementsToRemove->Add(fichier);
				}

				// Supprimer les éléments de la CheckedListBox après la boucle de suppression sécurisée
				for each (String ^ fichierToRemove in elementsToRemove) {
					filesCheckedList->Items->Remove(fichierToRemove);
				}
			}
			catch (Exception^ ex) {
				// Handle file deletion errors
				MessageBox::Show("Error deleting the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		//RafraichirListeFichiers();

	}

	void SupprimerFichierSecurise(String^ cheminFichier) {
			   try {
				   // Obtenir la taille du fichier
				   long tailleFichier = System::IO::File::ReadAllBytes(cheminFichier)->Length;

				   // Créer un tableau de bytes pour stocker les données à écrire
				   array<Byte>^ donneesAleatoires = gcnew array<Byte>(tailleFichier);

				   // Générer des données aléatoires pour chaque passe
				   for (int passe = 0; passe < 5; passe++) {
					   System::Security::Cryptography::RandomNumberGenerator::Create()->GetBytes(donneesAleatoires);

					   // Écrire les données dans le fichier
					   System::IO::File::WriteAllBytes(cheminFichier, donneesAleatoires);
				   }

				   // Supprimer le fichier
				   System::IO::File::Delete(cheminFichier);
				   //ChangerCouleurElement(cheminFichier, Color::Green);
			   }
			   catch (Exception^ ex) {
				   // Gérer les erreurs de suppression de fichier
				   //MessageBox::Show("Erreur lors de la suppression du fichier : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   //ChangerCouleurElement(cheminFichier, Color::Red);
			   }
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < filesCheckedList->Items->Count; i++) {
			// Cocher ou décocher l'élément en fonction de l'état du CheckBox
			filesCheckedList->SetItemChecked(i, checkBox1->Checked);
		}
	}


		   void ChangerCouleurElement(String^ element, Color couleur) {
			   // Parcourir tous les éléments de la CheckedListBox
			   for (int i = 0; i < filesCheckedList->Items->Count; i++) {
				   // Vérifier si l'élément correspond à celui qui vient d'être supprimé
				   if (filesCheckedList->GetItemText(filesCheckedList->Items[i]) == element) {
					   // Changer la couleur de l'élément en formatant le texte avec la couleur spécifiée
					   filesCheckedList->Items[i] = String::Format("<font color='{0}'>{1}</font>", couleur.Name, element);
					   break; // Sortir de la boucle une fois la couleur modifiée
				   }
			   }
		   }
};


}

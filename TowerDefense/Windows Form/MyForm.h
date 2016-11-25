#pragma once
#include "Nivel.h"
#include "VectorCasillas.h"
#include "VectorTorres.h"
#include <stdlib.h>
#include "Torre.h"
#include "VectorEnemigos.h"
#include "Jugador.h"
#include "VectorDatos.h"
namespace WindowsForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ BIPCasilla;
		Bitmap^ BIPCasTor;
		Bitmap^ BIPTorre;
		Bitmap^ BIPCarga;
		Bitmap^ BIPBot;
		Bitmap^ BIPFond;
		Bitmap^ BIPBot2;
		Bitmap^ BIPEne;
		Bitmap^ BIPPaus;
		CNivel *niv;
		CVectorCasillas *cas;
		CTorre *tr;
		CVectorEnemigos *en;
		CVectorTorres *tor;
		CJugador *jug;
		CVectorDatos *dat;

		int p;
		int X;
		int Y;
		bool nivel;
		int num_celdas;
		int ele;
		int TIPOTORRE;
		bool Pon;
		int type;
		bool posible;
	private: System::Windows::Forms::Button^  InicoBot;
	private: System::Windows::Forms::PictureBox^  img_cuadros;
	private: System::Windows::Forms::PictureBox^  img_torres;
	private: System::Windows::Forms::PictureBox^  img_carga;
	private: System::Windows::Forms::PictureBox^  img_castor;
	private: System::Windows::Forms::PictureBox^  img_boton;
	private: System::Windows::Forms::PictureBox^  img_fondo;

	private: System::Windows::Forms::Button^  bot_cargar;
	private: System::Windows::Forms::PictureBox^  img_boton2;
	private: System::Windows::Forms::PictureBox^  img_barra;

	private: System::Windows::Forms::PictureBox^  img_oro;
	private: System::Windows::Forms::Label^  lab_oro;
	private: System::Windows::Forms::PictureBox^  img_ene;
	private: System::Windows::Forms::PictureBox^  img_barraP;
	private: System::Windows::Forms::Label^  lab_punt;
	private: System::Windows::Forms::PictureBox^  img_barraR;

	private: System::Windows::Forms::Label^  lab_rest;
	private: System::Windows::Forms::PictureBox^  img_barraO;

	private: System::Windows::Forms::Label^  lab_ol;
	private: System::Windows::Forms::PictureBox^  img_pausa;


			 int tam_celdas;
	public:
		MyForm(void)
		{

			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			//darles valor aqui
			cas = new CVectorCasillas();
			niv = new CNivel();
			tor = new CVectorTorres();
			tr = new CTorre(0,0,0);
			en = new CVectorEnemigos();
			jug = new CJugador();
			dat = new CVectorDatos();

			TIPOTORRE=1;
			tam_celdas=60;
			num_celdas=150;
			ele=0;
			X=0;
			Y=0;
			p = 0;
			nivel = false;
			posible = false;
			BIPCasilla= gcnew Bitmap(img_cuadros->Image);
			BIPCasTor= gcnew Bitmap(img_castor->Image);
			BIPTorre= gcnew Bitmap(img_torres->Image);
			BIPCarga= gcnew Bitmap(img_carga->Image);
			BIPBot= gcnew Bitmap(img_boton->Image);
			BIPBot2= gcnew Bitmap(img_boton2->Image);
			BIPFond= gcnew Bitmap(img_fondo->Image);
			BIPEne= gcnew Bitmap(img_ene->Image);
			BIPPaus= gcnew Bitmap(img_pausa->Image);
			Pon = true;
			type=1;
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;

			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected: 

	private: System::ComponentModel::IContainer^  components;
	protected: 

	protected: 

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->InicoBot = (gcnew System::Windows::Forms::Button());
			this->img_cuadros = (gcnew System::Windows::Forms::PictureBox());
			this->img_torres = (gcnew System::Windows::Forms::PictureBox());
			this->img_carga = (gcnew System::Windows::Forms::PictureBox());
			this->img_castor = (gcnew System::Windows::Forms::PictureBox());
			this->img_boton = (gcnew System::Windows::Forms::PictureBox());
			this->img_fondo = (gcnew System::Windows::Forms::PictureBox());
			this->bot_cargar = (gcnew System::Windows::Forms::Button());
			this->img_boton2 = (gcnew System::Windows::Forms::PictureBox());
			this->img_barra = (gcnew System::Windows::Forms::PictureBox());
			this->img_oro = (gcnew System::Windows::Forms::PictureBox());
			this->lab_oro = (gcnew System::Windows::Forms::Label());
			this->img_ene = (gcnew System::Windows::Forms::PictureBox());
			this->img_barraP = (gcnew System::Windows::Forms::PictureBox());
			this->lab_punt = (gcnew System::Windows::Forms::Label());
			this->img_barraR = (gcnew System::Windows::Forms::PictureBox());
			this->lab_rest = (gcnew System::Windows::Forms::Label());
			this->img_barraO = (gcnew System::Windows::Forms::PictureBox());
			this->lab_ol = (gcnew System::Windows::Forms::Label());
			this->img_pausa = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_cuadros))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_torres))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_carga))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_castor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_boton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_fondo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_boton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_barra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_oro))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_ene))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_barraP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_barraR))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_barraO))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_pausa))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// InicoBot
			// 
			this->InicoBot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InicoBot->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"InicoBot.Image")));
			this->InicoBot->Location = System::Drawing::Point(421, 485);
			this->InicoBot->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->InicoBot->Name = L"InicoBot";
			this->InicoBot->Size = System::Drawing::Size(381, 103);
			this->InicoBot->TabIndex = 1;
			this->InicoBot->Text = L"Nivel 1";
			this->InicoBot->UseVisualStyleBackColor = true;
			this->InicoBot->Click += gcnew System::EventHandler(this, &MyForm::InicoBot_Click);
			// 
			// img_cuadros
			// 
			this->img_cuadros->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_cuadros.Image")));
			this->img_cuadros->Location = System::Drawing::Point(91, 63);
			this->img_cuadros->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->img_cuadros->Name = L"img_cuadros";
			this->img_cuadros->Size = System::Drawing::Size(696, 144);
			this->img_cuadros->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->img_cuadros->TabIndex = 2;
			this->img_cuadros->TabStop = false;
			this->img_cuadros->Visible = false;
			// 
			// img_torres
			// 
			this->img_torres->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_torres.Image")));
			this->img_torres->Location = System::Drawing::Point(136, 212);
			this->img_torres->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->img_torres->Name = L"img_torres";
			this->img_torres->Size = System::Drawing::Size(1147, 155);
			this->img_torres->TabIndex = 3;
			this->img_torres->TabStop = false;
			this->img_torres->Visible = false;
			// 
			// img_carga
			// 
			this->img_carga->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_carga.Image")));
			this->img_carga->Location = System::Drawing::Point(364, 63);
			this->img_carga->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->img_carga->Name = L"img_carga";
			this->img_carga->Size = System::Drawing::Size(159, 117);
			this->img_carga->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->img_carga->TabIndex = 4;
			this->img_carga->TabStop = false;
			this->img_carga->Visible = false;
			// 
			// img_castor
			// 
			this->img_castor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_castor.Image")));
			this->img_castor->Location = System::Drawing::Point(568, 92);
			this->img_castor->Name = L"img_castor";
			this->img_castor->Size = System::Drawing::Size(473, 115);
			this->img_castor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->img_castor->TabIndex = 14;
			this->img_castor->TabStop = false;
			this->img_castor->Visible = false;
			// 
			// img_boton
			// 
			this->img_boton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_boton.Image")));
			this->img_boton->Location = System::Drawing::Point(1036, 394);
			this->img_boton->Name = L"img_boton";
			this->img_boton->Size = System::Drawing::Size(353, 50);
			this->img_boton->TabIndex = 15;
			this->img_boton->TabStop = false;
			this->img_boton->Visible = false;
			// 
			// img_fondo
			// 
			this->img_fondo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_fondo.Image")));
			this->img_fondo->Location = System::Drawing::Point(155, 122);
			this->img_fondo->Name = L"img_fondo";
			this->img_fondo->Size = System::Drawing::Size(100, 50);
			this->img_fondo->TabIndex = 16;
			this->img_fondo->TabStop = false;
			this->img_fondo->Visible = false;
			// 
			// bot_cargar
			// 
			this->bot_cargar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bot_cargar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bot_cargar.Image")));
			this->bot_cargar->Location = System::Drawing::Point(862, 449);
			this->bot_cargar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bot_cargar->Name = L"bot_cargar";
			this->bot_cargar->Size = System::Drawing::Size(381, 103);
			this->bot_cargar->TabIndex = 18;
			this->bot_cargar->Text = L"Nivel 2";
			this->bot_cargar->UseVisualStyleBackColor = true;
			this->bot_cargar->Visible = false;
			this->bot_cargar->Click += gcnew System::EventHandler(this, &MyForm::bot_cargar_Click);
			// 
			// img_boton2
			// 
			this->img_boton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_boton2.Image")));
			this->img_boton2->Location = System::Drawing::Point(66, 2);
			this->img_boton2->Name = L"img_boton2";
			this->img_boton2->Size = System::Drawing::Size(244, 46);
			this->img_boton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->img_boton2->TabIndex = 19;
			this->img_boton2->TabStop = false;
			this->img_boton2->Visible = false;
			this->img_boton2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::img_boton2_MouseClick);
			// 
			// img_barra
			// 
			this->img_barra->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_barra.Image")));
			this->img_barra->Location = System::Drawing::Point(704, 5);
			this->img_barra->Name = L"img_barra";
			this->img_barra->Size = System::Drawing::Size(119, 43);
			this->img_barra->TabIndex = 20;
			this->img_barra->TabStop = false;
			this->img_barra->Visible = false;
			// 
			// img_oro
			// 
			this->img_oro->BackColor = System::Drawing::SystemColors::HighlightText;
			this->img_oro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_oro.Image")));
			this->img_oro->Location = System::Drawing::Point(829, 5);
			this->img_oro->Name = L"img_oro";
			this->img_oro->Size = System::Drawing::Size(42, 43);
			this->img_oro->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->img_oro->TabIndex = 21;
			this->img_oro->TabStop = false;
			this->img_oro->Visible = false;
			// 
			// lab_oro
			// 
			this->lab_oro->BackColor = System::Drawing::Color::Goldenrod;
			this->lab_oro->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lab_oro->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lab_oro->Location = System::Drawing::Point(764, 5);
			this->lab_oro->Name = L"lab_oro";
			this->lab_oro->Size = System::Drawing::Size(59, 43);
			this->lab_oro->TabIndex = 22;
			this->lab_oro->Text = L"0";
			// 
			// img_ene
			// 
			this->img_ene->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_ene.Image")));
			this->img_ene->Location = System::Drawing::Point(885, 391);
			this->img_ene->Name = L"img_ene";
			this->img_ene->Size = System::Drawing::Size(76, 53);
			this->img_ene->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->img_ene->TabIndex = 23;
			this->img_ene->TabStop = false;
			this->img_ene->Visible = false;
			// 
			// img_barraP
			// 
			this->img_barraP->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_barraP.Image")));
			this->img_barraP->Location = System::Drawing::Point(579, 5);
			this->img_barraP->Name = L"img_barraP";
			this->img_barraP->Size = System::Drawing::Size(119, 43);
			this->img_barraP->TabIndex = 24;
			this->img_barraP->TabStop = false;
			this->img_barraP->Visible = false;
			// 
			// lab_punt
			// 
			this->lab_punt->BackColor = System::Drawing::SystemColors::Highlight;
			this->lab_punt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lab_punt->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lab_punt->Location = System::Drawing::Point(579, 5);
			this->lab_punt->Name = L"lab_punt";
			this->lab_punt->Size = System::Drawing::Size(63, 43);
			this->lab_punt->TabIndex = 25;
			this->lab_punt->Text = L"0";
			// 
			// img_barraR
			// 
			this->img_barraR->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_barraR.Image")));
			this->img_barraR->Location = System::Drawing::Point(454, 5);
			this->img_barraR->Name = L"img_barraR";
			this->img_barraR->Size = System::Drawing::Size(119, 43);
			this->img_barraR->TabIndex = 26;
			this->img_barraR->TabStop = false;
			this->img_barraR->Visible = false;
			// 
			// lab_rest
			// 
			this->lab_rest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lab_rest->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lab_rest->ForeColor = System::Drawing::SystemColors::Info;
			this->lab_rest->Location = System::Drawing::Point(454, 5);
			this->lab_rest->Name = L"lab_rest";
			this->lab_rest->Size = System::Drawing::Size(69, 43);
			this->lab_rest->TabIndex = 27;
			this->lab_rest->Text = L"0";
			// 
			// img_barraO
			// 
			this->img_barraO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_barraO.Image")));
			this->img_barraO->Location = System::Drawing::Point(329, 5);
			this->img_barraO->Name = L"img_barraO";
			this->img_barraO->Size = System::Drawing::Size(119, 43);
			this->img_barraO->TabIndex = 28;
			this->img_barraO->TabStop = false;
			this->img_barraO->Visible = false;
			// 
			// lab_ol
			// 
			this->lab_ol->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lab_ol->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lab_ol->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->lab_ol->Location = System::Drawing::Point(329, 5);
			this->lab_ol->Name = L"lab_ol";
			this->lab_ol->Size = System::Drawing::Size(57, 43);
			this->lab_ol->TabIndex = 29;
			this->lab_ol->Text = L"0";
			// 
			// img_pausa
			// 
			this->img_pausa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_pausa.Image")));
			this->img_pausa->Location = System::Drawing::Point(862, 610);
			this->img_pausa->Name = L"img_pausa";
			this->img_pausa->Size = System::Drawing::Size(280, 53);
			this->img_pausa->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->img_pausa->TabIndex = 30;
			this->img_pausa->TabStop = false;
			this->img_pausa->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1163, 693);
			this->Controls->Add(this->img_pausa);
			this->Controls->Add(this->lab_ol);
			this->Controls->Add(this->img_barraO);
			this->Controls->Add(this->lab_rest);
			this->Controls->Add(this->img_barraR);
			this->Controls->Add(this->lab_punt);
			this->Controls->Add(this->img_barraP);
			this->Controls->Add(this->img_ene);
			this->Controls->Add(this->lab_oro);
			this->Controls->Add(this->img_oro);
			this->Controls->Add(this->img_barra);
			this->Controls->Add(this->img_boton2);
			this->Controls->Add(this->bot_cargar);
			this->Controls->Add(this->img_fondo);
			this->Controls->Add(this->img_boton);
			this->Controls->Add(this->img_castor);
			this->Controls->Add(this->img_carga);
			this->Controls->Add(this->img_torres);
			this->Controls->Add(this->img_cuadros);
			this->Controls->Add(this->InicoBot);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Location = System::Drawing::Point(1, 1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->TransparencyKey = System::Drawing::Color::Gray;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseClick);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_cuadros))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_torres))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_carga))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_castor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_boton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_fondo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_boton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_barra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_oro))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_ene))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_barraP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_barraR))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_barraO))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_pausa))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: void Poder()
	{
				 for (int i = 10; i <= 70; i = i + 10)
				 {
					 if (jug->getOro() >= i)
					 {
						 TIPOTORRE = i / 10;
					 }
				 }
	}
	private: bool Pioridad()
	{
				 Poder();
				 if (tor->getNe() != 0)
				 {
					 for (int i = 1; i <= 7; i++)
					 {
						 if (i == TIPOTORRE)
						 {
							 //if (en->GetValorTotal() + dat->getAmenaza() <= (40-((i*10))) )
							 if (en->GetValorTotal()<= (55 - ((i * 10))))
								 return true;
						 }
					 }
				 }
				 return false;
	}
	private: int PioRango(int i, int j)
	{
				 int p = 0;
				 if (cas->getTipo(i - 1, j - 1) == 3 || cas->getTipo(i - 1, j - 1) == 2)
					 p++;
				 if (cas->getTipo(i - 1, j) == 3 || cas->getTipo(i - 1, j) == 2)
					 p++;
				 if (cas->getTipo(i - 1, j + 1) == 3 || cas->getTipo(i - 1, j + 1) == 2)
					 p++;
				 if (cas->getTipo(i, j - 1) == 3 || cas->getTipo(i, j - 1) == 2)
					 p++;
				 if (cas->getTipo(i, j + 1) == 3 || cas->getTipo(i, j + 1) == 2)
					 p++;
				 if (cas->getTipo(i + 1, j - 1) == 3 || cas->getTipo(i + 1, j - 1) == 2)
					 p++;
				 if (cas->getTipo(i + 1, j) == 3 || cas->getTipo(i + 1, j) == 2)
					 p++;
				 if (cas->getTipo(i + 1, j + 1) == 3 || cas->getTipo(i + 1, j + 1) == 2)
					 p++;
				 return p;
	}
	private: bool BuscaCamino(int &i, int &j)
	{
				 cas->SetPas(i, j, true);
				 if (cas->getTipo(i - 1, j) == 3 && cas->GetPas(i - 1, j) == false)
				 {	 i = i - 1;  return true;}
				 if (cas->getTipo(i, j - 1) == 3 && cas->GetPas(i, j - 1) == false)
				 { j = j - 1;  return true; }
				 if (cas->getTipo(i, j + 1) == 3 && cas->GetPas(i, j + 1) == false)
				 { j = j + 1;  return true; }
				 if (cas->getTipo(i + 1, j) == 3 && cas->GetPas(i + 1, j) == false)
				 { i = i + 1;  return true; }
				 return false;
	}
	private: void Sitio(int &i, int &j)
	{
				 int pi = 0;
				 int xa = i;
				 int xb = j;
				 int pr = 0;

				 if (cas->getTipo(xa - 1, xb - 1) == 4)
				 {
					 pr = PioRango(xa - 1, xb - 1);
					 if (pi < pr)
					 {
						 i = xa;
						 j = xb;
						 pi = pr;
						 i = i - 1;
						 j = j - 1;
					 }
				 }
				 if (cas->getTipo(xa - 1, xb) == 4)
				 {
					 pr = PioRango(xa - 1, xb);
					 if (pi < pr)
					 { 
						 i = xa;
						 j = xb;
						 pi = pr;
						 i = i - 1;
					 }
				 }
				 if (cas->getTipo(xa - 1, xb + 1) == 4)
				 {
					 pr = PioRango(xa - 1, xb + 1);
					 if (pi < pr)
					 {
						 i = xa;
						 j = xb;
						 pi = pr;
						 i = i - 1; j=j + 1;
					 }
				 }
				 if (cas->getTipo(xa, xb - 1) == 4)
				 {
					 pr = PioRango(xa, xb - 1);
					 if (pi < pr)
					 {
						 i = xa;
						 j = xb;
						 pi = pr; j = j - 1;
					 }
				 }
				 if (cas->getTipo(xa, xb + 1) == 4)
				 {
					 pr = PioRango(xa, xb + 1);
					 if (pi < pr)
					 {
						 i = xa;
						 j = xb;
						 pi = pr; j = j + 1;
					 }
				 }
				 if (cas->getTipo(xa + 1, xb - 1) == 4)
				 {
					 pr = PioRango(xa + 1, xb - 1);
					 if (pi < pr)
					 {
						 i = xa;
						 j = xb;
						 pi = pr; i = i + 1; j = j - 1;
					 }
				 }
				 if (cas->getTipo(xa + 1, xb) == 4)
				 {
					 pr = PioRango(xa + 1, xb);
					 if (pi < pr)
					 {
						 i = xa;
						 j = xb;
						 pi = pr; i = i + 1;
					 }
				 }
				 if (cas->getTipo(xa + 1, xb + 1) == 4)
				 {
					 pr = PioRango(xa + 1, xb + 1);
					 if (pi < pr)
					 {
						 i = xa;
						 j = xb;
						 pi = pr; i = i + 1; j = j + 1;
					 }
				 }
				 return;
	}
	private: void Algoritmo()
			 {
				 if (nivel == false)
				 {
					 return;
				 }
				 
				 if (dat->getHecho() == false)
				 {
					 for (int i = 0; i < 15; i++)
					 {
						 for (int j = 0; j < 10; j++)
						 {
							 if ((cas->getTipo(i, j) == 4))
							 {
								 dat->insertarDatos(i, j, PioRango(i, j));
							 }
						 }
					 }

					 //ACA
					 if (niv->getNivel() == 1)
					 {
						 int Xi = 1;
						 int Yi = 1;
						 do
						 {
							 dat->CampoDatos(Xi, Yi, 0);
						 }while (BuscaCamino(Xi, Yi));
					 }
					 if (niv->getNivel() == 2)
					 {
						 int Xi = 1;
						 int Yi = 4;
						 do
						 {
							 dat->CampoDatos(Xi, Yi, 0);
						 } while (BuscaCamino(Xi, Yi));
					 }

					 dat->setHecho(true);
				 }
				 
				 dat->DetectarAmenaza(en);

				 if (dat->getPeligro() == true)
				 {
					 if (jug->getOro() < 10)
						 return;
					 int XX, YY;
					 XX = dat->getXX();
					 YY = dat->getYY();
					 Sitio(XX, YY);
					 Poder();
					 tor->InsertarTorre(tam_celdas, XX, YY, en->MejorTorre(dat->getEnemigo(),TIPOTORRE, jug), cas->getTipo(XX, YY), jug);
						 dat->setPeligro(false);
					 return;
				 }
				 
				 if (Pioridad())
				 {
					 return;
				 }

				 for (int j = 7; j >= 1; j--)
				 {
					 for (int i = 0; i < dat->getNe(); i++)
					 {
						 if (dat->getPioridad(i) == j && dat->Posible(jug, TIPOTORRE))
						 {
							 tor->InsertarTorre(tam_celdas, dat->getX(i), dat->getY(i), TIPOTORRE, cas->getTipo(dat->getX(i), dat->getY(i)), jug);
						 }
					 }
				 }

				 dat->setAmenaza(0);
			 }
	private: System::Void MyForm_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 //como estamos una IA se retornará esto
				 if(nivel==false)
				 {
					 return;
				 }
				 X=e->X;
				 Y=e->Y;
				 if(X>=0 && X<50 && Y>=0 && Y<50)
				 {
					 niv->setP(!niv->getP());
					 niv->setPausa(1);
					 if(niv->getP()==false)
					 {
						timer1->Enabled=true;
						niv->setPausa(0);
					 }
				 }
				 return;
				 if(X>=50 && X<900 && Y>=90 && Y<=640)
				 {
					 if(Pon)
					 {
						 tr->setTipo(TIPOTORRE);
						 if((jug->getOro())-tr->getCosto()>=0 && cas->getTipo((X-50)/60,((Y-50)/60))==4)
						 {
							 tor->InsertarTorre(tam_celdas,(X-50)/60,(Y-50)/60,TIPOTORRE,cas->getTipo((X-50)/60,((Y-50)/60)),jug);
						 }
					 }else
					 {
						 tor->QuitarTorre(tam_celdas,(X-50)/60,(Y-50)/60);
						 //en->QuitarEnemigo(tam_celdas,X,Y,jug);
					 }
				 }

			 }
	private: System::Void MyForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^g = this->CreateGraphics();
				 // valida la imprecion
				 if((int)g->VisibleClipBounds.Width==0||(int)g->VisibleClipBounds.Height==0)
					 return;
				 //creacion de buffer
				 Bitmap ^bmp = gcnew Bitmap(g->VisibleClipBounds.Width,g->VisibleClipBounds.Height);
				 Graphics ^buffer = Graphics::FromImage(bmp);				 
				 //limpiamos buffer

				 buffer->Clear(Color::White);
				 niv->mapa(buffer,tam_celdas);
				 if(jug->getResto()==0)
				 {
					 jug->setResto(20);
					 en->resetear();
					 MessageBox::Show("HAZ PERDIDO");
					 InicoBot->Visible=true;
					 img_boton2->Visible=false;
					 bot_cargar->Visible=true;
					 img_oro->Visible=false;
					 img_barra->Visible=false;
					 img_barraR->Visible=false;
					 img_barraP->Visible=false;
					 img_barraO->Visible=false;
					 lab_oro->Visible=false;
					 lab_punt->Visible=false;
					 lab_rest->Visible=false;
					 lab_ol->Visible=false;
					 tor->Resetear();
					 jug->setOro(200);
					 jug->setResto(20);
					 jug->setPuntaje(0);
					 type=1;
					 TIPOTORRE=1;
					 nivel = false;
				 }
				 if(nivel==false)
				 {
					 lab_oro->Visible=false;
					 lab_punt->Visible=false;
					 lab_rest->Visible=false;
					 lab_ol->Visible=false;
					 niv->pantalla(buffer,BIPCarga);
				 }
				 //casi->pintar(buffer,BIPCasilla,tam_celdas);
				 if(nivel)
				 {
					 niv->fondo(buffer,BIPFond);
					 niv->Pausa(buffer,BIPPaus);
					 if(niv->getP()==true)
					 {
						 timer1->Enabled=false;
					 }
					 if(niv->getNivel()==1)
					 {
						 cas->MostrarNivel(buffer,BIPCasilla,num_celdas,tam_celdas);
					 }
					 if(niv->getNivel()==2)
					 {
						cas->MostrarNivel2(buffer,BIPCasilla,num_celdas,tam_celdas);
					 }
					 tor->MostrarTorre(buffer,BIPTorre,num_celdas,tam_celdas);
					 cas->MostrarCasTor(buffer,BIPCasTor,num_celdas,tam_celdas);
					 cas->Mostra1(buffer,BIPCasTor,num_celdas,tam_celdas,TIPOTORRE);
					 cas->MostrarBot(buffer,BIPBot,num_celdas,tam_celdas,type);
					 en->dibujarTodos(buffer,BIPEne);
					 en->moverTodos(niv);
					 en->desaparecerEnemigo(jug);
					 tor->detectar(en);
					 en->QuitarEnemigo(jug);
					 en->Oleadas(niv);
					 Algoritmo();
				 }
				 lab_oro->Text = jug->getOro().ToString();
				 lab_punt->Text = jug->getPuntaje().ToString();
				 lab_rest->Text = jug->getResto().ToString();
				 lab_ol->Text = en->GetOleada().ToString();
				 g->DrawImage(bmp,0,0);
				 //eliminamos memoria dinamica
				 delete buffer;
				 delete bmp;
				 delete g;
			 }
	private: System::Void InicoBot_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 niv->setNivel(1);
				 tam_celdas = 60;
				 InicoBot->Visible=false;
				 //bot_op->Visible=true;
				 //FinBot->Visible=true;
				 img_boton2->Visible=true;
				 //bot_cargar->Visible=false;
				 img_oro->Visible=true;
				 img_barra->Visible=true;
				 img_barraP->Visible=true;
				 img_barraR->Visible=true;
				 img_barraO->Visible=true;
				 lab_oro->Visible=true;
				 lab_punt->Visible=true;
				 lab_rest->Visible=true;
				 lab_ol->Visible=true;
				 //delete InicoBot;
				 nivel = true;
				 cas->InsertarNivel(num_celdas,tam_celdas);
				 cas->insertarCasTor(num_celdas,tam_celdas);
				 cas->insertarBot(num_celdas,tam_celdas);
				 cas->inser1(tam_celdas,TIPOTORRE);
			 }
	private: System::Void MyForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {

			 }
	private: System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 //tor->InsertarTorre(tam_celdas,(e->X-50)/60,(e->Y-50)/60,1);
			 }
	private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
			 {
				 if(e->KeyChar == '1')
				 {
					 TIPOTORRE=1;
				 }
				 if(e->KeyChar == '2')
				 {
					 TIPOTORRE=2;
				 }
				 if(e->KeyChar == '3')
				 {
					 TIPOTORRE=3;
				 }
				 if(e->KeyChar == '4')
				 {
					 TIPOTORRE=4;
				 }
				 if(e->KeyChar == '5')
				 {
					 TIPOTORRE=5;
				 }
				 if(e->KeyChar == '6')
				 {
					 TIPOTORRE=6;
				 }
				 if(e->KeyChar == '7')
				 {
					 TIPOTORRE=7;
				 }
				 if(e->KeyChar == 'p')
				 {
					 Pon=!Pon;
					 if(Pon)
					 {
						 type=1;
					 }
					 else
					 {
						 type=2;
					 }
				 }
				 /*if(e->KeyChar == 'q')
				 {
					 en->InsertarEnemigos();
				 }*/
			 }
	private: System::Void bot_cargar_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				

				 //niv->setNivel(2);
				 //tam_celdas = 60;
				 //InicoBot->Visible=false;

				 //img_boton2->Visible=true;
				 //bot_cargar->Visible=false;
				 //img_oro->Visible=true;
				 //img_barra->Visible=true;
				 //img_barraP->Visible=true;
				 //img_barraR->Visible=true;
				 //img_barraO->Visible=true;
				 //lab_oro->Visible=true;
				 //lab_punt->Visible=true;
				 //lab_rest->Visible=true;
				 //lab_ol->Visible=true;

				 //nivel = true;
				 //cas->InsertarNivel2(num_celdas,tam_celdas);
				 //cas->insertarCasTor(num_celdas,tam_celdas);
				 //cas->insertarBot(num_celdas,tam_celdas);
				 //cas->inser1(tam_celdas,TIPOTORRE);

			 }
	private: System::Void img_boton2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 if(niv->getP()==true)
				 {
					 return;
				 }
				 InicoBot->Visible=true;
				 img_boton2->Visible=false;
				 //bot_cargar->Visible=true;
				 img_oro->Visible=false;
				 img_barra->Visible=false;
				 img_barraR->Visible=false;
				 img_barraP->Visible=false;
				 img_barraO->Visible=false;
				 lab_oro->Visible=false;
				 lab_punt->Visible=false;
				 lab_rest->Visible=false;
				 lab_ol->Visible=false;
				 nivel = false;
				 tor->Resetear();
				 en->resetear();
				 dat->setHecho(false);
				 dat->QuitarTodosDatos();
				 jug->setOro(40);
				 jug->setResto(10);
				 jug->setPuntaje(0);
				 type=1;
				 TIPOTORRE=1;	
			 }
	};
}
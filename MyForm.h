#include <math.h>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;
	
//using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V_1_minus_V_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OLP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ U;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ U_minus_V_1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;




	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox12;

		   // Добавленные элементы для задачи 2
	private: System::Windows::Forms::Panel^ panelTask2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ComboBox^ comboBoxGraphType;






	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		//PointPairList^ graphData;
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V_1_minus_V_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OLP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->U = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->U_minus_V_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxGraphType = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->panelTask2 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelTask2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1016, 492);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(317, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Нарисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->X, this->V_1,
					this->V_2, this->V_1_minus_V_2, this->OLP, this->h, this->C1, this->C2, this->U, this->U_minus_V_1
			});
			this->dataGridView1->Location = System::Drawing::Point(728, 37);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 49;
			this->dataGridView1->Size = System::Drawing::Size(588, 402);
			this->dataGridView1->TabIndex = 2;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// V_1
			// 
			this->V_1->HeaderText = L"V_1";
			this->V_1->MinimumWidth = 6;
			this->V_1->Name = L"V_1";
			this->V_1->ReadOnly = true;
			this->V_1->Width = 150;
			// 
			// V_2
			// 
			this->V_2->HeaderText = L"V_2";
			this->V_2->MinimumWidth = 6;
			this->V_2->Name = L"V_2";
			this->V_2->ReadOnly = true;
			this->V_2->Width = 150;
			// 
			// V_1_minus_V_2
			// 
			this->V_1_minus_V_2->HeaderText = L"V_1 - V_2";
			this->V_1_minus_V_2->MinimumWidth = 6;
			this->V_1_minus_V_2->Name = L"V_1_minus_V_2";
			this->V_1_minus_V_2->ReadOnly = true;
			this->V_1_minus_V_2->Width = 150;
			// 
			// OLP
			// 
			this->OLP->HeaderText = L"OLP";
			this->OLP->MinimumWidth = 6;
			this->OLP->Name = L"OLP";
			this->OLP->ReadOnly = true;
			this->OLP->Width = 150;
			// 
			// h
			// 
			this->h->HeaderText = L"h";
			this->h->MinimumWidth = 6;
			this->h->Name = L"h";
			this->h->ReadOnly = true;
			this->h->Width = 50;
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->MinimumWidth = 6;
			this->C1->Name = L"C1";
			this->C1->ReadOnly = true;
			this->C1->Width = 50;
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->MinimumWidth = 6;
			this->C2->Name = L"C2";
			this->C2->ReadOnly = true;
			this->C2->Width = 50;
			// 
			// U
			// 
			this->U->HeaderText = L"U";
			this->U->MinimumWidth = 6;
			this->U->Name = L"U";
			this->U->ReadOnly = true;
			this->U->Width = 150;
			// 
			// U_minus_V_1
			// 
			this->U_minus_V_1->HeaderText = L"|U - V_1|";
			this->U_minus_V_1->MinimumWidth = 6;
			this->U_minus_V_1->Name = L"U_minus_V_1";
			this->U_minus_V_1->ReadOnly = true;
			this->U_minus_V_1->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 450);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"x_min";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 448);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(200, 451);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"x_max";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(253, 447);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(64, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(361, 453);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(386, 448);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,01";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1016, 536);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(317, 36);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Приблизить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(51, 37);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(668, 402);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(82, 582);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(147, 20);
			this->radioButton1->TabIndex = 14;
			this->radioButton1->Text = L"Тестовое задание";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(231, 582);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(122, 20);
			this->radioButton2->TabIndex = 15;
			this->radioButton2->Text = L"Осн. задание 1";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(386, 582);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(122, 20);
			this->radioButton3->TabIndex = 16;
			this->radioButton3->Text = L"Осн. задание 2";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(253, 475);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(64, 22);
			this->textBox5->TabIndex = 20;
			this->textBox5->Text = L"2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(200, 479);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 16);
			this->label5->TabIndex = 19;
			this->label5->Text = L"v_max";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(104, 476);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(63, 22);
			this->textBox6->TabIndex = 18;
			this->textBox6->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(55, 478);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 16);
			this->label6->TabIndex = 17;
			this->label6->Text = L"v_min";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(253, 505);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(64, 22);
			this->textBox4->TabIndex = 24;
			this->textBox4->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(200, 509);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 16);
			this->label4->TabIndex = 23;
			this->label4->Text = L"v\'_max";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(104, 506);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(63, 22);
			this->textBox7->TabIndex = 22;
			this->textBox7->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(55, 508);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 16);
			this->label7->TabIndex = 21;
			this->label7->Text = L"v\'_min";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(386, 482);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(80, 22);
			this->textBox8->TabIndex = 26;
			this->textBox8->Text = L"1e-4";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(348, 485);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 16);
			this->label8->TabIndex = 25;
			this->label8->Text = L"eps";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(386, 512);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(80, 22);
			this->textBox9->TabIndex = 28;
			this->textBox9->Text = L"10000";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(329, 515);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 16);
			this->label9->TabIndex = 27;
			this->label9->Text = L"N_max";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(639, 482);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(80, 22);
			this->textBox10->TabIndex = 32;
			this->textBox10->Text = L"1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(607, 488);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 16);
			this->label10->TabIndex = 31;
			this->label10->Text = L"u\'0";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(639, 448);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(80, 22);
			this->textBox11->TabIndex = 30;
			this->textBox11->Text = L"1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(610, 453);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 16);
			this->label11->TabIndex = 29;
			this->label11->Text = L"u0";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(667, 515);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(55, 20);
			this->checkBox1->TabIndex = 33;
			this->checkBox1->Text = L"ОЛП";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// comboBoxGraphType
			// 
			this->comboBoxGraphType->FormattingEnabled = true;
			this->comboBoxGraphType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"(x, u1(x))", L"(x, u2(x))", L"(u1(x), u2(x))" });
			this->comboBoxGraphType->Location = System::Drawing::Point(120, 100);
			this->comboBoxGraphType->Name = L"comboBoxGraphType";
			this->comboBoxGraphType->Size = System::Drawing::Size(200, 24);
			this->comboBoxGraphType->TabIndex = 42;
			this->comboBoxGraphType->Text = L"(x, u1(x))";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1016, 448);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(317, 36);
			this->button3->TabIndex = 34;
			this->button3->Text = L"Вычислить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(667, 541);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(215, 20);
			this->checkBox2->TabIndex = 35;
			this->checkBox2->Text = L"Нарисовать точное решение";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBoxB
			// 
			this->textBoxB->Location = System::Drawing::Point(120, 60);
			this->textBoxB->Margin = System::Windows::Forms::Padding(4);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(200, 22);
			this->textBoxB->TabIndex = 40;
			this->textBoxB->Text = L"2";
			// 
			// panelTask2
			// 
			this->panelTask2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelTask2->Controls->Add(this->comboBoxGraphType);
			this->panelTask2->Controls->Add(this->label15);
			this->panelTask2->Controls->Add(this->textBoxB);
			this->panelTask2->Controls->Add(this->label14);
			this->panelTask2->Controls->Add(this->textBoxA);
			this->panelTask2->Controls->Add(this->label13);
			this->panelTask2->Location = System::Drawing::Point(1325, 445);
			this->panelTask2->Name = L"panelTask2";
			this->panelTask2->Size = System::Drawing::Size(437, 150);
			this->panelTask2->TabIndex = 37;
			this->panelTask2->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(20, 103);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(91, 16);
			this->label15->TabIndex = 41;
			this->label15->Text = L"Тип графика";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(20, 63);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(15, 16);
			this->label14->TabIndex = 39;
			this->label14->Text = L"b";
			// 
			// textBoxA
			// 
			this->textBoxA->Location = System::Drawing::Point(120, 20);
			this->textBoxA->Margin = System::Windows::Forms::Padding(4);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(200, 22);
			this->textBoxA->TabIndex = 38;
			this->textBoxA->Text = L"1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(20, 23);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(15, 16);
			this->label13->TabIndex = 37;
			this->label13->Text = L"a";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(1323, 37);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(437, 402);
			this->textBox12->TabIndex = 36;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1774, 614);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->panelTask2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Lab_1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelTask2->ResumeLayout(false);
			this->panelTask2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		//для всех задач кроме 2
		PointPairList^ v_list = gcnew PointPairList();
		//для 2 задачи
		PointPairList^ v1_list = gcnew PointPairList();
		PointPairList^ v2_list = gcnew PointPairList();
		PointPairList^ v1_v2_list = gcnew PointPairList();

		// Тестовая задача
		double f_test(double x, double u)
		{
			return -3.0 / 2.0 * u;
		}

		double u_test(double x, double c)
		{
			double u1 = c * exp((-3.0 / 2.0) * x);
			return u1;
		}

		// Основная задача №1 для варианта 3
		double f_main1(double x)
		{
			// f(x) = 1/(1+x^2)^(1/3) для варианта 3
			return 1.0 / pow(1.0 + x * x, (1.0 / 3.0));
		}

		double f_main1_derivative(double x, double u)
		{
			// du/dx = f(x)u^2 + u - u^3 sin(10x)
			return f_main1(x) * u * u + u - u * u * u * sin(10 * x);
		}

		// Метод Рунге-Кутта 4-го порядка для основной задачи №1
		double RK4_main1(double x, double u, double h)
		{
			double v = u;
			double k1 = h * f_main1_derivative(x, v);
			double k2 = h * f_main1_derivative(x + h / 2, v + k1 / 2);
			double k3 = h * f_main1_derivative(x + h / 2, v + k2 / 2);
			double k4 = h * f_main1_derivative(x + h, v + k3);

			return v + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
		}

		// Метод Рунге-Кутта для тестовой задачи
		double RK4_test(double x, double u, double h)
		{
			double v = u;
			double k1 = h * f_test(x, v);
			double k2 = h * f_test(x + h / 2, v + k1 / 2);
			double k3 = h * f_test(x + h / 2, v + k2 / 2);
			double k4 = h * f_test(x + h, v + k3);

			return v + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
		}
		// Метод Рунге-Кутта для системы уравнений Основной задачи №2
		void RK4_main2_system(double x, double% y1, double% y2, double h, double a, double b)
		{
			double k1_y1, k1_y2, k2_y1, k2_y2, k3_y1, k3_y2, k4_y1, k4_y2;
			double f1, f2;

			// Первый коэффициент
			f_main2_system(x, y1, y2, a, b, f1, f2);
			k1_y1 = h * f1;
			k1_y2 = h * f2;

			// Второй коэффициент
			f_main2_system(x + h / 2, y1 + k1_y1 / 2, y2 + k1_y2 / 2, a, b, f1, f2);
			k2_y1 = h * f1;
			k2_y2 = h * f2;

			// Третий коэффициент
			f_main2_system(x + h / 2, y1 + k2_y1 / 2, y2 + k2_y2 / 2, a, b, f1, f2);
			k3_y1 = h * f1;
			k3_y2 = h * f2;

			// Четвертый коэффициент
			f_main2_system(x + h, y1 + k3_y1, y2 + k3_y2, a, b, f1, f2);
			k4_y1 = h * f1;
			k4_y2 = h * f2;

			// Обновление значений
			y1 = y1 + (k1_y1 + 2 * k2_y1 + 2 * k3_y1 + k4_y1) / 6;
			y2 = y2 + (k1_y2 + 2 * k2_y2 + 2 * k3_y2 + k4_y2) / 6;
		}

		// Правая часть системы для Основной задачи №2
		void f_main2_system(double x, double y1, double y2, double a, double b, double% f1, double% f2)
		{
			f1 = y2;  // du/dx = u'
			f2 = -a * y2 * y2 - b * y1;  // du'/dx = -a*(u')^2 - b*u
		}

		void add_data_to_row(DataGridView^ grid, int row, double x0, double v, double v_half, double v_minus_v_half, double OLP, double h, int C1, int C2, double u, double u_minus_v)
		{
			grid->AllowUserToAddRows = false;
			grid->Rows->Add();
			grid->Rows[row]->Cells[0]->Value = Math::Round(x0, 3);
			grid->Rows[row]->Cells[1]->Value = v;
			grid->Rows[row]->Cells[2]->Value = v_half;
			grid->Rows[row]->Cells[3]->Value = v_minus_v_half;
			grid->Rows[row]->Cells[4]->Value = OLP;
			grid->Rows[row]->Cells[5]->Value = h;
			grid->Rows[row]->Cells[6]->Value = C1;
			grid->Rows[row]->Cells[7]->Value = C2;
			grid->Rows[row]->Cells[8]->Value = u;
			grid->Rows[row]->Cells[9]->Value = u_minus_v;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) //draw
	{
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();

		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);

		double h = Convert::ToDouble(textBox3->Text);

		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;

		// Если выбрана задача 2, используем специальную функцию построения графиков
		if (radioButton3->Checked)
		{
			String^ selectedGraph = comboBoxGraphType->Text;
			double a_param = Convert::ToDouble(textBoxA->Text);
			double b_param = Convert::ToDouble(textBoxB->Text);

			if (selectedGraph == "(x, u1(x))")
			{
				String^ curveTitle = String::Format("Main Task 2 (a={0}, b={1}) - {2}", a_param, b_param, selectedGraph);
				LineItem^ curve11 = panel->AddCurve(curveTitle, v1_list, Color::Blue, SymbolType::None);
				curve11->Line->Width = 2.0f;

				panel->Title->Text = "Main Task 2: " + selectedGraph;
				panel->XAxis->Title->Text = "x";
				panel->YAxis->Title->Text = "u1(x)";

				panel->YAxis->Scale->Min = -1.0;
				panel->YAxis->Scale->Max = 1.5;
			}
			else if (selectedGraph == "(x, u2(x))")
			{
				String^ curveTitle = String::Format("Main Task 2 (a={0}, b={1}) - {2}", a_param, b_param, selectedGraph);
				LineItem^ curve22 = panel->AddCurve(curveTitle, v2_list, Color::Blue, SymbolType::None);
				curve22->Line->Width = 2.0f;

				panel->Title->Text = "Main Task 2: " + selectedGraph;
				panel->XAxis->Title->Text = "x";
				panel->YAxis->Title->Text = "u2(x)";

				panel->YAxis->Scale->Min = -10;
				panel->YAxis->Scale->Max = 10;
			}
			else if (selectedGraph == "(u1(x), u2(x))")
			{
				String^ curveTitle = String::Format("Main Task 2 (a={0}, b={1}) - {2}", a_param, b_param, selectedGraph);
				LineItem^ curve12 = panel->AddCurve(curveTitle, v1_v2_list, Color::Blue, SymbolType::None);
				curve12->Line->Width = 2.0f;

				panel->Title->Text = "Фазовый портрет: u1(x) vs u2(x)";
				panel->XAxis->Title->Text = "u1(x)";
				panel->YAxis->Title->Text = "u2(x)";

				panel->YAxis->Scale->Min = -10;
				panel->YAxis->Scale->Max = 10;
			}

		}
		else
		{
			LineItem^ Curve1 = panel->AddCurve("Numerical solution", v_list, Color::Red, SymbolType::HDash);
			Curve1->Line->Width = 2.0f;

			if (radioButton1->Checked && checkBox2->Checked)
			{
				//panel->CurveList->Clear();
				PointPairList^ u_list = gcnew PointPairList();

				int N = Convert::ToInt32(textBox9->Text);
				int n = 1;

				double x0 = 0.0;
				double u0 = Convert::ToDouble(textBox11->Text);

				h = 0.01;

				for (double x = xmin + h; x <= xmax + h / 1000.0; x += h)
				{
					if (n >= N)
					{
						break;
					}
					n++;

					double u_i = u_test(x, u0);
					u_list->Add(x, u_i);
				}
				u_list->Sort();

				LineItem^ Curve2 = panel->AddCurve("Exact solution", u_list, Color::Blue, SymbolType::HDash);
				Curve2->Line->Width = 2.0f;
			}

			// Устанавливаем интервал по осям
			panel->XAxis->Scale->Min = xmin_limit;
			panel->XAxis->Scale->Max = xmax_limit;
			panel->XAxis->Title->Text = "x";
			panel->YAxis->Title->Text = "v(x)";
			if (radioButton2->Checked)
			{
				panel->YAxis->Scale->Min = 0;
				panel->YAxis->Scale->Max = 10;
			}
			else
			{
				panel->YAxis->Scale->MinAuto = true;
				panel->YAxis->Scale->MaxAuto = true;
			}
		}
		
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
	}

	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) //zoom
	{
		GraphPane^ panel = zedGraphControl1->GraphPane;
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);
		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin;
		panel->XAxis->Scale->Max = xmax;
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) //calculate
	{
		double x0 = 0.0;
		double u0 = Convert::ToDouble(textBox11->Text);
		double v = u0;
		double v_half = u0;

		double xmin = x0;
		double xmax = Convert::ToDouble(textBox2->Text);
		double h = Convert::ToDouble(textBox3->Text);


		if (radioButton1->Checked) // Тестовая задача
		{
			if (checkBox1->Checked)
			{
				// С контролем погрешности
				dataGridView1->Rows->Clear();
				v_list->Clear();

				add_data_to_row(dataGridView1, 0, x0, v, v_half, 0.0, 0.0, 0.0, 0, 0, u_test(x0, u0), 0.0);
				v_list->Add(x0, v);

				// Список точек
				double eps = Convert::ToDouble(textBox8->Text);
				int N = Convert::ToInt32(textBox9->Text);
				
				double a = Math::Pow(2, 4);
				int i = 1;
				int n = 1;

				// ДЛЯ СТАТИСТИКИ
				double max_olp = 0.0;
				double max_h = h;
				double min_h = h;
				double x_max_h = xmin + h;
				double x_min_h = xmin + h;
				double max_abs_error = 0.0;
				double x_max_abs_error = x0;
				
				int count_c1 = 0; //div
				int count_c2 = 0; //mult

				double x = xmin;
				double next_x = xmin + h;

				while (next_x <= xmax + h / 1000.0 && n < N)
				{
					double u_i = u_test(next_x, u0);
					double v1 = RK4_test(x, v, h);

					double tmp = RK4_test(x, v_half, h / 2);
					double v2 = RK4_test(x + h / 2, tmp, h / 2);

					double s = Math::Abs(v2 - v1) / (a - 1);

					// ОБНОВЛЯЕМ СТАТИСТИКУ
					if (s * a > max_olp) max_olp = s * a;
					if (h > max_h) { max_h = h; x_max_h = next_x; }
					if (h < min_h) { min_h = h; x_min_h = next_x; }
					double current_abs_error = Math::Abs(u_i - v1);
					if (current_abs_error > max_abs_error) {
						max_abs_error = current_abs_error;
						x_max_abs_error = next_x;
					}

					if ((s >= (eps / Math::Pow(2, 5))) && (s <= eps))
					{
						v = v1;
						v_half = v2;

						v_list->Add(next_x, v);
						add_data_to_row(dataGridView1, i, next_x, v, v_half, v - v_half, s * a, h, 0, 0, u_i, Math::Abs(u_i - v));

						x = next_x;
						next_x = x + h;
						//x += h;
						n++;
						i++;
					}
					else if (s < (eps / Math::Pow(2, 5)))
					{
						v = v1;
						v_half = v2;

						v_list->Add(next_x, v);
						add_data_to_row(dataGridView1, i, next_x, v, v_half, v - v_half, s * a, h, 0, 1, u_i, Math::Abs(u_i - v));

						x = next_x;
						h *= 2;

						next_x = x + h;
						count_c2++;
						//x += h;
						n++;
						i++;
					}
					else if (s > eps)
					{
						add_data_to_row(dataGridView1, i, next_x, v1, v2, v1 - v2, s * a, h, 1, 0, u_i, Math::Abs(u_i - v));

						i++;

						h /= 2;
						next_x = x + h;
						count_c1++;
					}
				}

				double x_n = 0;
				DataGridViewCell^ lastCell = dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells[0];
				if (lastCell->Value != nullptr)
				{
					x_n = Convert::ToDouble(lastCell->Value);
				}

				//results
				textBox12->Text = L"Результаты:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nМакс ОЛП = {0}", max_olp));
				textBox12->AppendText(String::Format("\r\nЧисло делений шага = {0}", count_c1));
				textBox12->AppendText(String::Format("\r\nЧисло умножений шага c2 = {0}", count_c2));
				textBox12->AppendText(String::Format("\r\nМакс h_i = {0} в x = {1}", max_h, Math::Round(x_max_h, 3)));
				textBox12->AppendText(String::Format("\r\nМин h_i = {0} в x = {1}", min_h, Math::Round(x_min_h, 3)));
				textBox12->AppendText(String::Format("\r\nМакс |U_i - V1_i| = {0} в x = {1}", max_abs_error, Math::Round(x_max_abs_error, 3)));
			}
			else
			{
				// Без контроля погрешности
				dataGridView1->Rows->Clear();
				v_list->Clear();
				add_data_to_row(dataGridView1, 0, x0, v, v_half, 0.0, 0.0, 0.0, 0, 0, u_test(x0, u0), 0.0);
				v_list->Add(x0, v);

				// Список точек
				int N = Convert::ToInt32(textBox9->Text);
				
				int i = 1;
				int n = 1;
				double a = Math::Pow(2, 4);
				for (double x = xmin + h; x <= xmax + h / 1000.0; x += h)
				{
					if (n >= N)
					{
						break;
					}
					n++;

					double u_i = u_test(x, u0);

					v = RK4_test(x - h, v, h);

					double tmp = RK4_test(x - h, v_half, h / 2);
					v_half = RK4_test(x - h + h / 2, tmp, h / 2);

					double s = Math::Abs(v_half - v) / (a - 1);

					v_list->Add(x, v);

					add_data_to_row(dataGridView1, i, x, v, v_half, v - v_half, s * a, h, 0, 0, u_i, Math::Abs(u_i - v));

					++i;
				}

				double x_n = 0;
				DataGridViewCell^ lastCell = dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells[0];
				if (lastCell->Value != nullptr)
				{
					x_n = Convert::ToDouble(lastCell->Value);
				}

				double max_olp = Math::Abs(Convert::ToDouble(dataGridView1->Rows[0]->Cells[4]->Value));

				double max_U = Convert::ToDouble(dataGridView1->Rows[0]->Cells[8]->Value);
				double max_V_1 = Convert::ToDouble(dataGridView1->Rows[0]->Cells[1]->Value);
				double max_abs_error = Math::Abs(max_U - max_V_1);
				double x_max_abs_error = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);


				for (int i = 1; i < dataGridView1->RowCount; i++)
				{
					double m = Math::Abs(Convert::ToDouble(dataGridView1->Rows[i]->Cells[4]->Value));

					double m_U = Convert::ToDouble(dataGridView1->Rows[i]->Cells[8]->Value);
					double m_V_1 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
					double m_abs_error = Math::Abs(m_U - m_V_1);
					double x_m_abs_error = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);

					if (m > max_olp)
					{
						max_olp = m;
					}

					if (m_abs_error > max_abs_error)
					{
						max_abs_error = m_abs_error;
						x_max_abs_error = x_m_abs_error;
					}
				}

				//results
				textBox12->Text = L"Результаты:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nМакс ОЛП = {0}", max_olp));
				textBox12->AppendText(String::Format("\r\nмакс |U_i - V1_i| = {0} в x = {1}", max_abs_error, Math::Round(x_max_abs_error, 3)));

				//zedGraphControl1->Invalidate();
			}
		}
		else if (radioButton2->Checked) // Основная задача 1
		{
			if (checkBox1->Checked)
			{
				// С контролем погрешности для основной задачи
				dataGridView1->Rows->Clear();
				v_list->Clear();
				add_data_to_row(dataGridView1, 0, x0, v, v_half, 0.0, 0.0, h, 0, 0, 0.0, 0.0);
				v_list->Add(x0, v);

				// Параметры
				double eps = Convert::ToDouble(textBox8->Text);
				int i = 1;
				int N = Convert::ToInt32(textBox9->Text);
				int n = 1;
				double a = Math::Pow(2, 4);

				// ДЛЯ СТАТИСТИКИ
				double max_olp = 0.0;
				double max_h = h;
				double min_h = h;
				double x_max_h = x0;
				double x_min_h = x0;
				double max_abs_error = 0.0;
				double x_max_abs_error = x0;

				int count_c1 = 0; // счетчик уменьшений шага
				int count_c2 = 0; // счетчик увеличений шага

				double x = xmin;
				double next_x = xmin + h;

				while (next_x <= xmax + h / 1000.0 && n < N)
				{
					if (h < 1e-7)
					{
						break;
					}

					// Вычисляем решения
					double v1 = RK4_main1(x, v, h);
					if (v1 > 1000) {
						break;
					}

					double tmp = RK4_main1(x, v_half, h / 2);
					double v2 = RK4_main1(x + h / 2, tmp, h / 2);

					double s = Math::Abs(v2 - v1) / (a - 1); // локальная погрешность
					double scaled_error = s * a; // оценка погрешности

					// ОБНОВЛЯЕМ СТАТИСТИКУ
					if (scaled_error > max_olp) max_olp = scaled_error;
					if (h > max_h) { max_h = h; x_max_h = x; }
					if (h < min_h) { min_h = h; x_min_h = x; }
					double current_abs_error = Math::Abs(v1 - v2);
					if (current_abs_error > max_abs_error) {
						max_abs_error = current_abs_error;
						x_max_abs_error = x;
					}

					if ((s >= (eps / Math::Pow(2, 5))) && (s <= eps))
					{
						// Шаг принимается без изменения
						v = v1;
						v_half = v2;

						add_data_to_row(dataGridView1, i, next_x, v, v_half, v - v_half, scaled_error, h, 0, 0, 0.0, 0.0);
						v_list->Add(next_x, v);

						x = next_x;
						next_x = x + h;
						//x += h;
						n++;
						i++;
					}
					else if (s < (eps / Math::Pow(2, 5)))
					{
						// Увеличиваем шаг
						v = v1;
						v_half = v2;

						add_data_to_row(dataGridView1, i, next_x, v, v_half, v - v_half, scaled_error, h, 0, 1, 0.0, 0.0);
						v_list->Add(next_x, v);

						x = next_x;
						h *= 2;

						next_x = x + h;
						count_c2++;
						//x += h;
						n++;
						i++;
					}
					else if (s > eps)
					{
						// Уменьшаем шаг
						add_data_to_row(dataGridView1, i, next_x, v, v_half, v - v_half, scaled_error, h, 1, 0, 0.0, 0.0);

						i++;
						h /= 2;
						next_x = x + h;
						count_c1++;
					}
				}

				// Вычисление x_n
				double x_n = 0;
				DataGridViewCell^ lastCell = dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells[0];
				if (lastCell->Value != nullptr)
				{
					x_n = Convert::ToDouble(lastCell->Value);
				}

				// ВЫВОД РЕЗУЛЬТАТОВ
				textBox12->Text = L"Результаты:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nМакс OLP = {0}", max_olp));
				textBox12->AppendText(String::Format("\r\nЧисло делений шага = {0}", count_c1));
				textBox12->AppendText(String::Format("\r\nЧисло умножений шага = {0}", count_c2));
				textBox12->AppendText(String::Format("\r\nМакс h_i = {0} в x = {1}", max_h, Math::Round(x_max_h, 3)));
				textBox12->AppendText(String::Format("\r\nМин h_i = {0} в x = {1}", min_h, Math::Round(x_min_h, 3)));
			}
			else
			{
				// Без контроля погрешности для основной задачи 1
				dataGridView1->Rows->Clear();
				v_list->Clear();
				add_data_to_row(dataGridView1, 0, x0, v, v_half, 0.0, 0.0, 0.0, 0, 0, 0.0, 0.0);
				v_list->Add(x0, v);

				// Список точек
				int i = 1;
				int N = Convert::ToInt32(textBox9->Text);
				int n = 1;
				double a = Math::Pow(2, 4);

				for (double x = xmin + h; x <= xmax + h / 1000.0; x += h)
				{
					if (n >= N)
					{
						break;
					}
					n++;

					// Вычисляем приближенное решение
					v = RK4_main1(x - h, v, h);

					if (v > 1000) {
						break;
					}

					// Вычисляем решение с половинным шагом для оценки погрешности
					double tmp = RK4_main1(x - h, v_half, h / 2);
					v_half = RK4_main1(x - h + h / 2, tmp, h / 2);

					double s = Math::Abs(v_half - v) / (a - 1);

					add_data_to_row(dataGridView1, i, x, v, v_half, v - v_half, s * a, h, 0, 0, 0.0, 0.0);
					v_list->Add(x, v);

					++i;
				}

				double x_n = 0;
				DataGridViewCell^ lastCell = dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells[0];
				if (lastCell->Value != nullptr)
				{
					x_n = Convert::ToDouble(lastCell->Value);
				}

				double max_olp = Math::Abs(Convert::ToDouble(dataGridView1->Rows[0]->Cells[4]->Value));

				for (int i = 1; i < dataGridView1->RowCount; i++)
				{
					double m = Math::Abs(Convert::ToDouble(dataGridView1->Rows[i]->Cells[4]->Value));
					if (m > max_olp)
					{
						max_olp = m;
					}
				}

				//results
				textBox12->Text = L"Результаты:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nМакс ОЛП = {0}", max_olp));
				textBox12->AppendText(String::Format("\r\nЧисло делений шага = {0}", 0));
				textBox12->AppendText(String::Format("\r\nЧисло умножений шага = {0}", 0));
			}
		}
		else if (radioButton3->Checked) // Основная задача №2
		{
			// Получаем параметры
			double a_param = Convert::ToDouble(textBoxA->Text);
			double b_param = Convert::ToDouble(textBoxB->Text);
			double up0 = Convert::ToDouble(textBox10->Text);      // u'(0)

			if (checkBox1->Checked)
			{
				// С контролем погрешности
				dataGridView1->Rows->Clear();
				v1_list->Clear();
				v2_list->Clear();
				v1_v2_list->Clear();
				add_data_to_row(dataGridView1, 0, x0, u0, up0, 0.0, 0.0, 0.0, 0, 0, 0.0, 0.0);

				// Начальные значения
				double v1 = u0;   // u
				double v2 = up0;  // u'
				double v1_half = u0;
				double v2_half = up0;

				v1_list->Add(x0, u0);
				v2_list->Add(x0, up0);
				v1_v2_list->Add(u0, up0);

				// Список точек
				double eps = Convert::ToDouble(textBox8->Text);
				int i = 1;
				int N = Convert::ToInt32(textBox9->Text);
				int n = 1;
				double a = Math::Pow(2, 4);

				int count_c1 = 0; //div
				int count_c2 = 0; //mult

				double x = xmin;
				double next_x = xmin + h;

				while (next_x <= xmax + h / 1000.0 && n < N)
				{
					if (h < 1e-7)
					{
						break;
					}

					// Вычисляем с полным шагом
					double v1_new = v1;
					double v2_new = v2;
					RK4_main2_system(x - h, v1_new, v2_new, h, a_param, b_param);

					// Вычисляем с двумя половинными шагами
					double v1_tmp = v1_half;
					double v2_tmp = v2_half;
					RK4_main2_system(x - h, v1_tmp, v2_tmp, h / 2, a_param, b_param);
					double v1_half_new = v1_tmp;
					double v2_half_new = v2_tmp;
					RK4_main2_system(x - h + h / 2, v1_half_new, v2_half_new, h / 2, a_param, b_param);

					// Оценка погрешности (максимум из двух компонент)
					double s1 = Math::Abs(v1_half_new - v1_new) / (a - 1);
					double s2 = Math::Abs(v2_half_new - v2_new) / (a - 1);
					double s = Math::Max(s1, s2);

					if ((s >= (eps / Math::Pow(2, 5))) && (s <= eps))
					{
						// Шаг принимается
						v1 = v1_new;
						v2 = v2_new;
						v1_half = v1_half_new;
						v2_half = v2_half_new;

						add_data_to_row(dataGridView1, i, next_x, v1, v2, v1 - v1_half, s * a, h, 0, 0, 0.0, 0.0);
						v1_list->Add(next_x, v1);
						v2_list->Add(next_x, v2);
						v1_v2_list->Add(v1, v2);

						x = next_x;
						next_x = x + h;

						n++;
						i++;
					}
					else if (s < (eps / Math::Pow(2, 5)))
					{
						// Увеличиваем шаг
						v1 = v1_new;
						v2 = v2_new;
						v1_half = v1_half_new;
						v2_half = v2_half_new;

						add_data_to_row(dataGridView1, i, next_x, v1, v2, v1 - v1_half, s * a, h, 0, 1, 0.0, 0.0);
						v1_list->Add(next_x, v1);
						v2_list->Add(next_x, v2);
						v1_v2_list->Add(v1, v2);

						x = next_x;
						h *= 2;
						next_x = x + h;
						count_c2++;
						n++;
						i++;
					}
					else if (s > eps)
					{
						// Уменьшаем шаг
						add_data_to_row(dataGridView1, i, next_x, v1, v2, v1 - v1_half, s * a, h, 1, 0, 0.0, 0.0);

						i++;
						h /= 2;
						next_x = x + h;
						count_c1++;
					}
				}

				// Вычисление статистики
				double x_n = 0;
				DataGridViewCell^ lastCell = dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells[0];
				if (lastCell->Value != nullptr)
				{
					x_n = Convert::ToDouble(lastCell->Value);
				}

				double max_olp = Math::Abs(Convert::ToDouble(dataGridView1->Rows[0]->Cells[4]->Value));
				double max_h = Convert::ToDouble(dataGridView1->Rows[0]->Cells[5]->Value);
				double x_max_h = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);
				double min_h = Convert::ToDouble(dataGridView1->Rows[0]->Cells[5]->Value);
				double x_min_h = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);

				for (int i = 1; i < dataGridView1->RowCount; i++)
				{
					double c1 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[6]->Value);
					if (c1 == 0.0)
					{
						double m = Math::Abs(Convert::ToDouble(dataGridView1->Rows[i]->Cells[4]->Value));
						double ma_h = Convert::ToDouble(dataGridView1->Rows[i]->Cells[5]->Value);
						double x_ma_h = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
						double mi_h = Convert::ToDouble(dataGridView1->Rows[i]->Cells[5]->Value);
						double x_mi_h = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);

						if (m > max_olp) max_olp = m;
						if (ma_h > max_h)
						{
							max_h = ma_h;
							x_max_h = x_ma_h;
						}
						if (mi_h < min_h)
						{
							min_h = mi_h;
							x_min_h = x_mi_h;
						}
					}
				}

				// Вывод результатов
				textBox12->Text = L"Результаты:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nМакс ОЛП = {0}", max_olp));
				textBox12->AppendText(String::Format("\r\nЧисло делений шага = {0}", count_c1));
				textBox12->AppendText(String::Format("\r\nЧисло умножений шага = {0}", count_c2));
				textBox12->AppendText(String::Format("\r\nМакс h_i = {0} в x = {1}", max_h, Math::Round(x_max_h, 3)));
				textBox12->AppendText(String::Format("\r\nМин h_i = {0} в x = {1}", min_h, Math::Round(x_min_h, 3)));
			}
			else
			{
				// Без контроля погрешности
				dataGridView1->Rows->Clear();
				v1_list->Clear();
				v2_list->Clear();
				v1_v2_list->Clear();
				add_data_to_row(dataGridView1, 0, x0, u0, up0, 0.0, 0.0, 0.0, 0, 0, 0.0, 0.0);

				// Начальные значения
				double v1 = u0;
				double v2 = up0;
				double v1_half = u0;
				double v2_half = up0;

				v1_list->Add(x0, u0);
				v2_list->Add(x0, up0);
				v1_v2_list->Add(u0, up0);

				// Список точек
				int i = 1;
				int N = Convert::ToInt32(textBox9->Text);
				int n = 1;
				double a = Math::Pow(2, 4);

				for (double x = xmin + h; x <= xmax + h / 1000.0; x += h)
				{
					if (n >= N) break;
					n++;

					// Вычисляем с полным шагом
					RK4_main2_system(x - h, v1, v2, h, a_param, b_param);

					// Вычисляем с двумя половинными шагами
					double v1_tmp = v1_half;
					double v2_tmp = v2_half;
					RK4_main2_system(x - h, v1_tmp, v2_tmp, h / 2, a_param, b_param);
					v1_half = v1_tmp;
					v2_half = v2_tmp;
					RK4_main2_system(x - h + h / 2, v1_half, v2_half, h / 2, a_param, b_param);

					// Оценка погрешности
					double s1 = Math::Abs(v1_half - v1) / (a - 1);
					double s2 = Math::Abs(v2_half - v2) / (a - 1);
					double s = Math::Max(s1, s2);

					add_data_to_row(dataGridView1, i, x, v1, v2, v1 - v1_half, s * a, h, 0, 0, 0.0, 0.0);
					v1_list->Add(x, v1);
					v2_list->Add(x, v2);
					v1_v2_list->Add(v1, v2);

					i++;
				}

				double x_n = 0;
				DataGridViewCell^ lastCell = dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells[0];
				if (lastCell->Value != nullptr)
				{
					x_n = Convert::ToDouble(lastCell->Value);
				}

				double max_olp = Math::Abs(Convert::ToDouble(dataGridView1->Rows[0]->Cells[4]->Value));
				for (int i = 1; i < dataGridView1->RowCount; i++)
				{
					double m = Math::Abs(Convert::ToDouble(dataGridView1->Rows[i]->Cells[4]->Value));
					if (m > max_olp) max_olp = m;
				}

				textBox12->Text = L"Результаты:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nМакс ОЛП = {0}", max_olp));
			}
		}
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (radioButton1->Checked)
		{
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();
			panel->Title->Text = "Тестовое задание";
			checkBox2->Enabled = true;

			zedGraphControl1->Invalidate();
		}
	}

	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (radioButton2->Checked)
		{
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();
			dataGridView1->Rows->Clear();
			panel->Title->Text = "Основное задание 1";
			checkBox2->Enabled = false;

			zedGraphControl1->Invalidate();
		}
	}

	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (radioButton3->Checked)
		{
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();
			dataGridView1->Rows->Clear();
			panel->Title->Text = "Основное задание 2";
			checkBox2->Enabled = false;

			// Показываем панель для задачи 2
			panelTask2->Visible = true;

			zedGraphControl1->Invalidate();
		}
	}
	private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
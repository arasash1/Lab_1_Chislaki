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
			this->button1->Text = L"Draw";
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
			this->button2->Text = L"Zoom";
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
			this->radioButton1->Size = System::Drawing::Size(74, 20);
			this->radioButton1->TabIndex = 14;
			this->radioButton1->Text = L"test task";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(231, 582);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(92, 20);
			this->radioButton2->TabIndex = 15;
			this->radioButton2->Text = L"main task 1";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(386, 582);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(92, 20);
			this->radioButton3->TabIndex = 16;
			this->radioButton3->Text = L"main task 2";
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
			this->checkBox1->Size = System::Drawing::Size(52, 20);
			this->checkBox1->TabIndex = 33;
			this->checkBox1->Text = L"OLP";
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
			this->button3->Text = L"Calculate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(580, 536);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(139, 20);
			this->checkBox2->TabIndex = 35;
			this->checkBox2->Text = L"draw exact solution";
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
			this->panelTask2->Location = System::Drawing::Point(1323, 448);
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
			this->label15->Size = System::Drawing::Size(79, 16);
			this->label15->TabIndex = 41;
			this->label15->Text = L"Graph Type";
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

		void BuildMain2Graphs()
		{
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();

			if (!radioButton3->Checked) return;

			String^ selectedGraph = comboBoxGraphType->Text;
			double a_param = Convert::ToDouble(textBoxA->Text);
			double b_param = Convert::ToDouble(textBoxB->Text);

			PointPairList^ graphList = gcnew PointPairList();

			for (int i = 0; i < dataGridView1->Rows->Count; i++)
			{
				if (dataGridView1->Rows[i]->Cells[0] != nullptr &&
					dataGridView1->Rows[i]->Cells[1] != nullptr &&
					dataGridView1->Rows[i]->Cells[2] != nullptr)
				{
					double x = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
					double u1 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);  // u(x)
					double u2 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value);  // u'(x)

					if (selectedGraph == "(x, u1(x))")
					{
						graphList->Add(x, u1);
						panel->XAxis->Title->Text = "x";
						panel->YAxis->Title->Text = "u1(x)";
					}
					else if (selectedGraph == "(x, u2(x))")
					{
						graphList->Add(x, u2);
						panel->XAxis->Title->Text = "x";
						panel->YAxis->Title->Text = "u2(x)";
					}
					else if (selectedGraph == "(u1(x), u2(x))")
					{
						graphList->Add(u1, u2);
						panel->XAxis->Title->Text = "u1(x)";
						panel->YAxis->Title->Text = "u2(x)";
					}
				}
			}

			if (graphList->Count > 0)
			{
				String^ curveTitle = String::Format("Main Task 2 (a={0}, b={1}) - {2}",
					a_param, b_param, selectedGraph);
				LineItem^ curve = panel->AddCurve(curveTitle, graphList, Color::Blue, SymbolType::None);
				curve->Line->Width = 2.0f;

				if (selectedGraph == "(u1(x), u2(x))")
				{
					panel->Title->Text = "Phase Portrait: u1(x) vs u2(x)";
				}
				else
				{
					panel->Title->Text = "Main Task 2: " + selectedGraph;
				}

				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();
			}
		}
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
			return 1.0 / pow(1.0 + x * x, 1.0 / 3.0);
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

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) //draw
	{
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();

		// Если выбрана задача 2, используем специальную функцию построения графиков
		if (radioButton3->Checked)
		{
			BuildMain2Graphs();
			return;
		}

		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);

		double h = Convert::ToDouble(textBox3->Text);

		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;

		PointPairList^ v_list = gcnew PointPairList();

		for (int i = 0; i < dataGridView1->Rows->Count; i++)
		{
			if (dataGridView1->Rows[i]->Cells[0] != nullptr && dataGridView1->Rows[i]->Cells[1] != nullptr)
			{
				double x_i = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
				double v_i = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);

				double c1 = 0.0, c2 = 0.0;
				if (dataGridView1->Rows[i]->Cells[6]->Value != nullptr)
					c1 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[6]->Value);

				if ((c1 == 0.0 && c2 == 0.0))
					v_list->Add(x_i, v_i);
			}
		}

		LineItem^ Curve1 = panel->AddCurve("Numerical solution", v_list, Color::Red, SymbolType::HDash);
		Curve1->Line->Width = 2.0f;

		v_list->Sort();

		if (radioButton1->Checked && checkBox2->Checked)
		{
			//panel->CurveList->Clear();
			PointPairList^ u_list = gcnew PointPairList();

			int N = Convert::ToInt32(textBox9->Text);
			int n = 1;

			double x0 = 0.0;
			double u0 = Convert::ToDouble(textBox11->Text);

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
				dataGridView1->AllowUserToAddRows = false;
				dataGridView1->Rows->Clear();
				dataGridView1->Rows->Add();
				dataGridView1->Rows[0]->Cells[0]->Value = Math::Round(x0, 3);
				dataGridView1->Rows[0]->Cells[1]->Value = v;
				dataGridView1->Rows[0]->Cells[2]->Value = v_half;
				dataGridView1->Rows[0]->Cells[3]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[4]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[5]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[6]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[7]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[8]->Value = u_test(x0, u0);
				dataGridView1->Rows[0]->Cells[9]->Value = 0.0;

				// Список точек
				double eps = Convert::ToDouble(textBox8->Text);
				int i = 1;
				int N = Convert::ToInt32(textBox9->Text);
				int n = 1;
				double a = Math::Pow(2, 4);
				int count_c1 = 0; //div
				int count_c2 = 0; //mult

				double x = xmin + h;

				while (x <= xmax + h / 1000.0 && n < N)
				{
					double u_i = u_test(x, u0);

					double v1 = RK4_test(x - h, v, h);

					double tmp = RK4_test(x - h, v_half, h / 2);
					double v2 = RK4_test(x - h + h / 2, tmp, h / 2);

					double s = Math::Abs(v2 - v1) / (a - 1);

					if ((s >= (eps / Math::Pow(2, 5))) && (s <= eps))
					{
						v = v1;
						v_half = v2;

						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3);
						dataGridView1->Rows[i]->Cells[1]->Value = v;
						dataGridView1->Rows[i]->Cells[2]->Value = v_half;
						dataGridView1->Rows[i]->Cells[3]->Value = v - v_half;
						dataGridView1->Rows[i]->Cells[4]->Value = s * a;
						dataGridView1->Rows[i]->Cells[5]->Value = h;
						dataGridView1->Rows[i]->Cells[6]->Value = 0.0;
						dataGridView1->Rows[i]->Cells[7]->Value = 0.0;
						dataGridView1->Rows[i]->Cells[8]->Value = u_i;
						dataGridView1->Rows[i]->Cells[9]->Value = Math::Abs(u_i - v);

						x += h;
						n++;
						i++;
					}
					else if (s < (eps / Math::Pow(2, 5)))
					{
						v = v1;
						v_half = v2;

						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3);
						dataGridView1->Rows[i]->Cells[1]->Value = v;
						dataGridView1->Rows[i]->Cells[2]->Value = v_half;
						dataGridView1->Rows[i]->Cells[3]->Value = v - v_half;
						dataGridView1->Rows[i]->Cells[4]->Value = s * a;
						dataGridView1->Rows[i]->Cells[5]->Value = h;
						dataGridView1->Rows[i]->Cells[6]->Value = 0.0;
						dataGridView1->Rows[i]->Cells[7]->Value = 1.0;
						dataGridView1->Rows[i]->Cells[8]->Value = u_i;
						dataGridView1->Rows[i]->Cells[9]->Value = Math::Abs(u_i - v);

						h *= 2;
						count_c2++;
						x += h;
						n++;
						i++;
					}
					else if (s > eps)
					{
						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3);
						dataGridView1->Rows[i]->Cells[1]->Value = v;
						dataGridView1->Rows[i]->Cells[2]->Value = v_half;
						dataGridView1->Rows[i]->Cells[3]->Value = v - v_half;
						dataGridView1->Rows[i]->Cells[4]->Value = s * a;
						dataGridView1->Rows[i]->Cells[5]->Value = h;
						dataGridView1->Rows[i]->Cells[6]->Value = 1.0;
						dataGridView1->Rows[i]->Cells[7]->Value = 0.0;
						dataGridView1->Rows[i]->Cells[8]->Value = u_i;
						dataGridView1->Rows[i]->Cells[9]->Value = Math::Abs(u_i - v);

						i++;

						h /= 2;
						count_c1++;

						continue;
					}
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

						double m_U = Convert::ToDouble(dataGridView1->Rows[i]->Cells[8]->Value);
						double m_V_1 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
						double m_abs_error = Math::Abs(m_U - m_V_1);
						double x_m_abs_error = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);

						double ma_h = Convert::ToDouble(dataGridView1->Rows[i]->Cells[5]->Value);
						double x_ma_h = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
						double mi_h = Convert::ToDouble(dataGridView1->Rows[i]->Cells[5]->Value);
						double x_mi_h = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);



						if (m > max_olp)
						{
							max_olp = m;
						}

						if (m_abs_error > max_abs_error)
						{
							max_abs_error = m_abs_error;
							x_max_abs_error = x_m_abs_error;
						}

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

				//results
				textBox12->Text = L"Results:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nMax OLP = {0}", max_olp));
				textBox12->AppendText(String::Format("\r\nCount c1 = {0}", count_c1));
				textBox12->AppendText(String::Format("\r\nCount c2 = {0}", count_c2));
				textBox12->AppendText(String::Format("\r\nMax h_i = {0} in x = {1}", max_h, x_max_h));
				textBox12->AppendText(String::Format("\r\nMin h_i = {0} in x = {1}", min_h, x_min_h));
				textBox12->AppendText(String::Format("\r\nMax |U_i - V1_i| = {0} in x = {1}", max_abs_error, x_max_abs_error));

				zedGraphControl1->Invalidate();
			}
			else
			{
				// Без контроля погрешности
				dataGridView1->AllowUserToAddRows = false;
				dataGridView1->Rows->Clear();
				dataGridView1->Rows->Add();
				dataGridView1->Rows[0]->Cells[0]->Value = Math::Round(x0, 3);
				dataGridView1->Rows[0]->Cells[8]->Value = u_test(x0, u0);
				dataGridView1->Rows[0]->Cells[1]->Value = v;
				dataGridView1->Rows[0]->Cells[2]->Value = v_half;
				dataGridView1->Rows[0]->Cells[3]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[4]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[5]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[9]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[6]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[7]->Value = 0.0;

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
					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3);
					dataGridView1->Rows[i]->Cells[6]->Value = 0.0;
					dataGridView1->Rows[i]->Cells[7]->Value = 0.0;

					double u_i = u_test(x, u0);
					dataGridView1->Rows[i]->Cells[8]->Value = u_i;

					v = RK4_test(x - h, v, h);

					double tmp = RK4_test(x - h, v_half, h / 2);
					v_half = RK4_test(x - h + h / 2, tmp, h / 2);

					double s = Math::Abs(v_half - v) / (a - 1);

					dataGridView1->Rows[i]->Cells[5]->Value = h;
					dataGridView1->Rows[i]->Cells[1]->Value = v;
					dataGridView1->Rows[i]->Cells[2]->Value = v_half;
					dataGridView1->Rows[i]->Cells[3]->Value = v - v_half;
					dataGridView1->Rows[i]->Cells[4]->Value = s * a;
					dataGridView1->Rows[i]->Cells[9]->Value = Math::Abs(u_i - v);

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
				textBox12->Text = L"Results:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nMax OLP = {0}", max_olp));
				textBox12->AppendText(String::Format("\r\nMax |U_i - V1_i| = {0} in x = {1}", max_abs_error, x_max_abs_error));

				zedGraphControl1->Invalidate();
			}
		}
		else if (radioButton2->Checked) // Основная задача 1
		{
			if (checkBox1->Checked)
			{
				// С контролем погрешности для основной задачи
				dataGridView1->AllowUserToAddRows = false;
				dataGridView1->Rows->Clear();
				dataGridView1->Rows->Add();

				// НАЧАЛЬНАЯ ТОЧКА
				dataGridView1->Rows[0]->Cells[0]->Value = Math::Round(x0, 3); // X
				dataGridView1->Rows[0]->Cells[1]->Value = v;                  // V_1
				dataGridView1->Rows[0]->Cells[2]->Value = v_half;             // V_2
				dataGridView1->Rows[0]->Cells[3]->Value = 0.0;                // V_1_minus_V_2
				dataGridView1->Rows[0]->Cells[4]->Value = 0.0;                // OLP
				dataGridView1->Rows[0]->Cells[5]->Value = h;                  // h
				dataGridView1->Rows[0]->Cells[6]->Value = 0.0;                // C1 (флаг уменьшения шага)
				dataGridView1->Rows[0]->Cells[7]->Value = 0.0;                // C2 (флаг увеличения шага)
				dataGridView1->Rows[0]->Cells[8]->Value = 0.0;                // U (нет точного решения)
				dataGridView1->Rows[0]->Cells[9]->Value = 0.0;                // U_minus_V_1

				// Параметры
				double eps = Convert::ToDouble(textBox8->Text);
				int i = 1;
				int N = Convert::ToInt32(textBox9->Text);
				int n = 1;
				double a = Math::Pow(2, 4);
				int count_c1 = 0; // счетчик уменьшений шага
				int count_c2 = 0; // счетчик увеличений шага

				double x = xmin + h;

				// ДЛЯ СТАТИСТИКИ
				double max_olp = 0.0;
				double max_h = h;
				double min_h = h;
				double x_max_h = x0;
				double x_min_h = x0;
				double max_abs_error = 0.0;
				double x_max_abs_error = x0;

				// ДЛЯ ГРАФИКОВ
				PointPairList^ points_V1 = gcnew PointPairList();
				PointPairList^ points_V2 = gcnew PointPairList();
				PointPairList^ points_error = gcnew PointPairList();

				points_V1->Add(x0, v);
				points_V2->Add(x0, v_half);
				points_error->Add(x0, 0.0);

				while (x <= xmax + h / 1000.0 && n < N)
				{
					// Вычисляем решения
					double v1 = RK4_main1(x - h, v, h);
					double tmp = RK4_main1(x - h, v_half, h / 2);
					double v2 = RK4_main1(x - h + h / 2, tmp, h / 2);

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

						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3); // X
						dataGridView1->Rows[i]->Cells[1]->Value = v;                  // V_1
						dataGridView1->Rows[i]->Cells[2]->Value = v_half;             // V_2
						dataGridView1->Rows[i]->Cells[3]->Value = v - v_half;         // V_1_minus_V_2
						dataGridView1->Rows[i]->Cells[4]->Value = scaled_error;       // OLP
						dataGridView1->Rows[i]->Cells[5]->Value = h;                  // h
						dataGridView1->Rows[i]->Cells[6]->Value = 0.0;                // C1 = 0 (без уменьшения)
						dataGridView1->Rows[i]->Cells[7]->Value = 0.0;                // C2 = 0 (без увеличения)
						dataGridView1->Rows[i]->Cells[8]->Value = 0.0;                // U
						dataGridView1->Rows[i]->Cells[9]->Value = 0.0;                // U_minus_V_1

						// ДОБАВЛЯЕМ ТОЧКИ НА ГРАФИКИ
						points_V1->Add(x, v);
						points_V2->Add(x, v_half);
						points_error->Add(x, scaled_error);

						x += h;
						n++;
						i++;
					}
					else if (s < (eps / Math::Pow(2, 5)))
					{
						// Увеличиваем шаг
						v = v1;
						v_half = v2;

						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3); // X
						dataGridView1->Rows[i]->Cells[1]->Value = v;                  // V_1
						dataGridView1->Rows[i]->Cells[2]->Value = v_half;             // V_2
						dataGridView1->Rows[i]->Cells[3]->Value = v - v_half;         // V_1_minus_V_2
						dataGridView1->Rows[i]->Cells[4]->Value = scaled_error;       // OLP
						dataGridView1->Rows[i]->Cells[5]->Value = h;                  // h
						dataGridView1->Rows[i]->Cells[6]->Value = 0.0;                // C1 = 0 (без уменьшения)
						dataGridView1->Rows[i]->Cells[7]->Value = 1.0;                // C2 = 1 (флаг увеличения)
						dataGridView1->Rows[i]->Cells[8]->Value = 0.0;                // U
						dataGridView1->Rows[i]->Cells[9]->Value = 0.0;                // U_minus_V_1

						// ДОБАВЛЯЕМ ТОЧКИ НА ГРАФИКИ
						points_V1->Add(x, v);
						points_V2->Add(x, v_half);
						points_error->Add(x, scaled_error);

						h *= 2;
						count_c2++;
						x += h;
						n++;
						i++;
					}
					else if (s > eps)
					{
						// Уменьшаем шаг
						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3); // X
						dataGridView1->Rows[i]->Cells[1]->Value = v;                  // V_1
						dataGridView1->Rows[i]->Cells[2]->Value = v_half;             // V_2
						dataGridView1->Rows[i]->Cells[3]->Value = v - v_half;         // V_1_minus_V_2
						dataGridView1->Rows[i]->Cells[4]->Value = scaled_error;       // OLP
						dataGridView1->Rows[i]->Cells[5]->Value = h;                  // h
						dataGridView1->Rows[i]->Cells[6]->Value = 1.0;                // C1 = 1 (флаг уменьшения)
						dataGridView1->Rows[i]->Cells[7]->Value = 0.0;                // C2 = 0 (без увеличения)
						dataGridView1->Rows[i]->Cells[8]->Value = 0.0;                // U
						dataGridView1->Rows[i]->Cells[9]->Value = 0.0;                // U_minus_V_1

						// ДОБАВЛЯЕМ ТОЧКИ НА ГРАФИКИ (даже при неудачном шаге)
						points_V1->Add(x, v);
						points_V2->Add(x, v_half);
						points_error->Add(x, scaled_error);

						i++;
						h /= 2;
						count_c1++;
						continue;
					}
					

				}

				// Вычисление x_n
				double x_n = 0;
				DataGridViewCell^ lastCell = dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells[0];
				if (lastCell->Value != nullptr)
				{
					x_n = Convert::ToDouble(lastCell->Value);
				}

				// ПОСТРОЕНИЕ ГРАФИКОВ
				GraphPane^ pane = zedGraphControl1->GraphPane;
				pane->CurveList->Clear();


				// Настройка графика
				pane->Title->Text = "Основная задача - решение с контролем погрешности";
				pane->XAxis->Title->Text = "x";
				pane->YAxis->Title->Text = "y(x)";
				pane->Legend->IsVisible = true;
				pane->Legend->Position = LegendPos::TopCenter;

				// Обновление графика
				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();

				// ВЫВОД РЕЗУЛЬТАТОВ
				textBox12->Text = L"Results:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nMax OLP = {0}", max_olp));
				textBox12->AppendText(String::Format("\r\nCount c1 = {0}", count_c1));
				textBox12->AppendText(String::Format("\r\nCount c2 = {0}", count_c2));
				textBox12->AppendText(String::Format("\r\nMax h_i = {0} in x = {1}", max_h, x_max_h));
				textBox12->AppendText(String::Format("\r\nMin h_i = {0} in x = {1}", min_h, x_min_h));
				textBox12->AppendText(String::Format("\r\nMax |U_i - V1_i| = {0} in x = {1}", max_abs_error, x_max_abs_error));
				
			}
			else {
				// Без контроля погрешности для основной задачи 1
				dataGridView1->AllowUserToAddRows = false;
				dataGridView1->Rows->Clear();
				dataGridView1->Rows->Add();
				dataGridView1->Rows[0]->Cells[0]->Value = Math::Round(x0, 3);
				dataGridView1->Rows[0]->Cells[1]->Value = v;
				dataGridView1->Rows[0]->Cells[2]->Value = v_half;
				dataGridView1->Rows[0]->Cells[3]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[4]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[5]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[6]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[7]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[8]->Value = 0.0; // Нет точного решения
				dataGridView1->Rows[0]->Cells[9]->Value = 0.0;

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
					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3);
					dataGridView1->Rows[i]->Cells[6]->Value = 0.0;
					dataGridView1->Rows[i]->Cells[7]->Value = 0.0;

					// Вычисляем приближенное решение
					v = RK4_main1(x - h, v, h);

					// Вычисляем решение с половинным шагом для оценки погрешности
					double tmp = RK4_main1(x - h, v_half, h / 2);
					v_half = RK4_main1(x - h + h / 2, tmp, h / 2);

					double s = Math::Abs(v_half - v) / (a - 1);

					dataGridView1->Rows[i]->Cells[5]->Value = h;
					dataGridView1->Rows[i]->Cells[1]->Value = v;
					dataGridView1->Rows[i]->Cells[2]->Value = v_half;
					dataGridView1->Rows[i]->Cells[3]->Value = v - v_half;
					dataGridView1->Rows[i]->Cells[4]->Value = s * a;
					dataGridView1->Rows[i]->Cells[8]->Value = 0.0; // Нет точного решения
					dataGridView1->Rows[i]->Cells[9]->Value = 0.0;

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
				textBox12->Text = L"Results for Main Task 1:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nMax OLP = {0}", max_olp));
				textBox12->AppendText("\r\nNo exact solution available for comparison");

				zedGraphControl1->Invalidate();
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
				dataGridView1->AllowUserToAddRows = false;
				dataGridView1->Rows->Clear();
				dataGridView1->Rows->Add();
				dataGridView1->Rows[0]->Cells[0]->Value = Math::Round(x0, 3);
				dataGridView1->Rows[0]->Cells[1]->Value = u0;      // v1 (u)
				dataGridView1->Rows[0]->Cells[2]->Value = up0;     // v2 (u')
				dataGridView1->Rows[0]->Cells[3]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[4]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[5]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[6]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[7]->Value = 0.0;

				// Начальные значения
				double v1 = u0;   // u
				double v2 = up0;  // u'
				double v1_half = u0;
				double v2_half = up0;

				// Список точек
				double eps = Convert::ToDouble(textBox8->Text);
				int i = 1;
				int N = Convert::ToInt32(textBox9->Text);
				int n = 1;
				double a = Math::Pow(2, 4);
				int count_c1 = 0; //div
				int count_c2 = 0; //mult

				double x = xmin + h;

				while (x <= xmax + h / 1000.0 && n < N)
				{
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

						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3);
						dataGridView1->Rows[i]->Cells[1]->Value = v1;      // u(x)
						dataGridView1->Rows[i]->Cells[2]->Value = v2;      // u'(x)
						dataGridView1->Rows[i]->Cells[3]->Value = v1 - v1_half; // разность для u
						dataGridView1->Rows[i]->Cells[4]->Value = s * a;   // ОЛП
						dataGridView1->Rows[i]->Cells[5]->Value = h;       // шаг
						dataGridView1->Rows[i]->Cells[6]->Value = 0.0;     // C1
						dataGridView1->Rows[i]->Cells[7]->Value = 0.0;     // C2

						x += h;
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

						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3);
						dataGridView1->Rows[i]->Cells[1]->Value = v1;
						dataGridView1->Rows[i]->Cells[2]->Value = v2;
						dataGridView1->Rows[i]->Cells[3]->Value = v1 - v1_half;
						dataGridView1->Rows[i]->Cells[4]->Value = s * a;
						dataGridView1->Rows[i]->Cells[5]->Value = h;
						dataGridView1->Rows[i]->Cells[6]->Value = 0.0;
						dataGridView1->Rows[i]->Cells[7]->Value = 1.0;

						h *= 2;
						count_c2++;
						x += h;
						n++;
						i++;
					}
					else if (s > eps)
					{
						// Уменьшаем шаг
						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3);
						dataGridView1->Rows[i]->Cells[1]->Value = v1;
						dataGridView1->Rows[i]->Cells[2]->Value = v2;
						dataGridView1->Rows[i]->Cells[3]->Value = v1 - v1_half;
						dataGridView1->Rows[i]->Cells[4]->Value = s * a;
						dataGridView1->Rows[i]->Cells[5]->Value = h;
						dataGridView1->Rows[i]->Cells[6]->Value = 1.0;
						dataGridView1->Rows[i]->Cells[7]->Value = 0.0;

						i++;
						h /= 2;
						count_c1++;
						continue;
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
				textBox12->Text = L"Results:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nMax OLP = {0}", max_olp));
				textBox12->AppendText(String::Format("\r\nCount c1 = {0}", count_c1));
				textBox12->AppendText(String::Format("\r\nCount c2 = {0}", count_c2));
				textBox12->AppendText(String::Format("\r\nMax h_i = {0} in x = {1}", max_h, x_max_h));
				textBox12->AppendText(String::Format("\r\nMin h_i = {0} in x = {1}", min_h, x_min_h));

				// Построение графиков будет по кнопке Draw
			}
			else
			{
				// Без контроля погрешности
				dataGridView1->AllowUserToAddRows = false;
				dataGridView1->Rows->Clear();
				dataGridView1->Rows->Add();
				dataGridView1->Rows[0]->Cells[0]->Value = Math::Round(x0, 3);
				dataGridView1->Rows[0]->Cells[1]->Value = u0;
				dataGridView1->Rows[0]->Cells[2]->Value = up0;
				dataGridView1->Rows[0]->Cells[3]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[4]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[5]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[6]->Value = 0.0;
				dataGridView1->Rows[0]->Cells[7]->Value = 0.0;

				// Начальные значения
				double v1 = u0;
				double v2 = up0;
				double v1_half = u0;
				double v2_half = up0;

				// Список точек
				int i = 1;
				int N = Convert::ToInt32(textBox9->Text);
				int n = 1;
				double a = Math::Pow(2, 4);

				for (double x = xmin + h; x <= xmax + h / 1000.0; x += h)
				{
					if (n >= N) break;
					n++;

					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = Math::Round(x, 3);
					dataGridView1->Rows[i]->Cells[6]->Value = 0.0;
					dataGridView1->Rows[i]->Cells[7]->Value = 0.0;

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

					dataGridView1->Rows[i]->Cells[5]->Value = h;
					dataGridView1->Rows[i]->Cells[1]->Value = v1;
					dataGridView1->Rows[i]->Cells[2]->Value = v2;
					dataGridView1->Rows[i]->Cells[3]->Value = v1 - v1_half;
					dataGridView1->Rows[i]->Cells[4]->Value = s * a;

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

				textBox12->Text = L"Results:";
				textBox12->AppendText(String::Format("\r\nn = {0}", n));
				textBox12->AppendText(String::Format("\r\nb - x_n = {0}", xmax - x_n));
				textBox12->AppendText(String::Format("\r\nMax OLP = {0}", max_olp));

			}
		}
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (radioButton1->Checked)
		{
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();
			panel->Title->Text = "Test Task";
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
			panel->Title->Text = "Main Task 1";
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
			panel->Title->Text = "Main Task 2";
			checkBox2->Enabled = false;

			// Показываем панель для задачи 2
			panelTask2->Visible = true;

			zedGraphControl1->Invalidate();
		}
	}
	};
}
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
c_p_voprosov = 1;

        variant_otv_button1_v1 = "�� �������, ������� �� ���������� ���� � �������. ����� ���� ���� ���������� ������ � ������ ��������� ���� ����������� � �������. ";
        variant_otv_button2_v1 = "�� �������, ������� ���������� ������� ����������� ����������� � ������� ������, ������ ������������ � ��������� ���������� �� ��, ��� ��� ����. �� ������ ������ ���������� ������. ���� ���� ���������� ��������� �������, �� �������� �� ����� ��� �������������. ";

        variant_otv_button1_v2 = "��������� ������������� �������, �� ����� ���� ������� � �������������� ������� ����� ���� ������� ����������, ���� ������� ��� �������.";
        variant_otv_button2_v2 = "����� ���������� ������������� ������� � ���� �����, ��� ����� ����������� �� ����� ���������� � ����������. ";

        variant_otv_button1_v3 = "������� �������� �� ���� �� �����������, �� ������� ���������. ��������, ��� ����� ������ � ���, ��� �� ������, ��� ������ � �����������. ";
        variant_otv_button2_v3 = "����� ������ �� �������, ������������� �����, ���� �� ������� ���� �����, �� ������, ��� ��� �� ������� �� �����. ";

        variant_otv_button1_v4 = "�� ������� ���� �������� ���� �������. ";
        variant_otv_button2_v4 = "����� ������ ���������� �� ����� ���������, ���� �� �������� ��������� �� �����, ���, � ���������, ������� � ������ ���������� � ������������� �������� ��������� �� ������ ����. ";

        variant_otv_button1_v5 = "�� �� ����������� � �� �������������� �� ������ ������. ";
        variant_otv_button2_v5 = "���������� ���������� � ����� ������� ��������������� � ���������� ���������� ������� ���� � �������� ���� �� �������. ";

        variant_otv_button1_v6 = "� ���������� �������� �� ������ ����� ����������� �������� �� ���� ��� ������� ���������� � ���������. ";
        variant_otv_button2_v6 = "� ���������� �������� ������������� ������� ������� � ������ ����� �����, ��� ����� �������� � ���� � �������� ��������. ";

        variant_otv_button1_v7 = "�� �������� ����������� ���������� � ���� ��������.";
        variant_otv_button2_v7 = "�� ����������� � ���� �������, �� ���� ������� ���� ���������, ����������� �������� � ����� �����.";

        cap_button1_v1 = "������";
        cap_button2_v1 = "���������";

        cap_button1_v2 = "��������";
        cap_button2_v2 = "�������";

        cap_button1_v3 = "����������";
        cap_button2_v3 = "�������������";

        cap_button1_v4 = "��������";
        cap_button2_v4 = "�����������";

        cap_button1_v5 = "��������";
        cap_button2_v5 = "����������";

        cap_button1_v6 = "����";
        cap_button2_v6 = "����";

        cap_button1_v7 = "�";
        cap_button2_v7 = "������";



}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCanResize(TObject *Sender, int &NewWidth,
      int &NewHeight, bool &Resize)
{
        Resize = False;
}
//---------------------------------------------------------------------------







void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
{
        cap_button1 = SpeedButton1->Caption;

        if(cap_button1==cap_button1_v1){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v1);

        Image2->Picture->LoadFromFile("k_vopr\\h2.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p2.jpg");

        SpeedButton1->Caption = cap_button1_v2;
        SpeedButton2->Caption = cap_button2_v2;
        }

        if(cap_button1==cap_button1_v2){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v2);

        Image2->Picture->LoadFromFile("k_vopr\\h3.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p3.jpg");

        SpeedButton1->Caption = cap_button1_v3;
        SpeedButton2->Caption = cap_button2_v3;
        }

        if(cap_button1==cap_button1_v3){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v3);

        Image2->Picture->LoadFromFile("k_vopr\\h4.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p4.jpg");

        SpeedButton1->Caption = cap_button1_v4;
        SpeedButton2->Caption = cap_button2_v4;
        }

        if(cap_button1==cap_button1_v4){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v4);

        Image2->Picture->LoadFromFile("k_vopr\\h5.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p5.jpg");

        SpeedButton1->Caption = cap_button1_v5;
        SpeedButton2->Caption = cap_button2_v5;
        }

        if(cap_button1==cap_button1_v5){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v5);

        Image2->Picture->LoadFromFile("k_vopr\\h6.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p6.jpg");

        SpeedButton1->Caption = cap_button1_v6;
        SpeedButton2->Caption = cap_button2_v6;
        }

        if(cap_button1==cap_button1_v6){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v6);

        Image2->Picture->LoadFromFile("k_vopr\\h7.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p7.jpg");

        SpeedButton1->Caption = cap_button1_v7;
        SpeedButton2->Caption = cap_button2_v7;
        }

        if(cap_button1==cap_button1_v7){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v7);

        Form2->Close();

        Form1->Caption="���������";

        Form1->Image1->Picture->LoadFromFile("f3.jpg");
        Form1->Image2->Visible=false;

        Form1->RichEdit1->Visible=true;
        }


        c_p_voprosov++;
        Label1->Caption = IntToStr(c_p_voprosov);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{
        cap_button2 = SpeedButton2->Caption;

        if(cap_button2==cap_button2_v1){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v1);

        Image2->Picture->LoadFromFile("k_vopr\\h2.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p2.jpg");

        SpeedButton1->Caption = cap_button1_v2;
        SpeedButton2->Caption = cap_button2_v2;
        }

        if(cap_button2==cap_button2_v2){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v2);

        Image2->Picture->LoadFromFile("k_vopr\\h3.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p3.jpg");

        SpeedButton1->Caption = cap_button1_v3;
        SpeedButton2->Caption = cap_button2_v3;
        }

        if(cap_button2==cap_button2_v3){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v3);

        Image2->Picture->LoadFromFile("k_vopr\\h4.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p4.jpg");

        SpeedButton1->Caption = cap_button1_v4;
        SpeedButton2->Caption = cap_button2_v4;
        }

        if(cap_button2==cap_button2_v4){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v4);

        Image2->Picture->LoadFromFile("k_vopr\\h5.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p5.jpg");

        SpeedButton1->Caption = cap_button1_v5;
        SpeedButton2->Caption = cap_button2_v5;
        }

        if(cap_button2==cap_button2_v5){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v5);

        Image2->Picture->LoadFromFile("k_vopr\\h6.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p6.jpg");

        SpeedButton1->Caption = cap_button1_v6;
        SpeedButton2->Caption = cap_button2_v6;
        }

        if(cap_button2==cap_button2_v6){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v6);

        Image2->Picture->LoadFromFile("k_vopr\\h7.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p7.jpg");

        SpeedButton1->Caption = cap_button1_v7;
        SpeedButton2->Caption = cap_button2_v7;
        }

        if(cap_button2==cap_button2_v7){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v7);

        Form2->Close();

        Form1->Caption="���������";

        Form1->Image1->Picture->LoadFromFile("f3.jpg");
        Form1->Image2->Visible=false;

        Form1->RichEdit1->Visible=true;
        }
        
        c_p_voprosov++;
        Label1->Caption = IntToStr(c_p_voprosov);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormActivate(TObject *Sender)
{
        SpeedButton1->Caption=cap_button1_v1;
        SpeedButton2->Caption=cap_button2_v1;

}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormCloseQuery(TObject *Sender, bool &CanClose)
{

  cap_button1 = SpeedButton1->Caption;
  cap_button2 = SpeedButton2->Caption;
  if(cap_button1==cap_button1_v7&&cap_button2==cap_button2_v7){
  CanClose=true;}
  else{
  CanClose=false;
  }
}
//---------------------------------------------------------------------------


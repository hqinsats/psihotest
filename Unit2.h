//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TLabel *Label1;
        void __fastcall FormCanResize(TObject *Sender, int &NewWidth,
          int &NewHeight, bool &Resize);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);

        //���������� ��� �������� ���������� ��������
        int c_p_voprosov;



        //���������� ����������� ������� �� �������
        String variant_otv_button1_v1;
        String variant_otv_button2_v1;

        String variant_otv_button1_v2;
        String variant_otv_button2_v2;

        String variant_otv_button1_v3;
        String variant_otv_button2_v3;

        String variant_otv_button1_v4;
        String variant_otv_button2_v4;

        String variant_otv_button1_v5;
        String variant_otv_button2_v5;

        String variant_otv_button1_v6;
        String variant_otv_button2_v6;

        String variant_otv_button1_v7;
        String variant_otv_button2_v7;

        //���������� ��� �������� ������
        String cap_button1;
        String cap_button2;

        String cap_button1_v1;
        String cap_button2_v1;

        String cap_button1_v2;
        String cap_button2_v2;

        String cap_button1_v3;
        String cap_button2_v3;

        String cap_button1_v4;
        String cap_button2_v4;

        String cap_button1_v5;
        String cap_button2_v5;

        String cap_button1_v6;
        String cap_button2_v6;

        String cap_button1_v7;
        String cap_button2_v7;
        bool CanClose;



};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif

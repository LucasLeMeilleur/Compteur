//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{



	Label1->Alignment = taCenter;
	Form1->Enabled = false;


	  if (Form2 == NULL)
    {
        Form2 = new TForm2(this);
    }

	Form2->ShowModal();







}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1Click(TObject *Sender)
{
	Nombre++;
	Label1->Caption = Nombre;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image2Click(TObject *Sender)
{
	if(Nombre <= 0){}
	else{
	Nombre--;
	Label1->Caption = Nombre;
    }
}
//---------------------------------------------------------------------------

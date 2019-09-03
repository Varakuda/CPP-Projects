//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"

#include "mmsystem.h"   //это надо для звука файла

#include <SysUtils.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//time_t tm;
int tm;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Label1->Caption = "25:00";
	tm = 25*60;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if (Timer1->Enabled==True) {
		Timer1->Enabled=false;
		Label1->Caption = "25:00";
		Button1->Caption = "Start";
		tm = 25*60;
		} else{
		Timer1->Enabled = true;
		Button1->Caption = "Stop";
		}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	tm = tm - 1;
	//Label1->Caption = tm;
  if (tm%60<10) {
	Label1->Caption = IntToStr(tm/60)+':'+'0'+IntToStr(tm%60);
	} else{
	Label1->Caption = IntToStr(tm/60)+':'+IntToStr(tm%60);}

	if (tm==0) {
	Timer1->Enabled = false;
	Label1->Caption = "End";
	Button1->Caption = "Start";
	tm = 25*60;
	Show();
	WindowState = wsNormal;
	Application->BringToFront();
	PlaySound(L"mus.wav", NULL, SND_ASYNC);    // здесь надо обязательно L ставить, что-то связанное с кодировкой
	}


}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
double summa (int k[], int m )
{
	if (m==0) {
    Form1->Memo1->Lines->Add("base - m="+IntToStr(m)+"  "+"k["+IntToStr(m)+"]="+IntToStr(k[m]));
		return (k[0]);
	}
	else{
		Form1->Memo1->Lines->Add("m="+IntToStr(m)+"  "+"k["+IntToStr(m)+"]="+IntToStr(k[m]));
		return (k[m]+summa(k,m-1));
	}
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int k[]={1,2,3,4,5,6,7,8,9,10};
	int m = 9;
	double zz = summa(k,m);
	AnsiString a;
	for (int i = 0; i < m+1; i++) {
		a+=IntToStr(k[i]);
	}
	Memo1->Lines->Add("fool row - ");
	Memo1->Lines->Add(a);
	Memo1->Lines->Add(zz);
}
//---------------------------------------------------------------------------

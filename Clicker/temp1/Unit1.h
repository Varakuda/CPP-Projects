//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Samples.Spin.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TButton *Button1;
	TMemo *Memo1;
	TSpinButton *SpinButton1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TButton *Button2;
	TLabel *Label3;
	void __fastcall FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall SpinButton1UpClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

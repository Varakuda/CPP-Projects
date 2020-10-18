//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
HHOOK MouseHook;

//---------------------------------------------------------------------------
LRESULT CALLBACK LowLevelMouseProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    if (nCode == HC_ACTION)
        {
            switch (wParam)
                {
                    case WM_LBUTTONDOWN :
												Form1->Memo1->Lines->Add("LEFT BUTTON PRESSED");
											 //	Form1->Memo1->Lines->Add(nCode);
											 //	Form1->Memo1->Lines->Add(wParam);
											 //	Form1->Memo1->Lines->Add(lParam);
												//SetCursorPos(X,Y);

												//��������� ������� �������
												POINT cur_pos;
												GetCursorPos(&cur_pos);
												Form1->Memo1->Lines->Add(cur_pos.x);
												Form1->Memo1->Lines->Add(cur_pos.y);

										break;
										
						 //				case WM_RBUTTONDOWN :
						 //						Form1->Memo1->Lines->Add("RIGHT BUTTON PRESSED");
						 //						Form1->Memo1->Lines->Add(nCode);
						 //           Form1->Memo1->Lines->Add(wParam);
						 //						Form1->Memo1->Lines->Add(lParam);
						 //						break;
            }
        }
    return CallNextHookEx(NULL, nCode, wParam, lParam);
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    MouseHook = SetWindowsHookEx(WH_MOUSE_LL,
        reinterpret_cast<HOOKPROC>(LowLevelMouseProc), HInstance, NULL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
  Label1->Caption = IntToStr(X) + "   " +IntToStr(Y);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormDestroy(TObject *Sender)
{
	UnhookWindowsHookEx(MouseHook);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int x = StrToInt(Edit1->Text), y = StrToInt(Edit2->Text);
	int nx = (1.0 * x / Screen->Width) * 65535;
	int ny = (1.0 * y / Screen->Height) * 65535;
	mouse_event(MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_MOVE, nx, ny, 0, 0);
	mouse_event(MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_LEFTDOWN, nx, ny, 0, 0);
	mouse_event(MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_LEFTUP, nx, ny, 0, 0);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::SpinButton1UpClick(TObject *Sender)
{
  Edit1->Text = StrToInt(Edit1->Text)+1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
  //���� �� ������
	int x = StrToInt(Edit2->Text), y = StrToInt(Edit3->Text);
	int nx = (1.0 * x / Screen->Width) * 65535;
	int ny = (1.0 * y / Screen->Height) * 65535;
	mouse_event(MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_MOVE, nx, ny, 0, 0);
	for (int i = 0; i < 10000; i++) {
		mouse_event(MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_LEFTDOWN, nx, ny, 0, 0);
		mouse_event(MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_LEFTUP, nx, ny, 0, 0);
		Form1->Memo1->Lines->Add(i);
		//Sleep(100);
	}

}
//---------------------------------------------------------------------------


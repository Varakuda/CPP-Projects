object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Clock and Timer'
  ClientHeight = 192
  ClientWidth = 177
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 24
    Width = 113
    Height = 45
    Caption = '25:00'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -37
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 51
    Top = 128
    Width = 75
    Height = 25
    Caption = 'Start'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 74
    Top = 80
  end
end

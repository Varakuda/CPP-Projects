object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 345
  ClientWidth = 331
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnDestroy = FormDestroy
  OnMouseMove = FormMouseMove
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 23
    Top = 129
    Width = 73
    Height = 12
    Caption = 'Label1'
  end
  object Label2: TLabel
    Left = 183
    Top = 129
    Width = 31
    Height = 13
    Caption = 'Label2'
  end
  object Label3: TLabel
    Left = 8
    Top = 63
    Width = 31
    Height = 13
    Caption = 'Label3'
  end
  object Button1: TButton
    Left = 8
    Top = 296
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 8
    Top = 148
    Width = 287
    Height = 142
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssBoth
    TabOrder = 1
  end
  object SpinButton1: TSpinButton
    Left = 135
    Top = 8
    Width = 50
    Height = 49
    DownGlyph.Data = {
      0E010000424D0E01000000000000360000002800000009000000060000000100
      200000000000D800000000000000000000000000000000000000008080000080
      8000008080000080800000808000008080000080800000808000008080000080
      8000008080000080800000808000000000000080800000808000008080000080
      8000008080000080800000808000000000000000000000000000008080000080
      8000008080000080800000808000000000000000000000000000000000000000
      0000008080000080800000808000000000000000000000000000000000000000
      0000000000000000000000808000008080000080800000808000008080000080
      800000808000008080000080800000808000}
    FocusControl = Edit1
    TabOrder = 2
    UpGlyph.Data = {
      0E010000424D0E01000000000000360000002800000009000000060000000100
      200000000000D800000000000000000000000000000000000000008080000080
      8000008080000080800000808000008080000080800000808000008080000080
      8000000000000000000000000000000000000000000000000000000000000080
      8000008080000080800000000000000000000000000000000000000000000080
      8000008080000080800000808000008080000000000000000000000000000080
      8000008080000080800000808000008080000080800000808000000000000080
      8000008080000080800000808000008080000080800000808000008080000080
      800000808000008080000080800000808000}
    OnUpClick = SpinButton1UpClick
  end
  object Edit1: TEdit
    Left = 8
    Top = 8
    Width = 121
    Height = 49
    TabOrder = 3
    Text = '0'
  end
  object Edit2: TEdit
    Left = 9
    Top = 90
    Width = 49
    Height = 21
    TabOrder = 4
    Text = '300'
  end
  object Edit3: TEdit
    Left = 64
    Top = 90
    Width = 41
    Height = 21
    TabOrder = 5
    Text = '300'
  end
  object Button2: TButton
    Left = 111
    Top = 88
    Width = 74
    Height = 25
    Caption = 'Run Clicks'
    TabOrder = 6
    OnClick = Button2Click
  end
end

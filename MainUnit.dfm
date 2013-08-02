object FormMainWindow: TFormMainWindow
  Left = 0
  Top = 0
  Caption = #1060#1048#1057
  ClientHeight = 242
  ClientWidth = 545
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object PageControlMainWndow: TPageControl
    Left = 0
    Top = 0
    Width = 545
    Height = 242
    ActivePage = TabSheetFIS
    Align = alClient
    TabOrder = 0
    object TabSheetFIS: TTabSheet
      Caption = #1060#1048#1057
      object Button1: TButton
        Left = 64
        Top = 128
        Width = 75
        Height = 25
        Caption = 'Button1'
        TabOrder = 0
      end
    end
    object TabSheetDB: TTabSheet
      Caption = #1041#1072#1079#1072' '#1076#1072#1085#1085#1099#1093
      ImageIndex = 1
    end
  end
  object XMLDocument1: TXMLDocument
    Left = 124
    Top = 72
    DOMVendorDesc = 'MSXML'
  end
  object XMLTransformProvider1: TXMLTransformProvider
    Left = 196
    Top = 72
  end
end

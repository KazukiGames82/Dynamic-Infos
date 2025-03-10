[Variables]
; -------------------------------------------------------------------------------
; VariablesData.inc is used to store variables for your app that are not user-specific or user-configurable.
; Variables in this document should be used to control the app's general functionality.
; -------------------------------------------------------------------------------

ItemIconPath=#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Icons\

MyAppVersion=24.1102

; ---------------------------------------
; --- GENERAL

Dynamic_Infos-KazukiGames82___Update=[!UpdateMeterGroup "CustomApp[#Dynamic_Infos-KazukiGames82]Sys" "Droptop\DropdownBar"][!UpdateMeterGroup "SysTray" "Droptop\DropdownBar"][!UpdateMeterGroup "HL" "Droptop\DropdownBar"][!UpdateMeterGroup "NotificationBar" "Droptop\DropdownBar"][!UpdateMeter "TimeCenter" "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Dynamic_Infos-KazukiGames82___Auxiliar_Application_State=([#*Dynamic_Infos-KazukiGames82___Use_Custom_Info*]=0?[#*HideProgramsApp*]:([#*Dynamic_Infos-KazukiGames82___Type_Custom_Info*]=2?1:[#*HideProgramsApp*]))
Dynamic_Infos-KazukiGames82___Auxiliar_Info_Slider=#WebState#

01=1
02=2
03=3
04=4
05=5

NotificationWeight00=#FontWeight#
NotificationWeight01=#FontWeight#
NotificationWeight10=800
NotificationWeight11=#FontWeight#

NotificationTextColor00=[#*TopBarFontColor1*]
NotificationTextColor10=255,255,255
NotificationTextColor01=[#*TopBarFontColor1*]
NotificationTextColor11=[#*TopBarFontColor1*]

DividersWidths=((#TopBarDividerSpace#+#TopBarSectionSpacingX#)*(([#HideApp[#SideAppName[#*SideAppSlot1*]]]=1?0:(([#*HideTopBarDivider1*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot2*]]]=1?0:(([#*HideTopBarDivider2*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot3*]]]=1?0:(([#*HideTopBarDivider3*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot4*]]]=1?0:(([#*HideTopBarDivider4*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot5*]]]=1?0:(([#*HideTopBarDivider5*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot6*]]]=1?0:(([#*HideTopBarDivider6*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot7*]]]=1?0:(([#*HideTopBarDivider7*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot8*]]]=1?0:(([#*HideTopBarDivider8*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot9*]]]=1?0:(([#*HideTopBarDivider9*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot10*]]]=1?0:(([#*HideTopBarDivider10*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot11*]]]=1?0:(([#*HideTopBarDivider11*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot12*]]]=1?0:(([#*HideTopBarDivider12*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot13*]]]=1?0:(([#*HideTopBarDivider13*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot14*]]]=1?0:(([#*HideTopBarDivider14*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot15*]]]=1?0:(([#*HideTopBarDivider15*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot16*]]]=1?0:(([#*HideTopBarDivider16*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot17*]]]=1?0:(([#*HideTopBarDivider17*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot18*]]]=1?0:(([#*HideTopBarDivider18*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot19*]]]=1?0:(([#*HideTopBarDivider19*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot20*]]]=1?0:(([#*HideTopBarDivider20*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot21*]]]=1?0:(([#*HideTopBarDivider21*]-1)*-1))+([#HideApp[#SideAppName[#*SideAppSlot22*]]]=1?0:(([#*HideTopBarDivider22*]-1)*-1))))

; ---------------------------------------
; --- MEASURES

Dynamic_Infos-KazukiGames82___Data_Slider_Set_0=[!SetVariable WebState [MeasureStateWeb] "Droptop\DropdownBar"]
Dynamic_Infos-KazukiGames82___Data_Slider_Set_1=

Dynamic_Infos-KazukiGames82___Data_Slider_Action_00=[!SetVariable Dynamic_Infos-KazukiGames82___Auxiliar_Info_Slider "0" "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Dynamic_Infos-KazukiGames82___Data_Slider_Action_01=[!SetVariable Dynamic_Infos-KazukiGames82___Auxiliar_Info_Slider "1" "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Dynamic_Infos-KazukiGames82___Data_Slider_Action_02=[!SetVariable Dynamic_Infos-KazukiGames82___Auxiliar_Info_Slider "0" "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Dynamic_Infos-KazukiGames82___Data_Slider_Action_10=
Dynamic_Infos-KazukiGames82___Data_Slider_Action_11=
Dynamic_Infos-KazukiGames82___Data_Slider_Action_12=

; ---------------------------------------
; --- CUSTOM INFO POSITION

Dynamic_Infos-KazukiGames82___Data_Info_X=((#HideHomeIcon#=1?(#HideWinButton#=1?[Application:XW]:([Home:X]+[WinButton:W]+#TopBarSectionSpacingX#+[Application:W])):([Home:XW]+([WinButton:W]*((#HideWinButton#-1)*-1))+#TopBarSectionSpacingX#+[Application:W]))+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+#TopBarSectionSpacingX#*(1-[#*Dynamic_Infos-KazukiGames82___Auxiliar_Application_State*])+#FolderWidths#+#TopBarSectionSpacingX#*(([#*FolderHidden1*]+[#*FolderHidden2*]+[#*FolderHidden3*]+[#*FolderHidden4*]+[#*FolderHidden5*]+[#*FolderHidden6*]+[#*FolderHidden7*]+[#*FolderHidden8*]+[#*FolderHidden9*]+[#*FolderHidden10*]+[#*FolderHidden11*]+[#*FolderHidden12*])=12?0:1))
Dynamic_Infos-KazukiGames82___Data_Info_L=([#WORKAREAWIDTH[#DroptopDisplayMonitor]]-(#SideAppWidths#+[Update:W]+#DividersWidths#)-[#*TopBarContentXOffset*]+#StretchBarWidth#+#BarLengthOffset#-#TopBarSectionSpacingX#)
Dynamic_Infos-KazukiGames82___Data_Info_W1=([#*Dynamic_Infos-KazukiGames82___Data_Info_L*]-[#*Dynamic_Infos-KazukiGames82___Data_Info_X*]-((10*#DroptopSize#)+([#*TitleSpaOffset*]*#DroptopSize#))*2-(#TopBarBlurCutout#*2))
Dynamic_Infos-KazukiGames82___Data_Info_W2=([#*Dynamic_Infos-KazukiGames82___Data_Info_L*]-[#*Dynamic_Infos-KazukiGames82___Data_Info_X*]-(#TopBarBlurCutout#*2))

; ---------------------------------------
; --- CUSTOM INFO STYLE

Dynamic_Infos-KazukiGames82___Data_Info_Shadow_0=[#TopBarTextShadow[#*TopBarFontShadow*][#*ChamLum1*][#LockTopBarShadow[#*LockTopBarShadowNum*]][#*TopBarSections*]]
Dynamic_Infos-KazukiGames82___Data_Info_Shadow_1=[#TopBarTextShadow[#*TopBarFontShadow*][#*ChamLum1*][#LockTopBarShadow[#*LockTopBarShadowNum*]]0]

Dynamic_Infos-KazukiGames82___Data_Info_Align_00=Center
Dynamic_Infos-KazukiGames82___Data_Info_Align_01=Center
Dynamic_Infos-KazukiGames82___Data_Info_Align_02=Center
Dynamic_Infos-KazukiGames82___Data_Info_Align_10=Left
Dynamic_Infos-KazukiGames82___Data_Info_Align_11=Center
Dynamic_Infos-KazukiGames82___Data_Info_Align_12=Right

Dynamic_Infos-KazukiGames82___Data_Info_Case_0=None
Dynamic_Infos-KazukiGames82___Data_Info_Case_1=Proper

; ---------------------------------------
; --- CUSTOM INFO DATA

Dynamic_Infos-KazukiGames82___Data_Main_Info_0=[#Dynamic_Infos-KazukiGames82___Data_Info_[#*DisableAllNotifications*]]
Dynamic_Infos-KazukiGames82___Data_Main_Info_1=

Dynamic_Infos-KazukiGames82___Data_Info_0=[#PlayerTitle[#*PlayerTypeNum*]] - [#PlayerArtist[#*PlayerTypeNum*]]
Dynamic_Infos-KazukiGames82___Data_Info_1=""

Dynamic_Infos-KazukiGames82___Data_Info_00=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos-KazukiGames82___Data_Info_01=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos-KazukiGames82___Data_Info_02=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos-KazukiGames82___Data_Info_03=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos-KazukiGames82___Data_Info_04=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos-KazukiGames82___Data_Info_05=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos-KazukiGames82___Data_Info_06=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos-KazukiGames82___Data_Info_07=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos-KazukiGames82___Data_Info_08=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos-KazukiGames82___Data_Info_09=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos-KazukiGames82___Data_Info_010=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#*AlwaysShowSongTitleOFF*]]
 
Dynamic_Infos-KazukiGames82___Data_Info_10=""
Dynamic_Infos-KazukiGames82___Data_Info_11=""
Dynamic_Infos-KazukiGames82___Data_Info_12=[#*LastFocusedApp*]
Dynamic_Infos-KazukiGames82___Data_Info_13=🔋 [#*Dynamic_Infos-KazukiGames82___Data_Custom_Info_3*]
Dynamic_Infos-KazukiGames82___Data_Info_14=🕛 [#*Dynamic_Infos-KazukiGames82___Data_Custom_Info_4*]
Dynamic_Infos-KazukiGames82___Data_Info_15=🌡️ [#*PREVmCurrentTemperature*]°[#TempSymbol[#*UnitsMetric*]] | 🍃 [#*WindString2*] | ☔ [#*PREVmCurrentHumidity*]%
Dynamic_Infos-KazukiGames82___Data_Info_16=
Dynamic_Infos-KazukiGames82___Data_Info_17=
Dynamic_Infos-KazukiGames82___Data_Info_18=
Dynamic_Infos-KazukiGames82___Data_Info_19=
Dynamic_Infos-KazukiGames82___Data_Info_110=

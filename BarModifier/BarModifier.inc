
;----------------------------------------------------
; CORE
;----------------------------------------------------

[Dynamic_Infos-KazukiGames82.Style]
ImageAlpha=(#TopBarTitleOpacity#*#Dynamic_Infos-KazukiGames82___Show_Icon#)
W=(((((#TopHeight#+#TopBarIconHOffset#)*1.5))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)))*#Dynamic_Infos-KazukiGames82___Show_Icon#)

;----------------------------------------------------
; APPLICATION MENU & BACKGROUND
;----------------------------------------------------

[TopBar]
Shape11=Rectangle ([Application:X]-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),([Application:W]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Fill Color #TopBarBGColor1#,(((#ForceOpaque#=1?255:(#TopBarOpacity1#<1?1:#TopBarOpacity1#))*#TopBarSections#)*((#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#-1)*-1)) | StrokeWidth #TopBarStrokeWidth# | Stroke Color #TopBarStrokeColor#,((#TopBarStrokeOpacity#*#TopBarSections#)*(#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#-1)*-1) | Skew #TopBarSkew#,0
Shape13=Rectangle ([Application:XW]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionSpacingX#*((#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#-1)*-1))-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),(#FolderWidths#+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Fill Color #TopBarBGColor1#,(((#ForceOpaque#=1?255:(#TopBarOpacity1#<1?1:#TopBarOpacity1#))*#TopBarSections#)*((#FolderHidden1#+#FolderHidden2#+#FolderHidden3#+#FolderHidden4#+#FolderHidden5#+#FolderHidden6#+#FolderHidden7#+#FolderHidden8#+#FolderHidden9#+#FolderHidden10#+#FolderHidden11#+#FolderHidden12#)=12?0:1)) | StrokeWidth #TopBarStrokeWidth# | Stroke Color #TopBarStrokeColor#,((#TopBarStrokeOpacity#*#TopBarSections#)*((#FolderHidden1#+#FolderHidden2#+#FolderHidden3#+#FolderHidden4#+#FolderHidden5#+#FolderHidden6#+#FolderHidden7#+#FolderHidden8#+#FolderHidden9#+#FolderHidden10#+#FolderHidden11#+#FolderHidden12#)=12?0:1)) | Skew #TopBarSkew#,0
Shape14=Rectangle ([Application:XW]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionSpacingX#*((#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#-1)*-1))-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),(#FolderWidths#+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopGradientCorner# | StrokeWidth 0 | Fill LinearGradient ShadowGradient3 | Skew #TopBarSkew#,0
Shape83=Rectangle ([Application:X]-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),([Application:W]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Skew #TopBarSkew#,0 | Offset (#TopBarBlur#=0?(#TopBarShadowOffsetX#*#TopBarShadow#*#TopBarSections#*((#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#-1)*-1)):0),(#TopBarBlur#=0?(#TopBarShadowOffsetY#*#TopBarShadow#*#TopBarSections#*((#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#-1)*-1)):0)

Shape85=Rectangle ([Application:XW]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionSpacingX#*((#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#-1)*-1))-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),(#FolderWidths#+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Skew #TopBarSkew#,0
Shape86=Rectangle ([Application:XW]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionSpacingX#*((#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#-1)*-1))-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),(#FolderWidths#+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Skew #TopBarSkew#,0 | Offset (#TopBarBlur#=0?(#TopBarShadowOffsetX#*#TopBarShadow#*#TopBarSections#*((#FolderHidden1#+#FolderHidden2#+#FolderHidden3#+#FolderHidden4#+#FolderHidden5#+#FolderHidden6#+#FolderHidden7#+#FolderHidden8#+#FolderHidden9#+#FolderHidden10#+#FolderHidden11#+#FolderHidden12#)=12?0:1)):0),(#TopBarBlur#=0?(#TopBarShadowOffsetY#*#TopBarShadow#*#TopBarSections#*((#FolderHidden1#+#FolderHidden2#+#FolderHidden3#+#FolderHidden4#+#FolderHidden5#+#FolderHidden6#+#FolderHidden7#+#FolderHidden8#+#FolderHidden9#+#FolderHidden10#+#FolderHidden11#+#FolderHidden12#)=12?0:1)):0)

Shape91=Rectangle ((#Dynamic_Infos-KazukiGames82___Data_Info_X#)-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),(#Dynamic_Infos-KazukiGames82___Data_Info_W2#+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Fill Color #TopBarBGColor1#,((#ForceOpaque#=1?255:(#TopBarOpacity1#<1?1:#TopBarOpacity1#))*#TopBarSections#*#Dynamic_Infos-KazukiGames82___Show_Background#) | StrokeWidth #TopBarStrokeWidth# | Stroke Color #TopBarStrokeColor#,(#TopBarStrokeOpacity#*#TopBarSections#*#Dynamic_Infos-KazukiGames82___Show_Background#) | Skew #TopBarSkew#,0
Shape92=Rectangle ((#Dynamic_Infos-KazukiGames82___Data_Info_X#)-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),(#Dynamic_Infos-KazukiGames82___Data_Info_W2#+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopGradientCorner# | StrokeWidth 0 | Fill LinearGradient Dynamic_Infos-KazukiGames82___ShadowGradient | Skew #TopBarSkew#,0
Shape93=Rectangle ((#Dynamic_Infos-KazukiGames82___Data_Info_X#)-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),(#Dynamic_Infos-KazukiGames82___Data_Info_W2#+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Skew #TopBarSkew#,0
Shape94=Rectangle ((#Dynamic_Infos-KazukiGames82___Data_Info_X#)-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),(#Dynamic_Infos-KazukiGames82___Data_Info_W2#+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Skew #TopBarSkew#,0 | Offset (#TopBarBlur#=0?(#TopBarShadowOffsetX#*#TopBarShadow#*#TopBarSections#*#Dynamic_Infos-KazukiGames82___Show_Background#):0),(#TopBarBlur#=0?(#TopBarShadowOffsetY#*#TopBarShadow#*#TopBarSections#*#Dynamic_Infos-KazukiGames82___Show_Background#):0)
Shape95=Combine Shape75 | Union Shape94 | Exclude Shape93
Dynamic_Infos-KazukiGames82___ShadowGradient=90 | 11,11,15,((#TopBarGradient#=0?0:#TopBarGradientOpacity1#)*#TopBarSections#*#Dynamic_Infos-KazukiGames82___Show_Background#) ; 0.0 | 211,211,215,((#TopBarGradient#=0?0:#TopBarGradientOpacity2#)*#TopBarSections#*#Dynamic_Infos-KazukiGames82___Show_Background#) ; 1.0

[Application]
Hidden=#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#

[PresetAppCommands]
OnUpdateAction=
Disabled=1

[CommandStyle]
Hidden=(#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#=1?1:(#HideAppCommands#=1?1:(#AppCommandCount#>=[##CURRENTSECTION#]?0:1)))

[FolderSpacing]
X=(#TopBarSectionSpacingX#*((#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#-1)*-1))R

[Folder1]
X=([05:XW]+(#TopBarSectionSpacingX#*((#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#-1)*-1)))

;----------------------------------------------------
; DROPTOP INFOS
;----------------------------------------------------

[Notification]
StringAlign=[#Dynamic_Infos-KazukiGames82___Data_Info_Align_1[#Dynamic_Infos-KazukiGames82___Type_Align]]Center
FontWeight=[#NotificationWeight[#TopBarSections][#Dynamic_Infos-KazukiGames82___Show_Background]]
InlineSetting3=[#Dynamic_Infos-KazukiGames82___Data_Info_Shadow_[#Dynamic_Infos-KazukiGames82___Show_Background]]
InlineSetting5=Color | [#NotificationTextColor[#TopBarSections][#Dynamic_Infos-KazukiGames82___Show_Background]],#TopBarTitleOpacity#
Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),#TopBarSysTextYPadding#,((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
X=(#Dynamic_Infos-KazukiGames82___Data_Info_X#+#Dynamic_Infos-KazukiGames82___Data_Info_W2#*([#Dynamic_Infos-KazukiGames82___Type_Align]=0?0:([#Dynamic_Infos-KazukiGames82___Type_Align]=1?0.5:1)))
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
W=([#Dynamic_Infos-KazukiGames82___Data_Info_L]-[#Dynamic_Infos-KazukiGames82___Data_Info_X]<0?0:(#Dynamic_Infos-KazukiGames82___Data_Info_W1#*#SlideNot#))
H=(#TopHeight#/2)
ClipString=2
ClipStringW=([#Dynamic_Infos-KazukiGames82___Data_Info_L]-[#Dynamic_Infos-KazukiGames82___Data_Info_X]<0?0:(#Dynamic_Infos-KazukiGames82___Data_Info_W1#*#SlideNot#))
ClipStringH=(#TopHeight#/2)
Group=SysTray | NotificationBar | Animation.NO

[TimeCenter]
StringAlign=[#Dynamic_Infos-KazukiGames82___Data_Info_Align_[#Dynamic_Infos-KazukiGames82___Type_Time_Force_Align][#Dynamic_Infos-KazukiGames82___Type_Align]]Center
StringCase=[#Dynamic_Infos-KazukiGames82___Data_Info_Case_[#Dynamic_Infos-KazukiGames82___Type_Time_Force_Case]]
InlineSetting3=[#Dynamic_Infos-KazukiGames82___Data_Info_Shadow_[#Dynamic_Infos-KazukiGames82___Show_Background]]
FontColor=[#NotificationTextColor[#TopBarSections][#Dynamic_Infos-KazukiGames82___Show_Background]],((#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#SlideNot#))*(#Dynamic_Infos-KazukiGames82___Use_Custom_Info#=0?(#DisableAllNotifications#=1?1:(#AlwaysShowSongTitleOFF#=1?1:(#Dynamic_Infos-KazukiGames82___Type_Time_Force_Align#=1?(#WebState#<>1?(1-#Dynamic_Infos-KazukiGames82___Auxiliar_Info_Slider#):0):(#Dynamic_Infos-KazukiGames82___Type_Align#=0?([NowPlayingSongTitleB:XW]>[TimeCenter:X]?(#WebState#<>1?0:(1-#Dynamic_Infos-KazukiGames82___Auxiliar_Info_Slider#)):1):(#Dynamic_Infos-KazukiGames82___Type_Align#=2?([TimeCenter:XW]>[NowPlayingSongTitleB:X]?(#WebState#<>1?0:(1-#Dynamic_Infos-KazukiGames82___Auxiliar_Info_Slider#)):1):(#WebState#<>1?(1-#Dynamic_Infos-KazukiGames82___Auxiliar_Info_Slider#):0)))))):(#Dynamic_Infos-KazukiGames82___Type_Time_Force_Align#=1?(#Dynamic_Infos-KazukiGames82___Type_Custom_Info#=1?1:0):(#Dynamic_Infos-KazukiGames82___Type_Align#=0?([NowPlayingSongTitleB:XW]>[TimeCenter:X]?0:1):(#Dynamic_Infos-KazukiGames82___Type_Align#=2?([TimeCenter:XW]>[NowPlayingSongTitleB:X]?0:1):(#Dynamic_Infos-KazukiGames82___Type_Align#=1?(#Dynamic_Infos-KazukiGames82___Type_Custom_Info#=1?1:0):1))))))
FontWeight=[#NotificationWeight[#TopBarSections][#Dynamic_Infos-KazukiGames82___Show_Background]]
Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),#TopBarSysTextYPadding#,((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
X=(#Dynamic_Infos-KazukiGames82___Data_Info_X#+#Dynamic_Infos-KazukiGames82___Data_Info_W2#*([#Dynamic_Infos-KazukiGames82___Type_Time_Force_Align]=1?([#Dynamic_Infos-KazukiGames82___Type_Align]=0?0:([#Dynamic_Infos-KazukiGames82___Type_Align]=1?0.5:1)):0.5))
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
W=
H=(#TopHeight#/2)
ClipString=2
ClipStringW=([#Dynamic_Infos-KazukiGames82___Data_Info_L]-[#Dynamic_Infos-KazukiGames82___Data_Info_X]<0?0:#Dynamic_Infos-KazukiGames82___Data_Info_W1#)
ClipStringH=(#TopHeight#/2)
Hidden=#HideTimeCenter#
Group=NotificationBar | Buttons00 | Animation.NO

[NowPlayingSongTitle]
StringAlign=[#Dynamic_Infos-KazukiGames82___Data_Info_Align_1[#Dynamic_Infos-KazukiGames82___Type_Align]]Center
FontWeight=[#NotificationWeight[#TopBarSections][#Dynamic_Infos-KazukiGames82___Show_Background]]
InlineSetting2=Color | [#NotificationTextColor[#TopBarSections][#Dynamic_Infos-KazukiGames82___Show_Background]],((#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#SlideNot#))*(1-[#Dynamic_Infos-KazukiGames82___Use_Custom_Info]))
InlineSetting5=[#Dynamic_Infos-KazukiGames82___Data_Info_Shadow_[#Dynamic_Infos-KazukiGames82___Show_Background]]
Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),#TopBarSysTextYPadding#,((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
Text=[#Dynamic_Infos-KazukiGames82___Data_Main_Info_[#AlwaysShowSongTitleOFF]]
X=(#Dynamic_Infos-KazukiGames82___Data_Info_X#+#Dynamic_Infos-KazukiGames82___Data_Info_W2#*([#Dynamic_Infos-KazukiGames82___Type_Align]=0?0:([#Dynamic_Infos-KazukiGames82___Type_Align]=1?0.5:1)))
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
W=([#Dynamic_Infos-KazukiGames82___Data_Info_L]-[#Dynamic_Infos-KazukiGames82___Data_Info_X]<0?0:(#Dynamic_Infos-KazukiGames82___Data_Info_W1#*(#Dynamic_Infos-KazukiGames82___Use_Custom_Info#=0?#Dynamic_Infos-KazukiGames82___Auxiliar_Info_Slider#:0)))
H=(#TopHeight#/2)
LeftMouseDownAction=[]
ClipString=2
ClipStringW=([#Dynamic_Infos-KazukiGames82___Data_Info_L]-[#Dynamic_Infos-KazukiGames82___Data_Info_X]<0?0:(#Dynamic_Infos-KazukiGames82___Data_Info_W1#*(#Dynamic_Infos-KazukiGames82___Use_Custom_Info#=0?#Dynamic_Infos-KazukiGames82___Auxiliar_Info_Slider#:0)))
ClipStringH=(#TopHeight#/2)
Group=NotificationBar | Animation.NO

[NowPlayingSongTitleB]
StringAlign=[#Dynamic_Infos-KazukiGames82___Data_Info_Align_1[#Dynamic_Infos-KazukiGames82___Type_Align]]Center
FontWeight=[#NotificationWeight[#TopBarSections][#Dynamic_Infos-KazukiGames82___Show_Background]]
Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),#TopBarSysTextYPadding#,((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
Text="[#Dynamic_Infos-KazukiGames82___Data_Info_[#Dynamic_Infos-KazukiGames82___Use_Custom_Info][#Dynamic_Infos-KazukiGames82___Type_Custom_Info]]"
X=(#Dynamic_Infos-KazukiGames82___Data_Info_X#+#Dynamic_Infos-KazukiGames82___Data_Info_W2#*([#Dynamic_Infos-KazukiGames82___Type_Align]=0?0:([#Dynamic_Infos-KazukiGames82___Type_Align]=1?0.5:1)))
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
W=
H=(#TopHeight#/2)
ClipString=2
ClipStringW=([#Dynamic_Infos-KazukiGames82___Data_Info_L]-[#Dynamic_Infos-KazukiGames82___Data_Info_X]<0?0:(#Dynamic_Infos-KazukiGames82___Data_Info_W1#*(#Dynamic_Infos-KazukiGames82___Use_Custom_Info#=1?(#Dynamic_Infos-KazukiGames82___Type_Custom_Info#=1?0:1):(#Dynamic_Infos-KazukiGames82___Use_Custom_Info#=0?#Dynamic_Infos-KazukiGames82___Auxiliar_Info_Slider#:1))))
ClipStringH=(#TopHeight#/2)
Group=NotificationBar | Animation.NO
Hidden=0

;----------------------------------------------------
; CUSTOM INFOS
; ----------------------------------------------------

[Dynamic_Infos-KazukiGames82___Use_Custom_Info_Basic]
SolidColor=255,55,55,(55*((#DebugModeOFF#-1)*-1))
FontWeight=[#NotificationWeight[#TopBarSections][#Dynamic_Infos-KazukiGames82___Show_Background]]
InlineSetting2=[#Dynamic_Infos-KazukiGames82___Data_Info_Shadow_[#Dynamic_Infos-KazukiGames82___Show_Background]]
InlineSetting3=Color | [#NotificationTextColor[#TopBarSections][#Dynamic_Infos-KazukiGames82___Show_Background]],(#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#SlideNot#))
StringAlign=[#Dynamic_Infos-KazukiGames82___Data_Info_Align_1[#Dynamic_Infos-KazukiGames82___Type_Align]]Center
Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),#TopBarSysTextYPadding#,((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
X=(#Dynamic_Infos-KazukiGames82___Data_Info_X#+#Dynamic_Infos-KazukiGames82___Data_Info_W2#*([#Dynamic_Infos-KazukiGames82___Type_Align]=0?0:([#Dynamic_Infos-KazukiGames82___Type_Align]=1?0.5:1)))
W=
H=(#TopHeight#/2)
ClipString=2
ClipStringW=([#Dynamic_Infos-KazukiGames82___Data_Info_L]-[#Dynamic_Infos-KazukiGames82___Data_Info_X]<0?0:#Dynamic_Infos-KazukiGames82___Data_Info_W1#)
ClipStringH=(#TopHeight#/2)
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=((#Dynamic_Infos-KazukiGames82___Use_Custom_Info#-1)*-1)
Group=NotificationBar | Animation.NO | Buttons00

; ----------------------------------------------------

[Dynamic_Infos-KazukiGames82___Use_Custom_Info_1]
Hidden=1

[Dynamic_Infos-KazukiGames82___Use_Custom_Info_2]
StringCase=[#TopBarTitleCase[#TopBarTitleCaseNum]]
InlinePattern2=^[a-zA-Z0-9.,$;]
InlineSetting2=Case | [#TopBarTitleCaseApp[#TopBarTitleCaseNum]]
InlineSetting3=[#Dynamic_Infos-KazukiGames82___Data_Info_Shadow_[#Dynamic_Infos-KazukiGames82___Show_Background]]
LeftMouseDownAction=[!EnableMouseActionGroup "MouseOverAction" Buttons00][!ToggleMouseAction #CURRENTSECTION# "MouseOverAction"][!ToggleConfig "Droptop\Other\Apps\Application\AppControls" "AppControls.ini"][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!SetVariable ActiveFolder 0][!SetVariable ActiveAll (#ActiveTray#=4?0:1)][!SetVariable ActiveTray (#ActiveTray#=4?0:4)][!HideMeterGroup HighlightSelected][!CommandMeasure MeasureActionTimer "Execute 2" "Droptop\Other\PowerMenu"][!HideGroup ContextBox][!HideGroup SettingsMenu][!Move ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]+([#CURRENTSECTION#:W]/2)-#DropdownMenuWidth#-1+(#DropdownMenuWidth#/2)) ([#CURRENTCONFIGY]+#TopHeight#+#DropdownMenuYOffset#) "Droptop\Other\Apps\Application\AppControls"][!UpdateMeter #CURRENTSECTION#][!Redraw][!Log "#ErrorMessage#" Notice][!Delay 16][!#Show# "Droptop\Other\Apps\Application\AppControls"]
RightMouseDownAction=[!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable ButtonSection ""][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][#PowerMenuActionTimer[#PowerMenuLoadState]][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideMeterGroup HighlightSelected][!HideMeterGroup HighlightSelected "#CURRENTCONFIG#\Other\ContextBox"][!HideGroup ContextBox][!HideGroup SettingsMenu][!WriteKeyValue Variables SettingsSubMenuOpenLeft 0 "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables WindowPos [#CURRENTSECTION#:X] "#SKINSPATH#Droptop\DropdownBar\Other\ContextBox\ContextBox2.ini"][!WriteKeyValue Variables SettingsMenuIndex2 1 "#@#GlobalVar\SettingsMenuOptions.inc"][!ActivateConfig "#CURRENTCONFIG#\Other\ContextBox" "ContextBox2.ini"][!SetVariable FolderLoc "[#FolderLoc[#SlotFolder[##CURRENTSECTION#]]]" "#CURRENTCONFIG#\Other\ContextBox"][!SetVariable FolderTitle "[#FolderTitle[#SlotFolder[##CURRENTSECTION#]]]" "#CURRENTCONFIG#\Other\ContextBox"][!SetVariable FolderNum 1 "#CURRENTCONFIG#\Other\ContextBox"][!Move ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]-1) ([#CURRENTCONFIGY]+#TopHeight#+#DropdownContextMenuYOffset#) "#CURRENTCONFIG#\Other\ContextBox"][!UpdateMeterGroup Folders][!Redraw][!Redraw "#CURRENTCONFIG#\Other\ContextBox"][!#Show# "#CURRENTCONFIG#\Other\ContextBox"][!Delay 105][!HideGroup SettingsMenu]
MiddleMouseUpAction=[!CommandMeasure MeasureActionTimer "Stop 3"][#AppMiddleButton[#AppMiddleSelect]][!SetVariable AppMiddleSelect (#AppMiddleSelect#=1?0:1)][!UpdateMeter #CURRENTSECTION#][!Redraw]
FontWeight=#ApplicationFontWeight#

[Dynamic_Infos-KazukiGames82___Use_Custom_Info_3]
LeftMouseDownAction=[!EnableMouseActionGroup "MouseOverAction" Buttons00][!ToggleMouseAction #CURRENTSECTION# "MouseOverAction"][!ToggleConfig "Droptop\Other\Apps\Battery" "Battery.ini"][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!SetVariable ActiveFolder 0][!SetVariable ActiveAll (#ActiveTray#=4?0:1)][!SetVariable ActiveTray (#ActiveTray#=4?0:4)][!HideMeterGroup HighlightSelected][!CommandMeasure MeasureActionTimer "Execute 2" "Droptop\Other\PowerMenu"][!HideGroup ContextBox][!HideGroup SettingsMenu][!Move ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]+([#CURRENTSECTION#:W]/2)-#DropdownMenuWidth#-1+(#DropdownMenuWidth#/2)) ([#CURRENTCONFIGY]+#TopHeight#+#DropdownMenuYOffset#) "Droptop\Other\Apps\Battery"][!UpdateMeter #CURRENTSECTION#][!Redraw][!Log "#ErrorMessage#" Notice][!Delay 16][!#Show# "Droptop\Other\Apps\Battery"]

[Dynamic_Infos-KazukiGames82___Use_Custom_Info_4]
LeftMouseDownAction=[!EnableMouseActionGroup "MouseOverAction" Buttons00][!ToggleMouseAction #CURRENTSECTION# "MouseOverAction"][!ToggleConfig "Droptop Community Apps\Apps\Uptimer-KazukiGames82" "CustomApp.ini"][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!SetVariable ActiveFolder 0][!SetVariable ActiveAll (#ActiveTray#=4?0:1)][!SetVariable ActiveTray (#ActiveTray#=4?0:4)][!HideMeterGroup HighlightSelected][!CommandMeasure MeasureActionTimer "Execute 2" "Droptop\Other\PowerMenu"][!HideGroup ContextBox][!HideGroup SettingsMenu][!Move ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]+([#CURRENTSECTION#:W]/2)-#DropdownMenuWidth#-1+(#DropdownMenuWidth#/2)) ([#CURRENTCONFIGY]+#TopHeight#+#DropdownMenuYOffset#) "Droptop Community Apps\Apps\Uptimer-KazukiGames82"][!UpdateMeter #CURRENTSECTION#][!Redraw][!Log "#ErrorMessage#" Notice][!Delay 16][!#Show# "Droptop Community Apps\Apps\Uptimer-KazukiGames82"]

[Dynamic_Infos-KazukiGames82___Use_Custom_Info_5]
LeftMouseDownAction=[!EnableMouseActionGroup "MouseOverAction" Buttons00][!ToggleMouseAction #CURRENTSECTION# "MouseOverAction"][!ToggleConfig "Droptop\Other\Apps\Weather" "Weather.ini"][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!SetVariable ActiveFolder 0][!SetVariable ActiveAll (#ActiveTray#=4?0:1)][!SetVariable ActiveTray (#ActiveTray#=4?0:4)][!HideMeterGroup HighlightSelected][!CommandMeasure MeasureActionTimer "Execute 2" "Droptop\Other\PowerMenu"][!HideGroup ContextBox][!HideGroup SettingsMenu][!Move ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]+([#CURRENTSECTION#:W]/2)-#DropdownMenuWidth#-1+(#DropdownMenuWidth#/2)) ([#CURRENTCONFIGY]+#TopHeight#+#DropdownMenuYOffset#) "Droptop\Other\Apps\Weather"][!UpdateMeter #CURRENTSECTION#][!Redraw][!Log "#ErrorMessage#" Notice][!Delay 16][!#Show# "Droptop\Other\Apps\Weather"]
Group=NotificationBar | Animation.NO | Buttons00 | WeatherSys

[Dynamic_Infos-KazukiGames82___Use_Custom_Info_6]

[Dynamic_Infos-KazukiGames82___Use_Custom_Info_7]

[Dynamic_Infos-KazukiGames82___Use_Custom_Info_8]

[Dynamic_Infos-KazukiGames82___Use_Custom_Info_9]

[Dynamic_Infos-KazukiGames82___Use_Custom_Info_10]

; ----------------------------------------------------

[Dynamic_Infos-KazukiGames82]
Meter=String
MeterStyle=InfoStyle | Dynamic_Infos-KazukiGames82___Use_Custom_Info_Basic | Dynamic_Infos-KazukiGames82___Use_Custom_Info_#Dynamic_Infos-KazukiGames82___Type_Custom_Info#
Text="[#Dynamic_Infos-KazukiGames82___Data_Info_1[#Dynamic_Infos-KazukiGames82___Type_Custom_Info]]"
DynamicVariables=1

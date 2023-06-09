#ifdef __cplusplus

#ifndef OLDFUNCTIONS

#define DEPRECATE(t,f,n) extern t f##_FUNCTION_IS_DEPRECATED_USE_##n(); static t f(...){ f##_FUNCTION_IS_DEPRECATED_USE_##n(); return (t)0; }

DEPRECATE(void,GUI_SetStyle,GUIObject_SetStyle)
DEPRECATE(void,DISP_DESC_SetMethod08,DISP_DESC_SetOnLayout)
DEPRECATE(DISP_OBJ_METHOD,DISP_OBJ_GetMethod08,DispObject_GetOnLayout)
DEPRECATE(void,DISP_DESC_SetMethod09,DISP_DESC_SetOnConfig)
DEPRECATE(DISP_OBJ_METHOD,DISP_OBJ_GetMethod09,DispObject_GetOnConfig)
DEPRECATE(int,CreateObject,GUIObject_Create)
DEPRECATE(GUI*,GUI_Free,GUIObject_Destroy)
DEPRECATE(void,SetCursorToItem,ListMenu_SetCursorToItem)
DEPRECATE(char,SetMenuItemText0,GUIonMessage_SetMenuItemText)
DEPRECATE(char,SetMenuItemText1,GUIonMessage_SetMenuItemSecondLineText)
DEPRECATE(char,SetMenuItemText2,GUIonMessage_SetMenuItemInfoText)
DEPRECATE(char,SetMenuItemText3,GUIonMessage_SetMenuItemUnavailableText)
DEPRECATE(void,SetListObjectItemIcon,GUIonMessage_SetMenuItemIcon)
DEPRECATE(void,SoftKey_AddHelpStr,GUIObject_SoftKeys_SetInfoText)
DEPRECATE(void,addGui2book,BookObj_AddGUIObject)
DEPRECATE(void,SoftKey_SetItemAsSubItem,GUIObject_SoftKeys_SetItemAsSubItem)
DEPRECATE(void,addGui2XGuiList,XGUIList_AddGUIObject)
DEPRECATE(void,List2lineSetAsSubitem,GUIonMessage_SetNumberOfSubItems)
DEPRECATE(void,List2lineSubitemAddText,GUIonMessage_SubItem_SetText)
DEPRECATE(int,List2LineGetCurrentIndex,GUIonMessage_SubItem_GetCreatedIndex)
DEPRECATE(GUI_LIST*,CreateListObject,CreateListMenu)
DEPRECATE(void,SetNumOfMenuItem,ListMenu_SetItemCount)
DEPRECATE(DISP_OBJ*,GUIObj_GetDISPObj,GUIObject_GetDispObject)
DEPRECATE(void,GuiObject_SetBackgroundImage,GUIObject_SetBackgroundImage)
DEPRECATE(void,GuiObject_SetHighlightImage,GUIObject_SetCursorImage)
DEPRECATE(void,GuiObject_SetListTextColor,GUIObject_SetListTextColor)
DEPRECATE(void,GuiObject_SetTitleIcon,GUIObject_SetTitleIcon)
DEPRECATE(void,GuiObject_SetTitleImage,GUIObject_SetTitleBackgroundImage)
DEPRECATE(void,GuiObject_SetTitleText,GUIObject_SetTitleText)
DEPRECATE(void,GuiObject_SetTitleTextColor,GUIObject_SetTitleTextColor)
DEPRECATE(void,GuiObject_SetTitleType,GUIObject_SetTitleType)
DEPRECATE(int,BOOK_GetBookID,BookObj_GetBookID)
DEPRECATE(UI_APP_SESSION*,Book_GetSession,BookObj_GetSession)
DEPRECATE(int,BOOK_GetSessionID,BookObj_GetSessionID)
DEPRECATE(int,DISP_OBJ_GetAbsoluteXPos,DispObject_GetAbsoluteXPos)
DEPRECATE(int,DISP_OBJ_GetAbsoluteYPos,DispObject_GetAbsoluteYPos)
DEPRECATE(DISP_DESC*,DISP_OBJ_GetDESC,DispObject_GetDESC)
DEPRECATE(GUI*,DISP_OBJ_GetGUI,DispObject_GetGUI)
DEPRECATE(DISP_OBJ_METHOD,DISP_OBJ_GetMethod04,DispObject_GetMethod04)
DEPRECATE(DISP_OBJ_METHOD,DISP_OBJ_GetMethod05,DispObject_GetMethod05)
DEPRECATE(DISP_OBJ_METHOD,DISP_OBJ_GetMethod06,DispObject_GetMethod06)
DEPRECATE(DISP_OBJ_METHOD,DISP_OBJ_GetMethod07,DispObject_GetMethod07)
DEPRECATE(DISP_OBJ_METHOD,DISP_OBJ_GetMethod0A,DispObject_GetMethod0A)
DEPRECATE(DISP_OBJ_METHOD,DISP_OBJ_GetMethod0B,DispObject_GetMethod0B)
DEPRECATE(DISP_OBJ_METHOD,DISP_OBJ_GetMethod0C,DispObject_GetMethod0C)
DEPRECATE(char*,DISP_OBJ_GetName,DispObject_GetName)
DEPRECATE(DISP_OBJ_ONCLOSE_METHOD,DISP_OBJ_GetOnClose,DispObject_GetOnClose)
DEPRECATE(DISP_OBJ_ONCREATE_METHOD,DISP_OBJ_GetOnCreate,DispObject_GetOnCreate)
DEPRECATE(DISP_OBJ_ONKEY_METHOD,DISP_OBJ_GetOnKey,DispObject_GetOnKey)
DEPRECATE(DISP_OBJ_ONREDRAW_METHOD,DISP_OBJ_GetOnRedraw,DispObject_GetOnRedraw)
DEPRECATE(DISP_OBJ_METHOD,DISP_OBJ_GetonRefresh,DispObject_GetonRefresh)
DEPRECATE(int,DISP_OBJ_GetWindowHeight,DispObject_GetWindowHeight)
DEPRECATE(void,DISP_OBJ_SetBackgroundImage,DispObject_SetBackgroundImage)
DEPRECATE(void,DISP_OBJ_SetHighlightImage,DispObject_SetCursorImage)
DEPRECATE(void,DISP_OBJ_SetListTextColor,DispObject_SetListTextColor)
DEPRECATE(void,DISP_OBJ_SetTitleImage,DispObject_SetTitleBackgroundImage)
DEPRECATE(void,DISP_OBJ_SetTitleTextColor,DispObject_SetTitleTextColor)
DEPRECATE(int,DISPLAY_GetBrightness,Display_GetBrightness)
DEPRECATE(BOOK*,DISPLAY_GetTopBook,Display_GetTopBook)
DEPRECATE(void,DISPLAY_SetBrightness,Display_SetBrightness)
DEPRECATE(DISP_OBJ*,DISPBASE_GetFocused,Display_GetFocusedDispObject)
DEPRECATE(void,GC_validate_RECT,GC_ValidateRect)
DEPRECATE(int,get_GC_xx,GC_GetXX)
DEPRECATE(void,get_GC_RECT,GC_GetRect)
DEPRECATE(void*,set_GC_xx,GC_SetXX)
DEPRECATE(char,DISP_OBJ_getVisible,DispObject_GetVisible)
DEPRECATE(void,GetGuiRect,DispObject_GetRect)
DEPRECATE(BOOK*,GUI_GetBook,GUIObject_GetBook)
DEPRECATE(void,ShowWindow,GUIObject_Show)
DEPRECATE(void,putchar,GC_PutChar)
DEPRECATE(void,ListMenu_SetOnMessages,ListMenu_SetOnMessage)
DEPRECATE(void,NOfMany_SetonMessage,NOfMany_SetOnMessage)
DEPRECATE(void,OneOfMany_SetonMessage,OneOfMany_SetOnMessage)
DEPRECATE(int,GC_DrawBitmap,GC_WritePixels)
DEPRECATE(LIST*,List_New,List_Create)
DEPRECATE(void,List_Free,List_Destroy)
DEPRECATE(void,ListElement_AddtoTop,List_InsertFirst)
DEPRECATE(void*,ListElement_Remove,List_RemoveAt)
DEPRECATE(int,ListElement_Find,List_Find)
DEPRECATE(void*,ListElement_GetByIndex,List_Get)
DEPRECATE(void,ListElement_Add,List_InsertLast)
DEPRECATE(void,List_FreeElements,List_DestroyElements)
DEPRECATE(void,ListElement_Insert,List_Insert)
DEPRECATE(int,ListElement_InsertSorted,List_InsertSorted)
DEPRECATE(int,ListElement_Prt2NumElement,List_IndexOf)
DEPRECATE(void,TabMenuBar_AssignGuiObj,TabMenuBar_SetTabGui)
DEPRECATE(int,TabMenuBar_GetFocusedTabIndex,TabMenuBar_GetFocusedTab)
DEPRECATE(void,TabMenuBar_SetTabFocused,TabMenuBar_SetFocusedTab)
DEPRECATE(GUI*,CreateStringInput,CreateStringInputVA)
DEPRECATE(int,GetBattaryState,GetBatteryState)
DEPRECATE(GUI_FEEDBACK*,CreateFeedBack,CreateMonitorFeedback)
DEPRECATE(void,InputFeedback_SetIcon,GUIInput_SetIcon)
DEPRECATE(void,GUIObject_HideSoftkeys,GUIObject_SoftKeys_Hide)
DEPRECATE(void,GUIObject_ShowSoftkeys,GUIObject_SoftKeys_Show)
DEPRECATE(void,GUIObject_Softkey_SetAction,GUIObject_SoftKeys_SetAction)
DEPRECATE(void,GUIObject_Softkey_SetText,GUIObject_SoftKeys_SetText)
DEPRECATE(void,BookObj_Softkey_SetAction,BookObj_SoftKeys_SetAction)
DEPRECATE(void,BookObj_Softkey_SetText,BookObj_SoftKeys_SetText)
DEPRECATE(void*,DispObject_Softkeys_GetParams,DispObject_SoftKeys_GetParams)
DEPRECATE(LIST*,DispObject_Softkeys_GetList,DispObject_SoftKeys_GetList)
DEPRECATE(void,Softkeys_GetLabel,SoftKeys_GetLabel)
DEPRECATE(void,Softkeys_Update,SoftKeys_Update)
DEPRECATE(void,GUIObject_Softkeys_RemoveBackground,GUIObject_SoftKeys_RemoveBackground)
DEPRECATE(void,GUIObject_Softkeys_RestoreBackground,GUIObject_SoftKeys_RestoreBackground)
DEPRECATE(void,GUIObject_Softkey_ExecuteAction,GUIObject_SoftKeys_ExecuteAction)
DEPRECATE(u16,Softkeys_GetSelectedAction,SoftKeys_GetSelectedAction)
DEPRECATE(void,DISP_DESC_SetonRefresh,DISP_DESC_SetOnRefresh)
DEPRECATE(int,GUIonMessage_GetCreatedSubItemParrentIndex,GUIonMessage_SubItem_GetCreatedParentIndex)
DEPRECATE(void,DispObject_SoftKey_RestoreDefaultAction,DispObject_SoftKeys_RestoreDefaultAction)
DEPRECATE(void,GUIObject_SoftKey_AddErrorStr,GUIObject_SoftKeys_AddErrorStr)
DEPRECATE(void,GUIObject_SoftKey_RemoveItem,GUIObject_SoftKeys_RemoveItem)
DEPRECATE(void,GUIObject_SoftKey_SetEnable,GUIObject_SoftKeys_SetEnable)
DEPRECATE(void,GUIObject_SoftKey_SetVisible,GUIObject_SoftKeys_SetVisible)
DEPRECATE(void,GUIObject_SoftKey_SuppressDefaultAction,GUIObject_SoftKeys_SuppressDefaultAction)
DEPRECATE(void,MediaPlayer_SoftKey_AddHelpStr,MediaPlayer_SoftKeys_AddHelpStr)
DEPRECATE(void,MediaPlayer_SoftKey_SetAction,MediaPlayer_SoftKeys_SetAction)
DEPRECATE(void,MediaPlayer_SoftKey_SetItemAsSubItem,MediaPlayer_SoftKeys_SetItemAsSubItem)
DEPRECATE(void,MediaPlayer_SoftKey_SetText,MediaPlayer_SoftKeys_SetText)
DEPRECATE(void,SetMenuItemStyle,ListMenu_SetItemStyle)
DEPRECATE(int,GUIonMessage_GetCurrentSubItem,GUIonMessage_SubItem_GetCreatedIndex)
DEPRECATE(int,GUIonMessage_GetCreatedSubItemParentIndex,GUIonMessage_SubItem_GetCreatedParentIndex)
DEPRECATE(int,GUIonMessage_GetCurrentItemIndex,GUIonMessage_SubItem_GetSelectedParentIndex)
DEPRECATE(int,GUIonMessage_SetSubitemText,GUIonMessage_SubItem_SetText)
DEPRECATE(int,GUIonMessage_SetItemAsSubitem,GUIonMessage_SetNumberOfSubItems)
DEPRECATE(void,DispObject_SetTitleImage,DispObject_SetTitleBackgroundImage)
DEPRECATE(IS_NEEDED_BOOK,isScreenSaverBook,get_IsScreenSaverBook)
DEPRECATE(IS_NEEDED_BOOK,isMediaPlayerVideoBook,get_IsMediaPlayerVideoBook)
DEPRECATE(int,isRightNowBook,IsRightNowBook)
DEPRECATE(int,isVolumeControllerBook,IsVolumeControllerBook)
DEPRECATE(IS_NEEDED_BOOK,isFmRadioBook,get_IsFmRadioBook)
DEPRECATE(IS_NEEDED_BOOK,isAudioPlayerBook,get_IsAudioPlayerBook)
DEPRECATE(int,isDataBrowserBook,IsDataBrowserBook)
DEPRECATE(IS_NEEDED_BOOK,isCameraBook,get_IsCameraBook)
DEPRECATE(IS_NEEDED_BOOK,isSoundRecorderBook,get_IsSoundRecorderBook)
DEPRECATE(wchar_t*,FSX_isNameInvalid,FSX_GetInvalidChar)
DEPRECATE(int,CreateSMSCont,MSG_SendMessage_CreateMessage)
DEPRECATE(int,FreeSMSCont,MSG_SendMessage_DestroyMessage)
DEPRECATE(int,PrepareSMSCont,MSG_SendMessage_AddRecipient)
DEPRECATE(int,CteateNewMessage,MSG_SendMessage_Start)
DEPRECATE(void,FeedBack_SetText,Feedback_SetText)
DEPRECATE(void,DataBrowserDesc_SetStyle,DataBrowserDesc_SetItemStyle)
DEPRECATE(void,ListMenu_SetSecondLineText,ListMenu_SetItemSecondLineText)
DEPRECATE(TEXTID,int2strID,TextID_CreateIntegerID)
DEPRECATE(TEXTID,Str2ID,TextID_Create)
DEPRECATE(void,StrID2Str,TextID_GetString)
DEPRECATE(int,TextID2wstr,TextID_GetWString)
DEPRECATE(int,TextGetLength,TextID_GetLength)
DEPRECATE(void,TextFree,TextID_Destroy)
DEPRECATE(TEXTID,TextCopyId,TextID_Copy)
DEPRECATE(TEXTID,AB_NAME_ITEM2StrID,AB_NAME_ITEM2TextID)
DEPRECATE(TEXTID,AB_NUM_ITEM2StrID,AB_NUM_ITEM2TextID)
DEPRECATE(int,Disp_GetStrIdWidth,Disp_GetTextIDWidth)

#else

#define GUI_SetStyle GUIObject_SetStyle
#define DISP_DESC_SetMethod08 DISP_DESC_SetOnLayout
#define DISP_OBJ_GetMethod08 DispObject_GetOnLayout
#define DISP_DESC_SetMethod09 DISP_DESC_SetOnConfig
#define DISP_OBJ_GetMethod09 DispObject_GetOnConfig
#define CreateObject GUIObject_Create
#define GUI_Free GUIObject_Destroy
#define SetCursorToItem ListMenu_SetCursorToItem
#define SetMenuItemText0 GUIonMessage_SetMenuItemText
#define SetMenuItemText1 GUIonMessage_SetMenuItemSecondLineText
#define SetMenuItemText2 GUIonMessage_SetMenuItemInfoText
#define SetMenuItemText3 GUIonMessage_SetMenuItemUnavailableText
#define SetListObjectItemIcon GUIonMessage_SetMenuItemIcon
#define SoftKey_AddHelpStr GUIObject_SoftKeys_SetInfoText
#define addGui2book BookObj_AddGUIObject
#define SoftKey_SetItemAsSubItem GUIObject_SoftKeys_SetItemAsSubItem
#define addGui2XGuiList XGUIList_AddGUIObject
#define List2lineSetAsSubitem GUIonMessage_SetNumberOfSubItems
#define List2lineSubitemAddText GUIonMessage_SubItem_SetText
#define List2LineGetCurrentIndex GUIonMessage_SubItem_GetCreatedIndex
#define CreateListObject CreateListMenu
#define SetNumOfMenuItem ListMenu_SetItemCount
#define GUIObj_GetDISPObj GUIObject_GetDispObject
#define GuiObject_SetBackgroundImage GUIObject_SetBackgroundImage
#define GuiObject_SetHighlightImage GUIObject_SetCursorImage
#define GuiObject_SetListTextColor GUIObject_SetListTextColor
#define GuiObject_SetTitleIcon GUIObject_SetTitleIcon
#define GuiObject_SetTitleImage GUIObject_SetTitleBackgroundImage
#define GuiObject_SetTitleText GUIObject_SetTitleText
#define GuiObject_SetTitleTextColor GUIObject_SetTitleTextColor
#define GuiObject_SetTitleType GUIObject_SetTitleType
#define BOOK_GetBookID BookObj_GetBookID
#define Book_GetSession BookObj_GetSession
#define BOOK_GetSessionID BookObj_GetSessionID
#define DISP_OBJ_GetAbsoluteXPos DispObject_GetAbsoluteXPos
#define DISP_OBJ_GetAbsoluteYPos DispObject_GetAbsoluteYPos
#define DISP_OBJ_GetDESC DispObject_GetDESC
#define DISP_OBJ_GetGUI DispObject_GetGUI
#define DISP_OBJ_GetMethod04 DispObject_GetMethod04
#define DISP_OBJ_GetMethod05 DispObject_GetMethod05
#define DISP_OBJ_GetMethod06 DispObject_GetMethod06
#define DISP_OBJ_GetMethod07 DispObject_GetMethod07
#define DISP_OBJ_GetMethod0A DispObject_GetMethod0A
#define DISP_OBJ_GetMethod0B DispObject_GetMethod0B
#define DISP_OBJ_GetMethod0C DispObject_GetMethod0C
#define DISP_OBJ_GetName DispObject_GetName
#define DISP_OBJ_GetOnClose DispObject_GetOnClose
#define DISP_OBJ_GetOnCreate DispObject_GetOnCreate
#define DISP_OBJ_GetOnKey DispObject_GetOnKey
#define DISP_OBJ_GetOnRedraw DispObject_GetOnRedraw
#define DISP_OBJ_GetonRefresh DispObject_GetonRefresh
#define DISP_OBJ_GetWindow DispObject_GetWindow
#define DISP_OBJ_GetWindowHeight DispObject_GetWindowHeight
#define DISP_OBJ_GetWindowWidth DispObject_GetWindowWidth
#define DISP_OBJ_SetBackgroundImage DispObject_SetBackgroundImage
#define DISP_OBJ_SetHighlightImage DispObject_SetCursorImage
#define DISP_OBJ_SetListTextColor DispObject_SetListTextColor
#define DISP_OBJ_SetTitleImage DispObject_SetTitleBackgroundImage
#define DISP_OBJ_SetTitleTextColor DispObject_SetTitleTextColor
#define DISPLAY_GetBrightness Display_GetBrightness
#define DISPLAY_GetTopBook Display_GetTopBook
#define DISPLAY_SetBrightness Display_SetBrightness
#define DISPBASE_GetFocused Display_GetFocusedDispObject
#define GC_validate_RECT GC_ValidateRect
#define get_GC_xx GC_GetXX
#define get_GC_RECT GC_GetRect
#define set_GC_xx GC_SetXX
#define DISP_OBJ_getVisible DispObject_GetVisible
#define GetGuiRect DispObject_GetRect
#define GUI_GetBook GUIObject_GetBook
#define ShowWindow GUIObject_Show
#define putchar GC_PutChar
#define ListMenu_SetOnMessages ListMenu_SetOnMessage
#define NOfMany_SetonMessage NOfMany_SetOnMessage
#define OneOfMany_SetonMessage OneOfMany_SetOnMessage
#define GC_DrawBitmap GC_WritePixels
#define List_New List_Create
#define List_Free List_Destroy
#define ListElement_AddtoTop List_InsertFirst
#define ListElement_Remove List_RemoveAt
#define ListElement_Find List_Find
#define ListElement_GetByIndex List_Get
#define ListElement_Add List_InsertLast
#define List_FreeElements List_DestroyElements
#define ListElement_Insert List_Insert
#define ListElement_InsertSorted List_InsertSorted
#define ListElement_Prt2NumElement List_IndexOf
#define TabMenuBar_AssignGuiObj TabMenuBar_SetTabGui
#define TabMenuBar_GetFocusedTabIndex TabMenuBar_GetFocusedTab
#define TabMenuBar_SetTabFocused TabMenuBar_SetFocusedTab
#define CreateStringInput CreateStringInputVA
#define GetBattaryState GetBatteryState
#define CreateFeedBack CreateMonitorFeedback
#define InputFeedback_SetIcon GUIInput_SetIcon
#define GUIObject_HideSoftkeys GUIObject_SoftKeys_Hide
#define GUIObject_ShowSoftkeys GUIObject_SoftKeys_Show
#define GUIObject_Softkey_SetAction GUIObject_SoftKeys_SetAction
#define GUIObject_Softkey_SetText GUIObject_SoftKeys_SetText
#define BookObj_Softkey_SetAction BookObj_SoftKeys_SetAction
#define BookObj_Softkey_SetText BookObj_SoftKeys_SetText
#define DispObject_Softkeys_GetParams DispObject_SoftKeys_GetParams
#define DispObject_Softkeys_GetList DispObject_SoftKeys_GetList
#define Softkeys_GetLabel SoftKeys_GetLabel
#define Softkeys_Update SoftKeys_Update
#define GUIObject_Softkeys_RemoveBackground GUIObject_SoftKeys_RemoveBackground
#define GUIObject_Softkeys_RestoreBackground GUIObject_SoftKeys_RestoreBackground
#define GUIObject_Softkey_ExecuteAction GUIObject_SoftKeys_ExecuteAction
#define Softkeys_GetSelectedAction SoftKeys_GetSelectedAction
#define DISP_DESC_SetonRefresh DISP_DESC_SetOnRefresh
#define GUIonMessage_GetCreatedSubItemParrentIndex GUIonMessage_SubItem_GetCreatedParentIndex
#define DispObject_SoftKey_RestoreDefaultAction DispObject_SoftKeys_RestoreDefaultAction
#define GUIObject_SoftKey_AddErrorStr GUIObject_SoftKeys_AddErrorStr
#define GUIObject_SoftKey_RemoveItem GUIObject_SoftKeys_RemoveItem
#define GUIObject_SoftKey_SetEnable GUIObject_SoftKeys_SetEnable
#define GUIObject_SoftKey_SetVisible GUIObject_SoftKeys_SetVisible
#define GUIObject_SoftKey_SuppressDefaultAction GUIObject_SoftKeys_SuppressDefaultAction
#define MediaPlayer_SoftKey_AddHelpStr MediaPlayer_SoftKeys_AddHelpStr
#define MediaPlayer_SoftKey_SetAction MediaPlayer_SoftKeys_SetAction
#define MediaPlayer_SoftKey_SetItemAsSubItem MediaPlayer_SoftKeys_SetItemAsSubItem
#define MediaPlayer_SoftKey_SetText MediaPlayer_SoftKeys_SetText
#define SetMenuItemStyle ListMenu_SetItemStyle
#define GUIonMessage_GetCurrentSubItem GUIonMessage_SubItem_GetCreatedIndex
#define GUIonMessage_GetCreatedSubItemParentIndex GUIonMessage_SubItem_GetCreatedParentIndex
#define GUIonMessage_GetCurrentItemIndex GUIonMessage_SubItem_GetSelectedParentIndex
#define GUIonMessage_SetSubitemText GUIonMessage_SubItem_SetText
#define GUIonMessage_SetItemAsSubitem GUIonMessage_SetNumberOfSubItems
#define DispObject_SetTitleImage DispObject_SetTitleBackgroundImage
#define isScreenSaverBook get_IsScreenSaverBook
#define isMediaPlayerVideoBook get_IsMediaPlayerVideoBook
#define isRightNowBook IsRightNowBook
#define isVolumeControllerBook IsVolumeControllerBook
#define isFmRadioBook get_IsFmRadioBook
#define isAudioPlayerBook get_IsAudioPlayerBook
#define isDataBrowserBook IsDataBrowserBook
#define isCameraBook get_IsCameraBook
#define isSoundRecorderBook get_IsSoundRecorderBook
#define FSX_isNameInvalid FSX_GetInvalidChar
#define CreateSMSCont MSG_SendMessage_CreateMessage
#define FreeSMSCont MSG_SendMessage_DestroyMessage
#define PrepareSMSCont MSG_SendMessage_AddRecipient
#define CteateNewMessage MSG_SendMessage_Start
#define FeedBack_SetText Feedback_SetText
#define DataBrowserDesc_SetStyle DataBrowserDesc_SetItemStyle
#define ListMenu_SetSecondLineText ListMenu_SetItemSecondLineText
#define int2strID TextID_CreateIntegerID
#define Str2ID TextID_Create
#define StrID2Str TextID_GetString
#define TextID2wstr TextID_GetWString
#define TextGetLength TextID_GetLength
#define TextFree TextID_Destroy
#define TextCopyId TextID_Copy
#define AB_NAME_ITEM2StrID AB_NAME_ITEM2TextID
#define AB_NUM_ITEM2StrID AB_NUM_ITEM2TextID
#define Disp_GetStrIdWidth Disp_GetTextIDWidth

#endif

#endif

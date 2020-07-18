[Variables]

; [[[ Global Settings ]]]
vDisableDebug = 0

vLanguage = english
vUserDir = %USERPROFILE%\awesome\
vBarFixed = 1
vBarAutoHide = 0
vHideClock = 0
vHideProcessName = 0

; Media Player options: WebNowPlaying | NowPlaying
; WebNowPlayer doesn't need a vMediaPlayerName
; NowPlaying Playaer Name Options: AIMP | CAD | MediaMonkey | Winamp | WMP | WLM | iTunes
;   AIMP |                   CAD                   | MediaMonkey | Winamp |        WMP         |      WLM       | iTunes 
;  ------|-----------------------------------------|-------------|--------|--------------------|----------------|-------- 
;   AIMP | foobar2000                              | MediaMonkey | Winamp | WindowsMediaPlayer | Last.fm Client | iTunes 
;        | J. River Media Center and Media Jukebox |             |        |                    | TTPlayer       |        
;        | MusicBee                                |             |        |                    | OpenPandora    |        
;        |                                         |             |        |                    | Zune           |        

vMediaPlayer = WebNowPlaying
vMediaPlayerName = CAD

; [[[ Global Theming ]]]
vBarHeight = 32
vBarOffset = 0

; If set to 1, Awesome will not try to update colors based on your background ( using #vDesktopBG1# etc...)
vDisableDesktopColors = 0
; If set to 1, the bar background will not get the color from the maximized window titelbar
vDisableTitlebarBlend = 0
; If set to 1, will disable the background change when maximizing a window
vDisableFocusMode = 0
; If all modes are set to 0, how the fuck we get color contrast?
; Well, ask the user what he wants
; Options: 1 = LightMode, 0 = DarkMode
vDefaultColorMode = 0

vBarTint = 0,0,0,0
vBarOpacity = 0
vBarStrokeWidth = 0
vBarStrokeColor = 0,0,0
vBarShouldBlur = 1
vBarBlurType = Acrylic
vBarShadow = None


vIconSize = 16
vIconMargin = 16

; Colors for when using DefaultColorMode or Focusmode with TitlebarBlend
vBackgroundColor    = 0,0,0

vLightModeTextColor = 0,0,0,255 
vLightModeHoverColor = 255,255,255

vDarkModeTextcolor  = 255,255,255,255
vDarkModeHoverColor = 35,35,35
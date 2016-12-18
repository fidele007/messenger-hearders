/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIView, FBErrorView, NSString, UIImage, FBTransientViewStateParams, UIColor, UIButton;

@interface FBTransientViewStateManager : NSObject {

	UIView* _view;
	unsigned long long _viewState;
	UIView* _loadingView;
	FBErrorView* _errorView;
	NSString* _titleForError;
	NSString* _titleForEmpty;
	UIImage* _imageForEmptyView;
	unsigned long long _showOption;
	FBTransientViewStateParams* _params;
	double _textMarginX;
	UIColor* _shadowColor;
	CGSize _shadowOffset;
	UIView* _parentView;
	BOOL _spinnerAtTopForLoading;
	BOOL _enableSpinnerKeyboardOffset;
	BOOL _showsTextShadow;
	BOOL _scrollingEnabled;
	UIView* _customEmptyView;
	UIView* _customErrorView;
	UIView* _customLoadingView;
	double _topLayoutGuideHeight;
	double _bottomLayoutGuideHeight;
	double _keyboardHeight;
	NSString* _subtitleForEmpty;
	NSString* _buttonTextForEmpty;
	SEL _buttonForEmptyTouchUpSelector;
	id _buttonForEmptyTouchUpTarget;
	NSString* _subtitleForError;
	NSString* _buttonTextForError;
	SEL _buttonForErrorTouchUpSelector;
	id _buttonForErrorTouchUpTarget;
	NSString* _titleForLoading;
	UIColor* _textColor;
	double _fontSize;
	double _textOffsetY;
	UIColor* _backgroundColor;
	double _embeddedHeight;
	long long _spinnerStyle;
	UIColor* _spinnerTintColor;
	CGRect _viewStateFrame;

}

@property (nonatomic,retain) UIView * loadingView;                               //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) FBErrorView * errorView;                            //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,retain) UIView * view;                                      //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) unsigned long long viewState;                       //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,readonly) unsigned long long showOption;                    //@synthesize showOption=_showOption - In the implementation block
@property (nonatomic,retain) UIView * customEmptyView;                           //@synthesize customEmptyView=_customEmptyView - In the implementation block
@property (nonatomic,retain) UIView * customErrorView;                           //@synthesize customErrorView=_customErrorView - In the implementation block
@property (nonatomic,retain) UIView * customLoadingView;                         //@synthesize customLoadingView=_customLoadingView - In the implementation block
@property (assign,nonatomic) CGRect viewStateFrame;                              //@synthesize viewStateFrame=_viewStateFrame - In the implementation block
@property (assign,nonatomic) double topLayoutGuideHeight;                        //@synthesize topLayoutGuideHeight=_topLayoutGuideHeight - In the implementation block
@property (assign,nonatomic) double bottomLayoutGuideHeight;                     //@synthesize bottomLayoutGuideHeight=_bottomLayoutGuideHeight - In the implementation block
@property (assign,nonatomic) double keyboardHeight;                              //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (nonatomic,copy) NSString * titleForEmpty;                             //@synthesize titleForEmpty=_titleForEmpty - In the implementation block
@property (nonatomic,copy) NSString * subtitleForEmpty;                          //@synthesize subtitleForEmpty=_subtitleForEmpty - In the implementation block
@property (nonatomic,copy) NSString * buttonTextForEmpty;                        //@synthesize buttonTextForEmpty=_buttonTextForEmpty - In the implementation block
@property (assign,nonatomic) SEL buttonForEmptyTouchUpSelector;                  //@synthesize buttonForEmptyTouchUpSelector=_buttonForEmptyTouchUpSelector - In the implementation block
@property (assign,nonatomic,__weak) id buttonForEmptyTouchUpTarget;              //@synthesize buttonForEmptyTouchUpTarget=_buttonForEmptyTouchUpTarget - In the implementation block
@property (nonatomic,retain,readonly) UIButton * buttonForEmpty; 
@property (nonatomic,copy) NSString * titleForError;                             //@synthesize titleForError=_titleForError - In the implementation block
@property (nonatomic,copy) NSString * subtitleForError;                          //@synthesize subtitleForError=_subtitleForError - In the implementation block
@property (nonatomic,copy) NSString * buttonTextForError;                        //@synthesize buttonTextForError=_buttonTextForError - In the implementation block
@property (assign,nonatomic) SEL buttonForErrorTouchUpSelector;                  //@synthesize buttonForErrorTouchUpSelector=_buttonForErrorTouchUpSelector - In the implementation block
@property (assign,nonatomic,__weak) id buttonForErrorTouchUpTarget;              //@synthesize buttonForErrorTouchUpTarget=_buttonForErrorTouchUpTarget - In the implementation block
@property (nonatomic,retain,readonly) UIButton * buttonForError; 
@property (nonatomic,copy) NSString * titleForLoading;                           //@synthesize titleForLoading=_titleForLoading - In the implementation block
@property (assign,nonatomic) BOOL spinnerAtTopForLoading;                        //@synthesize spinnerAtTopForLoading=_spinnerAtTopForLoading - In the implementation block
@property (nonatomic,retain) UIImage * imageForEmptyView;                        //@synthesize imageForEmptyView=_imageForEmptyView - In the implementation block
@property (assign,nonatomic) BOOL enableSpinnerKeyboardOffset;                   //@synthesize enableSpinnerKeyboardOffset=_enableSpinnerKeyboardOffset - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double fontSize;                                    //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double textOffsetY;                                 //@synthesize textOffsetY=_textOffsetY - In the implementation block
@property (assign,nonatomic) BOOL showsTextShadow;                               //@synthesize showsTextShadow=_showsTextShadow - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL scrollingEnabled;                              //@synthesize scrollingEnabled=_scrollingEnabled - In the implementation block
@property (assign,nonatomic) double embeddedHeight;                              //@synthesize embeddedHeight=_embeddedHeight - In the implementation block
@property (assign,nonatomic) long long spinnerStyle;                             //@synthesize spinnerStyle=_spinnerStyle - In the implementation block
@property (nonatomic,retain) UIColor * spinnerTintColor;                         //@synthesize spinnerTintColor=_spinnerTintColor - In the implementation block
-(void)_configureView;
-(void)setImageForEmptyView:(UIImage *)arg1 ;
-(void)setSpinnerStyle:(long long)arg1 ;
-(void)setTitleForEmpty:(NSString *)arg1 ;
-(void)setViewStateFrame:(CGRect)arg1 ;
-(void)setEnableSpinnerKeyboardOffset:(BOOL)arg1 ;
-(void)setShowsTextShadow:(BOOL)arg1 ;
-(void)setTitleForError:(NSString *)arg1 ;
-(void)setSubtitleForError:(NSString *)arg1 ;
-(void)setButtonTextForError:(NSString *)arg1 ;
-(void)setCustomLoadingView:(UIView *)arg1 ;
-(UIButton *)buttonForError;
-(UIButton *)buttonForEmpty;
-(UIView *)customEmptyView;
-(void)setCustomEmptyView:(UIView *)arg1 ;
-(NSString *)titleForEmpty;
-(UIImage *)imageForEmptyView;
-(NSString *)buttonTextForEmpty;
-(void)setButtonTextForEmpty:(NSString *)arg1 ;
-(id)initWithShowOption:(unsigned long long)arg1 ;
-(id)initWithParams:(id)arg1 ;
-(unsigned long long)showOption;
-(CGRect)viewStateFrame;
-(NSString *)titleForError;
-(NSString *)subtitleForError;
-(NSString *)titleForLoading;
-(NSString *)buttonTextForError;
-(double)textOffsetY;
-(BOOL)showsTextShadow;
-(void)_clearSubViews;
-(UIView *)customErrorView;
-(BOOL)enableSpinnerKeyboardOffset;
-(double)topLayoutGuideHeight;
-(double)bottomLayoutGuideHeight;
-(double)keyboardHeight;
-(void)setSpinnerTintColor:(UIColor *)arg1 ;
-(void)_configureScrollingView;
-(void)setSubtitleForEmpty:(NSString *)arg1 ;
-(void)setTitleForLoading:(NSString *)arg1 ;
-(void)setSpinnerAtTopForLoading:(BOOL)arg1 ;
-(void)updateViewStateFrameAnimated:(CGRect)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(void)reloadStateView;
-(void)setCustomErrorView:(UIView *)arg1 ;
-(UIView *)customLoadingView;
-(void)setTopLayoutGuideHeight:(double)arg1 ;
-(void)setBottomLayoutGuideHeight:(double)arg1 ;
-(void)setKeyboardHeight:(double)arg1 ;
-(NSString *)subtitleForEmpty;
-(SEL)buttonForEmptyTouchUpSelector;
-(void)setButtonForEmptyTouchUpSelector:(SEL)arg1 ;
-(id)buttonForEmptyTouchUpTarget;
-(void)setButtonForEmptyTouchUpTarget:(id)arg1 ;
-(SEL)buttonForErrorTouchUpSelector;
-(void)setButtonForErrorTouchUpSelector:(SEL)arg1 ;
-(id)buttonForErrorTouchUpTarget;
-(void)setButtonForErrorTouchUpTarget:(id)arg1 ;
-(BOOL)spinnerAtTopForLoading;
-(void)setTextOffsetY:(double)arg1 ;
-(double)embeddedHeight;
-(void)setEmbeddedHeight:(double)arg1 ;
-(long long)spinnerStyle;
-(UIColor *)spinnerTintColor;
-(void)setViewState:(unsigned long long)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setScrollingEnabled:(BOOL)arg1 ;
-(void)_updateView;
-(UIColor *)textColor;
-(BOOL)scrollingEnabled;
-(void)setFontSize:(double)arg1 ;
-(double)fontSize;
-(UIView *)loadingView;
-(unsigned long long)viewState;
-(void)setErrorView:(FBErrorView *)arg1 ;
-(FBErrorView *)errorView;
-(void)setLoadingView:(UIView *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSAttributedString, NSString, UIView;


@protocol FBSearchTextFieldProtocol <NSObject>
@property (nonatomic,copy,readonly) NSAttributedString * attributedTitleText; 
@property (nonatomic,copy,readonly) NSString * titleText; 
@property (nonatomic,copy,readonly) NSString * subtitleText; 
@property (nonatomic,readonly) NSRange highlightRange; 
@property (nonatomic,readonly) BOOL inBackspaceMode; 
@property (assign,nonatomic,__weak) id<FBNavigationBarSearchTextFieldDelegate> textInputDelegate; 
@property (assign,nonatomic) BOOL textFieldInteractionEnabled; 
@property (assign,nonatomic) BOOL centerSearchText; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (nonatomic,copy) NSString * customPlaceholderText; 
@property (assign,nonatomic) BOOL showMagnifyingGlass; 
@property (assign,nonatomic) unsigned long long style; 
@property (assign,nonatomic) BOOL useLargeFont; 
@property (assign,nonatomic) BOOL scopedSearchOverride; 
@property (nonatomic,copy) id onTapBlock; 
@property (nonatomic,copy) UIView * customRightAccessoryView; 
@required
-(NSRange)highlightRange;
-(void)setOnTapBlock:(/*^block*/id)arg1;
-(void)setCenterSearchText:(BOOL)arg1;
-(void)setTitleTextFromContext:(id)arg1 withSubtitle:(id)arg2;
-(void)setAttributedTitleText:(id)arg1 withSubtitle:(id)arg2;
-(void)setTitleText:(id)arg1 withSubtitle:(id)arg2;
-(void)setCustomRightAccessoryView:(id)arg1;
-(id)onTapBlock;
-(void)setShowMagnifyingGlass:(BOOL)arg1;
-(void)setTitleText:(id)arg1 withSubtitle:(id)arg2 highlightRange:(NSRange)arg3;
-(void)removeHighlight;
-(void)expandHighlight;
-(void)selectText;
-(NSAttributedString *)attributedTitleText;
-(BOOL)inBackspaceMode;
-(BOOL)textFieldInteractionEnabled;
-(void)setTextFieldInteractionEnabled:(BOOL)arg1;
-(BOOL)centerSearchText;
-(BOOL)showMagnifyingGlass;
-(BOOL)useLargeFont;
-(void)setUseLargeFont:(BOOL)arg1;
-(BOOL)scopedSearchOverride;
-(void)setScopedSearchOverride:(BOOL)arg1;
-(UIView *)customRightAccessoryView;
-(unsigned long long)style;
-(void)setKeyboardType:(long long)arg1;
-(void)setStyle:(unsigned long long)arg1;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1;
-(void)setTitleText:(id)arg1;
-(NSString *)titleText;
-(id<FBNavigationBarSearchTextFieldDelegate>)textInputDelegate;
-(void)setTextInputDelegate:(id)arg1;
-(NSString *)customPlaceholderText;
-(void)setCustomPlaceholderText:(id)arg1;
-(NSString *)subtitleText;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/SPBottomBar.h>

@class NSMutableArray, UIButton, UIView, NSDictionary, NSArray;

@interface FBMediaGalleryBottomBar : SPBottomBar {

	NSMutableArray* _buttonArray;
	unsigned long long _mediaPickerStyle;
	UIButton* _selectedButton;
	UIView* _topBorder;
	NSDictionary* _idAndButton;
	NSArray* _buttonItems;
	id _listener;
	BOOL _editButtonsEnabled;
	CGRect _luxButtonFrame;

}

@property (nonatomic,readonly) CGRect luxButtonFrame;              //@synthesize luxButtonFrame=_luxButtonFrame - In the implementation block
@property (assign,nonatomic) BOOL editButtonsEnabled;              //@synthesize editButtonsEnabled=_editButtonsEnabled - In the implementation block
@property (nonatomic,copy) NSArray * buttonItems;                  //@synthesize buttonItems=_buttonItems - In the implementation block
+(double)heightInUnifiedMediaGallery;
-(id)initWithFrame:(CGRect)arg1 mediaPickerStyle:(unsigned long long)arg2 buttonItems:(id)arg3 listener:(id)arg4 ;
-(void)setEditButtonsEnabled:(BOOL)arg1 ;
-(void)setButtonID:(id)arg1 selected:(BOOL)arg2 ;
-(double)_paddingAmountForCurrentButtonsShown;
-(id)_buttonHighlightTintColor;
-(id)_buttonWithTextOnBottomWithStandardImage:(id)arg1 title:(id)arg2 action:(SEL)arg3 tintColor:(id)arg4 tag:(long long)arg5 ;
-(BOOL)editButtonsEnabled;
-(void)setButtonID:(id)arg1 hidden:(BOOL)arg2 ;
-(BOOL)checkButtonSelectedForButtonID:(id)arg1 ;
-(CGRect)luxButtonFrame;
-(void)layoutSubviews;
-(NSArray *)buttonItems;
-(void)setButtonItems:(NSArray *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBBouncyButton.h>

@class FIGButtonTapTarget, UIFont, NSString, UIImage, UIImageView;

@interface FIGButtonAbstractInternal : FBBouncyButton {

	SCD_Struct_FI591 _attributes;
	FIGButtonTapTarget* _buttonTapTarget;
	double _bounciness;
	BOOL _highlighted;
	UIFont* _titleFont;
	NSString* _title;
	UIImage* _iconImage;
	UIImageView* _chevronImageView;

}

@property (nonatomic,retain) UIFont * titleFont;                          //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                         //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImageView * chevronImageView;              //@synthesize chevronImageView=_chevronImageView - In the implementation block
-(void)_buttonTapped;
-(void)setButtonStyle:(unsigned long long)arg1 ;
-(void)setButtonTapTarget:(id)arg1 ;
-(void)_buttonReleased;
-(void)_updateGlyphs;
-(void)setChevronVisible:(BOOL)arg1 ;
-(UIImageView *)chevronImageView;
-(void)setChevronImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setEnabled:(BOOL)arg1 ;
-(UIImage *)iconImage;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setGlyphImage:(id)arg1 ;
-(void)_buttonPressed;
@end


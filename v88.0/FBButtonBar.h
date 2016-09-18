/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableDictionary, UIImageView, NSMutableArray, NSArray, UIImage, UIFont;

@interface FBButtonBar : UIView {

	NSMutableDictionary* _centerImages;
	NSMutableDictionary* _leftCapImages;
	NSMutableDictionary* _rightCapImages;
	NSMutableDictionary* _leftRightCapImages;
	NSMutableDictionary* _titleColors;
	NSMutableDictionary* _widths;
	UIImageView* _backgroundView;
	NSMutableArray* _buttonSeparatorImageViews;
	BOOL _showSeparator;
	NSArray* _items;
	NSArray* _buttons;
	UIImage* _buttonSeparatorImage;
	UIFont* _buttonTitleFont;
	unsigned long long _buttonLayoutStyle;
	UIEdgeInsets _buttonSeparatorInsets;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,copy) NSArray * buttons;                                   //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,copy) NSArray * items;                                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * buttonSeparatorImage;                    //@synthesize buttonSeparatorImage=_buttonSeparatorImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets buttonSeparatorInsets;                //@synthesize buttonSeparatorInsets=_buttonSeparatorInsets - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;                                //@synthesize showSeparator=_showSeparator - In the implementation block
@property (nonatomic,retain) UIFont * buttonTitleFont;                          //@synthesize buttonTitleFont=_buttonTitleFont - In the implementation block
@property (assign,nonatomic) unsigned long long buttonLayoutStyle;              //@synthesize buttonLayoutStyle=_buttonLayoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                    //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
-(void)setButtonSeparatorImage:(UIImage *)arg1 ;
-(void)setButtonSeparatorInsets:(UIEdgeInsets)arg1 ;
-(void)setButtonTitleFont:(UIFont *)arg1 ;
-(void)setButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 capType:(unsigned long long)arg3 ;
-(void)setButtonLayoutStyle:(unsigned long long)arg1 ;
-(void)setButtonTitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIFont *)buttonTitleFont;
-(UIImage *)buttonSeparatorImage;
-(UIEdgeInsets)buttonSeparatorInsets;
-(void)_updateButtonBackgroundImages;
-(void)_updateButtonTitleColors;
-(void)_updateButtonTitleFonts;
-(void)_updateButtonLayoutStyle;
-(void)_updateSeparators;
-(void)_buttonTouchUpInside:(id)arg1 event:(id)arg2 ;
-(id)_imageDictionaryForCapType:(unsigned long long)arg1 ;
-(void)_setObject:(id)arg1 forState:(unsigned long long)arg2 inDictionary:(id)arg3 ;
-(double)widthForButtonAtIndex:(unsigned long long)arg1 ;
-(double*)_divideWidth:(double)arg1 numberOfElements:(unsigned long long)arg2 ;
-(id)buttonForItem:(id)arg1 ;
-(id)buttonBackgroundImageForState:(unsigned long long)arg1 capType:(unsigned long long)arg2 ;
-(id)buttonTitleColorForState:(unsigned long long)arg1 ;
-(id)itemForButton:(id)arg1 ;
-(void)setWidth:(double)arg1 forButtonAtIndex:(unsigned long long)arg2 ;
-(void)buttonBarItem:(id)arg1 propertyDidChange:(id)arg2 ;
-(unsigned long long)buttonLayoutStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)backgroundImage;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(BOOL)isAccessibilityElement;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)buttons;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(void)setButtons:(NSArray *)arg1 ;
@end

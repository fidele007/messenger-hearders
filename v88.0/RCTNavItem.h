/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIBarButtonItem, NSString, UIImage, UIColor, UIImageView;

@interface RCTNavItem : UIView {

	BOOL _navigationBarHidden;
	BOOL _shadowHidden;
	BOOL _translucent;
	UIBarButtonItem* _backButtonItem;
	UIBarButtonItem* _leftButtonItem;
	UIBarButtonItem* _rightButtonItem;
	NSString* _title;
	UIImage* _titleImage;
	UIImage* _leftButtonIcon;
	NSString* _leftButtonTitle;
	UIImage* _rightButtonIcon;
	NSString* _rightButtonTitle;
	UIImage* _backButtonIcon;
	NSString* _backButtonTitle;
	UIColor* _tintColor;
	UIColor* _barTintColor;
	UIColor* _titleTextColor;
	/*^block*/id _onLeftButtonPress;
	/*^block*/id _onRightButtonPress;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * titleImage;                             //@synthesize titleImage=_titleImage - In the implementation block
@property (nonatomic,retain) UIImage * leftButtonIcon;                         //@synthesize leftButtonIcon=_leftButtonIcon - In the implementation block
@property (nonatomic,copy) NSString * leftButtonTitle;                         //@synthesize leftButtonTitle=_leftButtonTitle - In the implementation block
@property (nonatomic,retain) UIImage * rightButtonIcon;                        //@synthesize rightButtonIcon=_rightButtonIcon - In the implementation block
@property (nonatomic,copy) NSString * rightButtonTitle;                        //@synthesize rightButtonTitle=_rightButtonTitle - In the implementation block
@property (nonatomic,retain) UIImage * backButtonIcon;                         //@synthesize backButtonIcon=_backButtonIcon - In the implementation block
@property (nonatomic,copy) NSString * backButtonTitle;                         //@synthesize backButtonTitle=_backButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL navigationBarHidden;                         //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign,nonatomic) BOOL shadowHidden;                                //@synthesize shadowHidden=_shadowHidden - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * barTintColor;                           //@synthesize barTintColor=_barTintColor - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;                         //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (assign,nonatomic) BOOL translucent;                                 //@synthesize translucent=_translucent - In the implementation block
@property (nonatomic,readonly) UIImageView * titleImageView; 
@property (nonatomic,readonly) UIBarButtonItem * backButtonItem;               //@synthesize backButtonItem=_backButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * leftButtonItem;               //@synthesize leftButtonItem=_leftButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * rightButtonItem;              //@synthesize rightButtonItem=_rightButtonItem - In the implementation block
@property (nonatomic,copy) id onLeftButtonPress;                               //@synthesize onLeftButtonPress=_onLeftButtonPress - In the implementation block
@property (nonatomic,copy) id onRightButtonPress;                              //@synthesize onRightButtonPress=_onRightButtonPress - In the implementation block
-(NSString *)leftButtonTitle;
-(NSString *)rightButtonTitle;
-(void)setLeftButtonTitle:(NSString *)arg1 ;
-(void)setRightButtonTitle:(NSString *)arg1 ;
-(void)handleLeftButtonPress;
-(void)handleRightButtonPress;
-(void)setBackButtonIcon:(UIImage *)arg1 ;
-(void)setLeftButtonIcon:(UIImage *)arg1 ;
-(void)setRightButtonIcon:(UIImage *)arg1 ;
-(UIImage *)leftButtonIcon;
-(UIImage *)rightButtonIcon;
-(UIImage *)backButtonIcon;
-(void)setShadowHidden:(BOOL)arg1 ;
-(id)onLeftButtonPress;
-(void)setOnLeftButtonPress:(id)arg1 ;
-(id)onRightButtonPress;
-(void)setOnRightButtonPress:(id)arg1 ;
-(BOOL)shadowHidden;
-(UIBarButtonItem *)backButtonItem;
-(UIBarButtonItem *)leftButtonItem;
-(UIBarButtonItem *)rightButtonItem;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(NSString *)backButtonTitle;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(UIImage *)titleImage;
-(void)setTitleImage:(UIImage *)arg1 ;
-(BOOL)navigationBarHidden;
-(BOOL)translucent;
-(UIImageView *)titleImageView;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(UIColor *)titleTextColor;
@end


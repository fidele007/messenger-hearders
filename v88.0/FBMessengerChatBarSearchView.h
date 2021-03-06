/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBAccessibilityInvalidationEventsListener.h>
#import <Messenger/CAAnimationDelegate.h>

@class UIView, UISearchBar, UIButton, NSString;

@interface FBMessengerChatBarSearchView : UIView <FBAccessibilityInvalidationEventsListener, CAAnimationDelegate> {

	double _lightStyleChatBarIconSize;
	UIView* _separatorView;
	BOOL _buttonsHidden;
	BOOL _gearButtonAnimating;
	int _style;
	UISearchBar* _searchBar;
	UIButton* _gearButton;
	double _shiftOffsetForAnimation;

}

@property (nonatomic,retain) UISearchBar * searchBar;                     //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) int style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIButton * gearButton;                       //@synthesize gearButton=_gearButton - In the implementation block
@property (assign,nonatomic) BOOL buttonsHidden;                          //@synthesize buttonsHidden=_buttonsHidden - In the implementation block
@property (assign,nonatomic) double shiftOffsetForAnimation;              //@synthesize shiftOffsetForAnimation=_shiftOffsetForAnimation - In the implementation block
@property (assign,nonatomic) BOOL gearButtonAnimating;                    //@synthesize gearButtonAnimating=_gearButtonAnimating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveFontInvalidation;
-(double)shiftOffsetForAnimation;
-(void)setShiftOffsetForAnimation:(double)arg1 ;
-(void)setGearButton:(UIButton *)arg1 ;
-(void)_configureDarkStyle;
-(void)_configureLightStyle;
-(void)_startGearButtonAnimationWithDelay:(double)arg1 ;
-(void)_stopGearButtonAnimation;
-(void)_layoutSubviewsForDarkStyle;
-(void)_layoutSubviewsForLightStyle;
-(void)setButtonsHidden:(BOOL)arg1 ;
-(void)setGearButtonAnimating:(BOOL)arg1 ;
-(UIButton *)gearButton;
-(BOOL)buttonsHidden;
-(BOOL)gearButtonAnimating;
-(void)_setFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
@end


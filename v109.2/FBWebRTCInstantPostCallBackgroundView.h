/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, PABlurView, UIView, UIImage;

@interface FBWebRTCInstantPostCallBackgroundView : UIView {

	UIImageView* _backgroundImageView;
	PABlurView* _blurView;
	UIView* _tintOverlay;
	unsigned long long _backgroundType;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (assign,nonatomic) unsigned long long backgroundType;              //@synthesize backgroundType=_backgroundType - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(unsigned long long)backgroundType;
-(void)setBackgroundType:(unsigned long long)arg1 ;
@end


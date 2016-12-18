/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

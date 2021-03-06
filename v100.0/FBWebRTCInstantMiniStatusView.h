/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBWebRTCPinLockView, UILabel, NSString, UIImage;

@interface FBWebRTCInstantMiniStatusView : UIView {

	UIImageView* _backgroundView;
	FBWebRTCPinLockView* _pinLockView;
	UIImageView* _profileImageView;
	UIImageView* _speakerOnImageView;
	UIImageView* _speakerOffImageView;
	UIImageView* _videoOnImageView;
	UIImageView* _videoOffImageView;
	UILabel* _statusLabel;
	BOOL _showBackground;
	unsigned long long _statusViews;

}

@property (assign,nonatomic) unsigned long long statusViews;              //@synthesize statusViews=_statusViews - In the implementation block
@property (assign,nonatomic) BOOL showBackground;                         //@synthesize showBackground=_showBackground - In the implementation block
@property (nonatomic,copy) NSString * statusLabelText; 
@property (nonatomic,retain) UIImage * profileImage; 
-(BOOL)showBackground;
-(NSString *)statusLabelText;
-(void)setStatusLabelText:(NSString *)arg1 ;
-(void)setShowBackground:(BOOL)arg1 ;
-(void)setStatusViews:(unsigned long long)arg1 ;
-(void)setStatusViews:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)statusViews;
-(CGSize)sizeThatFits:(CGSize)arg1 withStatusViews:(unsigned long long)arg2 ;
-(id)_loadIcon:(id)arg1 ;
-(void)_updateStatusContentStyle;
-(id)_statusViewsFor:(unsigned long long)arg1 ;
-(void)_setVisibleStatusViews:(unsigned long long)arg1 ;
-(void)_calculateLayout:(/*^block*/id)arg1 ;
-(double)_currentMargin;
-(void)_configureView:(id)arg1 withShadow:(BOOL)arg2 ;
-(void)_configureProfileImagePlaceholderIfNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProfileImage:(UIImage *)arg1 ;
-(UIImage *)profileImage;
@end


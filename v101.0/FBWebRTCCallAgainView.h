/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCCallAgainViewDelegate;
@class UILabel, UIButton, FBWebRTCPhotoCircleView, UIView, MNProfileImageView;

@interface FBWebRTCCallAgainView : UIView {

	UILabel* _durationLabel;
	UILabel* _nameLabel;
	UIButton* _callAgainButton;
	FBWebRTCPhotoCircleView* _profileImageView;
	UIView* _lineView;
	id<FBWebRTCCallAgainViewDelegate> _delegate;

}

@property (nonatomic,readonly) MNProfileImageView * photoView; 
@property (assign,nonatomic,__weak) id<FBWebRTCCallAgainViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)_configureLabel:(id)arg1 withFont:(id)arg2 color:(id)arg3 ;
-(id)initWithAvatarImageDecorator:(id)arg1 ;
-(void)didSelectCallAgain:(id)arg1 ;
-(CGSize)layoutSubviewsWithSize:(CGSize)arg1 setFrames:(BOOL)arg2 ;
-(void)setIsOutboundCall:(BOOL)arg1 ;
-(void)setDelegate:(id<FBWebRTCCallAgainViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBWebRTCCallAgainViewDelegate>)delegate;
-(void)setName:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(MNProfileImageView *)photoView;
@end


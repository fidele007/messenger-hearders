/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBShapeView, MNProfileImageView;

@interface FBWebRTCPhotoCircleView : UIView {

	UIImageView* _messengerBadgeImageView;
	FBShapeView* _messengerBadgeBackground;
	MNProfileImageView* _photoView;

}

@property (nonatomic,retain) MNProfileImageView * photoView;              //@synthesize photoView=_photoView - In the implementation block
-(void)showMessengerBadge:(BOOL)arg1 resizeFactor:(double)arg2 avatarImageDecorator:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPhotoView:(MNProfileImageView *)arg1 ;
-(MNProfileImageView *)photoView;
@end


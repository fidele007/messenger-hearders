/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage;

@interface MNThreadJourneyProfilePicturesView : UIView {

	UIImageView* _viewerProfileImageView;
	UIImageView* _otherUserProfileImageView;
	UIImage* _viewerProfileImage;
	UIImage* _otherUserProfileImage;

}

@property (nonatomic,retain) UIImage * viewerProfileImage;                 //@synthesize viewerProfileImage=_viewerProfileImage - In the implementation block
@property (nonatomic,retain) UIImage * otherUserProfileImage;              //@synthesize otherUserProfileImage=_otherUserProfileImage - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setViewerProfileImage:(UIImage *)arg1 ;
-(void)setOtherUserProfileImage:(UIImage *)arg1 ;
-(UIImage *)viewerProfileImage;
-(UIImage *)otherUserProfileImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBPhotoCropInfo, FBCropConstraintView, UIView;

@interface FBComposerCropContainerView : UIView {

	UIImageView* _imageView;
	FBPhotoCropInfo* _cropInfo;
	FBCropConstraintView* _cropConstraintView;
	UIView* _privacyMessageView;

}

@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) FBPhotoCropInfo * cropInfo;                             //@synthesize cropInfo=_cropInfo - In the implementation block
@property (nonatomic,retain) FBCropConstraintView * cropConstraintView;              //@synthesize cropConstraintView=_cropConstraintView - In the implementation block
@property (nonatomic,retain) UIView * privacyMessageView;                            //@synthesize privacyMessageView=_privacyMessageView - In the implementation block
-(UIView *)privacyMessageView;
-(void)_resetLayout;
-(void)setPrivacyMessageView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 cropInfo:(id)arg3 style:(unsigned long long)arg4 privacyMessageView:(id)arg5 ;
-(FBCropConstraintView *)cropConstraintView;
-(CGRect)constraintFrameFromCropInfo:(id)arg1 ;
-(CGSize)maxImageSizeForImageOrientation:(long long)arg1 ;
-(void)setCropConstraintView:(FBCropConstraintView *)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setCropInfo:(FBPhotoCropInfo *)arg1 ;
-(FBPhotoCropInfo *)cropInfo;
@end


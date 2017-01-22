/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
-(FBPhotoCropInfo *)cropInfo;
-(void)_resetLayout;
-(void)setPrivacyMessageView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 cropInfo:(id)arg3 style:(unsigned long long)arg4 privacyMessageView:(id)arg5 ;
-(FBCropConstraintView *)cropConstraintView;
-(void)setCropInfo:(FBPhotoCropInfo *)arg1 ;
-(CGRect)constraintFrameFromCropInfo:(id)arg1 ;
-(CGSize)maxImageSizeForImageOrientation:(long long)arg1 ;
-(void)setCropConstraintView:(FBCropConstraintView *)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end

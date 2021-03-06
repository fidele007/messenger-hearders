/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoEditingViewController.h>

@protocol FBVideoPickThumbnailViewControllerDelegate;
@class FBVideoAssetEdits;

@interface FBVideoPickThumbnailViewController : FBVideoEditingViewController {

	FBVideoAssetEdits* _backupEdits;
	id<FBVideoPickThumbnailViewControllerDelegate> _pickThumbnailDelegate;

}

@property (assign,nonatomic,__weak) id<FBVideoPickThumbnailViewControllerDelegate> pickThumbnailDelegate;              //@synthesize pickThumbnailDelegate=_pickThumbnailDelegate - In the implementation block
+(BOOL)canShowThumbnailPicker;
+(void)setCanShowThumbnailPicker:(BOOL)arg1 ;
-(void)_handleDoneTap:(id)arg1 ;
-(void)setVideoClip:(id)arg1 ;
-(void)_handleCancelTap:(id)arg1 ;
-(void)_finishEditingWithReason:(id)arg1 isCancelled:(BOOL)arg2 ;
-(id)initWithExternalSessionID:(id)arg1 source:(id)arg2 rightBarButtonTitle:(id)arg3 enableHDUploadButton:(BOOL)arg4 style:(unsigned long long)arg5 ;
-(id<FBVideoPickThumbnailViewControllerDelegate>)pickThumbnailDelegate;
-(void)setPickThumbnailDelegate:(id<FBVideoPickThumbnailViewControllerDelegate>)arg1 ;
@end


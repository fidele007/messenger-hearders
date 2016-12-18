/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoEditingViewController.h>

@protocol FBCancellableVideoEditingViewControllerDelegate;
@class FBVideoAssetEdits;

@interface FBCancellableVideoEditingViewController : FBVideoEditingViewController {

	FBVideoAssetEdits* _backupEdits;
	id<FBCancellableVideoEditingViewControllerDelegate> _cancellableDelegate;

}

@property (assign,nonatomic,__weak) id<FBCancellableVideoEditingViewControllerDelegate> cancellableDelegate;              //@synthesize cancellableDelegate=_cancellableDelegate - In the implementation block
-(void)setVideoClip:(id)arg1 ;
-(void)_handleDoneTap:(id)arg1 ;
-(void)_handleCancelTap:(id)arg1 ;
-(void)_finishEditingWithReason:(id)arg1 isCancelled:(BOOL)arg2 ;
-(id)initWithExternalSessionID:(id)arg1 source:(id)arg2 rightBarButtonTitle:(id)arg3 enableHDUploadButton:(BOOL)arg4 style:(unsigned long long)arg5 ;
-(id<FBCancellableVideoEditingViewControllerDelegate>)cancellableDelegate;
-(void)setCancellableDelegate:(id<FBCancellableVideoEditingViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
@end

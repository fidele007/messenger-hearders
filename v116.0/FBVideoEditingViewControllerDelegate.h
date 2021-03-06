/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoEditingViewControllerDelegate <NSObject>
@required
-(void)videoEditingViewController:(id)arg1 didChangeTrimRange:(SCD_Struct_FB181)arg2;
-(void)videoEditingViewController:(id)arg1 didChangeMuteState:(BOOL)arg2;
-(void)videoEditingViewController:(id)arg1 didChangeCropOriginWidthProportion:(double)arg2 cropOriginHeightProportion:(double)arg3;
-(void)videoEditingViewController:(id)arg1 didChangeFilterConfig:(id)arg2;
-(void)videoEditingViewController:(id)arg1 didChangeHDUploadSelection:(BOOL)arg2;
-(void)videoEditingViewControllerDidChangeToTrimView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToSoundView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToCropView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToFilterView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToCoverView:(id)arg1;

@end


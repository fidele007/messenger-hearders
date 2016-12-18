/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoEditingViewControllerDelegate <NSObject>
@required
-(void)videoEditingViewController:(id)arg1 didChangeTrimRange:(SCD_Struct_FB26)arg2;
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


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoEditingViewControllerDelegate <NSObject>
@required
-(void)videoEditingViewController:(id)arg1 didChangeTrimRange:(SCD_Struct_FB34)arg2;
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

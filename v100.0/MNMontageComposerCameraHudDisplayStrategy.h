/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageComposerHudDisplayStrategy.h>

@class NSString;

@interface MNMontageComposerCameraHudDisplayStrategy : NSObject <MNMontageComposerHudDisplayStrategy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationConfigWithOverlayContent:(BOOL)arg1 editingWithArtPicker:(BOOL)arg2 unreadBadgeCount:(long long)arg3 selectedContentsCount:(long long)arg4 dismissOption:(unsigned long long)arg5 ;
-(BOOL)shouldShowEditControls;
-(BOOL)shouldShowSaveButton;
-(BOOL)shouldShowMuteButton;
-(BOOL)shouldShowColorBackgroundButton;
-(BOOL)shouldShowCameraCaptureButton;
-(BOOL)shouldShowCameraControls;
-(BOOL)shouldShowBottomHintWithOverlayContent:(BOOL)arg1 ;
-(BOOL)shouldShowPlaceholder;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBVideoSoundToggleFunnelLogger : NSObject
-(void)startFunnelWithDefaultSetting:(BOOL)arg1 globalSetting:(BOOL)arg2 hasBackgroundAudio:(BOOL)arg3 hasHeadphones:(BOOL)arg4 isMuteSwitchOn:(BOOL)arg5 ;
-(void)logAction:(id)arg1 payload:(id)arg2 ;
-(void)endFunnel;
@end

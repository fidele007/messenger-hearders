/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBWebRTCDevicePermissionManager : NSObject
-(BOOL)userDidAuthorizeCameraPermissions:(BOOL)arg1 microphonePermissions:(BOOL)arg2 ;
-(void)promptForCameraPermissions:(BOOL)arg1 microphonePermissions:(BOOL)arg2 onSuccess:(/*^block*/id)arg3 onFailure:(/*^block*/id)arg4 ;
-(BOOL)_userDidAuthorizeCameraPermissions:(BOOL)arg1 ;
-(BOOL)_userDidAuthorizeMicrophonePermissions:(BOOL)arg1 ;
-(void)_promptForMicrophonePermissions:(BOOL)arg1 onSuccess:(/*^block*/id)arg2 onFailure:(/*^block*/id)arg3 ;
-(void)_promptForCameraPermissions:(BOOL)arg1 onSuccess:(/*^block*/id)arg2 onFailure:(/*^block*/id)arg3 ;
@end

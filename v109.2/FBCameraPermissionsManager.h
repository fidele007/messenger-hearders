/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBCameraPermissionsManager : NSObject
+(void)requestCameraAccessWithAccessGrantedBlock:(/*^block*/id)arg1 accessDeniedBlock:(/*^block*/id)arg2 ;
+(BOOL)userDidDenyCameraAccess;
+(BOOL)userDidAuthorizeCameraAccess;
+(BOOL)shouldPresentAuthorizationPrompt;
@end


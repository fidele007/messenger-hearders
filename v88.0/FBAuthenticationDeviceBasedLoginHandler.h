/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBDBLLoginRequest;

@interface FBAuthenticationDeviceBasedLoginHandler : NSObject {

	FBDBLLoginRequest* _loginRequest;

}
-(void)submitDeviceBasedLoginWithUserID:(id)arg1 nonce:(id)arg2 pin:(id)arg3 machineID:(id)arg4 success:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)cancel;
@end

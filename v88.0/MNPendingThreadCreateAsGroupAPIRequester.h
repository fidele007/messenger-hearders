/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPendingThreadCreateAsGroupAPIRequester <NSObject>
@required
-(void)createGroupThreadWithOfflineId:(id)arg1 name:(id)arg2 profileImage:(id)arg3 invitees:(id)arg4 shouldPinGroup:(BOOL)arg5 callbackQueue:(id)arg6 successBlock:(/*^block*/id)arg7 failureBlock:(/*^block*/id)arg8;
-(void)cancelGroupThreadCreationWithOfflineId:(id)arg1;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface FBContactSyncNetworker : NSObject {

	FBUserSession* _session;

}
-(void)uploadWithImportId:(id)arg1 contactImporterFlow:(long long)arg2 insertedRecord:(id)arg3 removedRecord:(id)arg4 isFullUpload:(BOOL)arg5 successBlock:(/*^block*/id)arg6 errorBlock:(/*^block*/id)arg7 ;
-(void)settingPostWithSetting:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface MNBrowserExtensionPermissionFetcher : NSObject {

	FBUserSession* _session;

}
-(void)fetchGrantedPermissionsForPageId:(id)arg1 threadId:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_handleRequestPermissionSuccessCallbackWithResponse:(id)arg1 selectedPermission:(id)arg2 pageId:(id)arg3 threadId:(id)arg4 successBlock:(/*^block*/id)arg5 ;
-(void)fetchPermissionInfoForPermission:(id)arg1 pageId:(id)arg2 threadId:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(id)initWithSession:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@class FBUserSession, NSString;

@interface MNSaveMessageRequestSender : NSObject <FBClassProvidable> {

	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendSaveLinkRequestWithURLString:(id)arg1 source:(long long)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)sendSaveMessageRequestWithMessageId:(id)arg1 source:(long long)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)_sendSaveRequestWithParamaters:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBCancelable.h>
#import <Messenger/MNThreadEphemeralitySetting.h>

@protocol OS_dispatch_queue;
@class FBUserSession, MNMessagingRegionHeaderHelper, NSObject, FBGraphRequest, FBSimpleNetworkerRequest, NSString;

@interface MNThreadEphemeralityUpdateRequester : NSObject <FBNetworkerRequestDelegate, FBCancelable, MNThreadEphemeralitySetting> {

	FBUserSession* _session;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	NSObject*<OS_dispatch_queue> _queue;
	FBGraphRequest* _changeEphemeralityRequest;
	FBSimpleNetworkerRequest* _networkerRequest;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithSession:(id)arg1 messagingRegionHeaderHelper:(id)arg2 queue:(id)arg3 ;
-(void)setEphemeralityForThread:(id)arg1 ephemerality:(long long)arg2 originalEphemerality:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)_didFailWithError:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBNetworkerRequestDelegate.h>
#import <FBSharedFramework/FBCancelable.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol OS_dispatch_queue;
@class FBUserSession, MNMessagingRegionHeaderHelper, NSObject, FBGraphRequest, FBSimpleNetworkerRequest, NSString;

@interface MNBballGameScoreSender : NSObject <FBNetworkerRequestDelegate, FBCancelable, FBClassProvidable> {

	FBUserSession* _session;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	NSObject*<OS_dispatch_queue> _queue;
	FBGraphRequest* _bballGameScoreSenderRequest;
	FBSimpleNetworkerRequest* _networkerRequest;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 messagingRegionHeaderHelper:(id)arg2 queue:(id)arg3 ;
-(void)setGameScoreForThread:(id)arg1 score:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)_didFailWithError:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBOmnistore, MNSecureMessagingStoredProcedureCallbackDispatcher, MNSecureMessagingStoredProcedureResultStore, NSObject, NSMutableDictionary;

@interface MNSecureMessagingStoredProcedureRunner : NSObject {

	FBOmnistore* _omnistore;
	MNSecureMessagingStoredProcedureCallbackDispatcher* _callbackDispatcher;
	MNSecureMessagingStoredProcedureResultStore* _resultStore;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _callbacks;

}
-(void)addCallback:(/*^block*/id)arg1 forStoredProcedureKey:(int)arg2 ;
-(BOOL)applyStoredProcedure:(int)arg1 params:(id)arg2 ;
-(void)_didReceiveResult:(id)arg1 forStoredProcedure:(int)arg2 ;
-(BOOL)_processResult:(id)arg1 forStoredProcedure:(int)arg2 ;
-(id)initWithOmnistore:(id)arg1 callbackDispatcher:(id)arg2 resultStore:(id)arg3 queue:(id)arg4 ;
-(void)replayResults;
@end


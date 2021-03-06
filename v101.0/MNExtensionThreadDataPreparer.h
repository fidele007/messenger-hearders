/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNExtensionThreadDataPreparing.h>

@protocol OS_dispatch_queue;
@class MNExtensionThreadDataPreparingBehaviorCaller, MNMessagingAndUserDataPreparerRequestRunner, MNMessagingAndUserDataPreparerStateMachine, NSObject, NSString;

@interface MNExtensionThreadDataPreparer : NSObject <MNExtensionThreadDataPreparing> {

	MNExtensionThreadDataPreparingBehaviorCaller* _behaviorCaller;
	MNMessagingAndUserDataPreparerRequestRunner* _requestRunner;
	MNMessagingAndUserDataPreparerStateMachine* _stateMachine;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAuthenticationManager:(id)arg1 attachmentUtils:(id)arg2 threadStore:(id)arg3 userStore:(id)arg4 messageSendQuerier:(id)arg5 apnsMessageStore:(id)arg6 ephemeralMessageStatusCalculator:(id)arg7 messageOptimisticUpdateApplier:(id)arg8 analytics:(id)arg9 queue:(id)arg10 ;
-(id)prepareExtensionThreadDataForSyncedThreadKey:(id)arg1 numberOfMessages:(long long)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_canceledRequestWithId:(unsigned long long)arg1 ;
@end


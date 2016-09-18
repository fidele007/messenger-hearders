/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNEphemeralMessageExpirationTimerStoreUpdating, MNEphemeralMessageExpirationTimerQuerying, FBClock, OS_dispatch_queue;
@class NSObject, MNThreadViewModel, NSString;

@interface MNEphemeralMessagingMessagesViewTimerSetter : NSObject <MNThreadViewModelConfigurable> {

	id<MNEphemeralMessageExpirationTimerStoreUpdating> _timerStoreWriter;
	id<MNEphemeralMessageExpirationTimerQuerying> _timerQuerier;
	id<FBClock> _clock;
	NSObject*<OS_dispatch_queue> _queue;
	MNThreadViewModel* _threadViewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)initWithEphemeralMessagingExpirationTimerStoreWriter:(id)arg1 timerQuerier:(id)arg2 clock:(id)arg3 queue:(id)arg4 ;
-(void)_setOffExpirationTimersForAllEphemeralMessagesReceived:(id)arg1 onThread:(id)arg2 ;
-(void)_setExpirationBlanketTimestampForMessages:(id)arg1 onThread:(id)arg2 ;
-(unsigned long long)_nowInMilliseconds;
@end


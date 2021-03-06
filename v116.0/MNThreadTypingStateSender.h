/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNTypingStateListener.h>
#import <FBSharedFramework/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNAuthenticationManager;
@class FBMobileConfigContextManager, FBMMQTTSender, FBAnalytics, MNThreadViewModel, FBTimer, MNTypingIndicatorState, NSString;

@interface MNThreadTypingStateSender : NSObject <MNTypingStateListener, FBClassProvidable, MNThreadViewModelConfigurable> {

	FBMobileConfigContextManager* _configManager;
	FBMMQTTSender* _mqttSender;
	FBAnalytics* _analytics;
	id<MNAuthenticationManager> _authManager;
	MNThreadViewModel* _threadViewModel;
	double _activeTimeout;
	FBTimer* _activeTimeoutTimer;
	double _activeRepeatInterval;
	FBTimer* _activeRepeatTimer;
	MNTypingIndicatorState* _lastSentTypingIndicatorState;
	MNTypingIndicatorState* _typingIndicatorState;

}

@property (nonatomic,readonly) MNTypingIndicatorState * typingIndicatorState;              //@synthesize typingIndicatorState=_typingIndicatorState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)threadViewModel;
-(void)userDidEnterMiniApp:(long long)arg1 ;
-(void)userDidLeaveMiniApp:(long long)arg1 ;
-(id)initWithMobileConfigContextManager:(id)arg1 analytics:(id)arg2 mqttSender:(id)arg3 authManager:(id)arg4 activeTimeout:(double)arg5 activeRepeatInterval:(double)arg6 ;
-(void)_setTypingState:(long long)arg1 ;
-(void)_setTypingIndicatorState:(id)arg1 ;
-(void)_sendTypingState;
-(void)_ensureActiveRepeatTimer;
-(void)_ensureActiveTimeoutTimer;
-(BOOL)_shouldAllowMiniAppTypingState;
-(void)userMayStartTyping;
-(void)userDidType;
-(void)userDidFinishTyping;
-(MNTypingIndicatorState *)typingIndicatorState;
-(id)initWithProviderMapData:(id)arg1 ;
@end


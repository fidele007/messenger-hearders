/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNTypingNotificationManagerDelegate, FBClock, MNAuthenticationManager, FBTimerScheduler;
@class MNTypingIndicatorState, MNThreadViewModel, NSString, NSNotificationCenter, MNThreadTypingStateTracker, MNTypingAttribution;

@interface MNTypingNotificationManager : NSObject <MNThreadViewModelConfigurable> {

	MNTypingIndicatorState* _typingIndicatorState;
	id<MNTypingNotificationManagerDelegate> _delegate;
	MNThreadViewModel* _threadViewModel;
	NSString* _otherParticipantUserId;
	NSNotificationCenter* _notificationCenter;
	id<FBClock> _clock;
	id<MNAuthenticationManager> _authManager;
	id<FBTimerScheduler> _timerScheduler;
	MNThreadTypingStateTracker* _threadTypingStateTracker;
	double _lastTypingReceivedTime;
	long long _lastTypingReceivedState;
	MNTypingAttribution* _lastReceivedTypingAttribution;

}

@property (nonatomic,retain) MNThreadViewModel * threadViewModel;                                  //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (nonatomic,copy) NSString * otherParticipantUserId;                                      //@synthesize otherParticipantUserId=_otherParticipantUserId - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                            //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) id<FBClock> clock;                                                    //@synthesize clock=_clock - In the implementation block
@property (nonatomic,retain) id<MNAuthenticationManager> authManager;                              //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,retain) id<FBTimerScheduler> timerScheduler;                                  //@synthesize timerScheduler=_timerScheduler - In the implementation block
@property (nonatomic,retain) MNThreadTypingStateTracker * threadTypingStateTracker;                //@synthesize threadTypingStateTracker=_threadTypingStateTracker - In the implementation block
@property (nonatomic,copy) MNTypingIndicatorState * typingIndicatorState;                          //@synthesize typingIndicatorState=_typingIndicatorState - In the implementation block
@property (assign,nonatomic) double lastTypingReceivedTime;                                        //@synthesize lastTypingReceivedTime=_lastTypingReceivedTime - In the implementation block
@property (assign,nonatomic) long long lastTypingReceivedState;                                    //@synthesize lastTypingReceivedState=_lastTypingReceivedState - In the implementation block
@property (nonatomic,retain) MNTypingAttribution * lastReceivedTypingAttribution;                  //@synthesize lastReceivedTypingAttribution=_lastReceivedTypingAttribution - In the implementation block
@property (assign,nonatomic,__weak) id<MNTypingNotificationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isTyping; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)managerWithNotificationCenter:(id)arg1 clock:(id)arg2 timerScheduler:(id)arg3 authManager:(id)arg4 threadTypingStateTracker:(id)arg5 ;
-(void)setAuthManager:(id<MNAuthenticationManager>)arg1 ;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(MNThreadViewModel *)threadViewModel;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(MNThreadTypingStateTracker *)threadTypingStateTracker;
-(void)startManaging;
-(void)stopManaging;
-(BOOL)isTyping;
-(void)setTypingInactive;
-(MNTypingIndicatorState *)typingIndicatorState;
-(void)setTimerScheduler:(id<FBTimerScheduler>)arg1 ;
-(void)setThreadTypingStateTracker:(MNThreadTypingStateTracker *)arg1 ;
-(void)setOtherParticipantUserId:(NSString *)arg1 ;
-(void)didReceiveTypingNotification:(id)arg1 ;
-(NSString *)otherParticipantUserId;
-(void)updateWithReceivedTypingState:(long long)arg1 ;
-(void)updateWithReceivedTypingState:(long long)arg1 typingAttribution:(id)arg2 ;
-(void)setTypingIndicatorState:(MNTypingIndicatorState *)arg1 ;
-(void)setAndNotifyTypingActive;
-(void)checkTypingBecameInactive:(id)arg1 ;
-(void)setTypingInactiveAfterDelay:(id)arg1 ;
-(void)setAndNotifyTypingInactive;
-(void)setTypingActive;
-(id)typingParticipant;
-(id<FBTimerScheduler>)timerScheduler;
-(double)lastTypingReceivedTime;
-(void)setLastTypingReceivedTime:(double)arg1 ;
-(long long)lastTypingReceivedState;
-(void)setLastTypingReceivedState:(long long)arg1 ;
-(MNTypingAttribution *)lastReceivedTypingAttribution;
-(void)setLastReceivedTypingAttribution:(MNTypingAttribution *)arg1 ;
-(id<MNAuthenticationManager>)authManager;
-(void)setDelegate:(id<MNTypingNotificationManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNTypingNotificationManagerDelegate>)delegate;
-(id<FBClock>)clock;
-(void)setClock:(id<FBClock>)arg1 ;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(NSNotificationCenter *)notificationCenter;
@end


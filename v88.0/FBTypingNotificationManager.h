/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString;

@interface FBTypingNotificationManager : NSObject {

	BOOL _shouldBroadcastActiveTypingState;
	unsigned long long _typingState;
	FBUserSession* _session;
	NSString* _actorId;
	NSString* _feedbackId;
	double _lastTypingReceivedTime;
	unsigned long long _lastTypingReceivedState;

}

@property (nonatomic,retain) FBUserSession * session;                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                        //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * feedbackId;                                     //@synthesize feedbackId=_feedbackId - In the implementation block
@property (assign,nonatomic) double lastTypingReceivedTime;                           //@synthesize lastTypingReceivedTime=_lastTypingReceivedTime - In the implementation block
@property (assign,nonatomic) unsigned long long lastTypingReceivedState;              //@synthesize lastTypingReceivedState=_lastTypingReceivedState - In the implementation block
@property (assign,nonatomic) BOOL shouldBroadcastActiveTypingState;                   //@synthesize shouldBroadcastActiveTypingState=_shouldBroadcastActiveTypingState - In the implementation block
@property (assign,nonatomic) unsigned long long typingState;                          //@synthesize typingState=_typingState - In the implementation block
+(id)managerWithSession:(id)arg1 actorId:(id)arg2 feedbackId:(id)arg3 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(unsigned long long)typingState;
-(void)setAndNotifyTypingActive;
-(void)checkTypingBecameInactive:(id)arg1 ;
-(void)setTypingInactiveAfterDelay:(id)arg1 ;
-(void)setAndNotifyTypingInactive;
-(void)setTypingState:(unsigned long long)arg1 ;
-(double)lastTypingReceivedTime;
-(void)setLastTypingReceivedTime:(double)arg1 ;
-(unsigned long long)lastTypingReceivedState;
-(void)setLastTypingReceivedState:(unsigned long long)arg1 ;
-(void)setFeedbackId:(NSString *)arg1 ;
-(void)setShouldBroadcastActiveTypingState:(BOOL)arg1 ;
-(BOOL)_shouldUpdateAndBroadcastCommentTypingState;
-(void)allowActiveTypingStateBroadcast:(id)arg1 ;
-(void)_broadcastCommentTypingState:(unsigned long long)arg1 ;
-(NSString *)feedbackId;
-(void)updateWithReceivedTypingState:(unsigned long long)arg1 withInactiveDelay:(BOOL)arg2 ;
-(BOOL)shouldBroadcastActiveTypingState;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end


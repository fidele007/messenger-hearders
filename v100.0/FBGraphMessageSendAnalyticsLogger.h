/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphMessageSendListening.h>

@protocol FBGraphMessageSendRequestRunnerDelegate;
@class FBReachabilityAnnouncer, FBAnalytics, NSString;

@interface FBGraphMessageSendAnalyticsLogger : NSObject <FBGraphMessageSendListening> {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	FBAnalytics* _analytics;
	NSString* _sessionId;
	id<FBGraphMessageSendRequestRunnerDelegate> _runnerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphMessageSendRequestRunnerWillSendMessage:(id)arg1 ;
-(void)graphMessageSendRequestRunnerDidUpdateProgressForMessage:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(void)graphMessageSendRequestRunnerDidSendMessage:(id)arg1 messageId:(id)arg2 ;
-(void)graphMessageSendRequestRunnerDidCancelSendingMessage:(id)arg1 ;
-(void)graphMessageSendRequestRunnerCouldNotSendMessage:(id)arg1 error:(id)arg2 ;
-(void)graphMessageSendRequestRunnerWillRetrySendingMessage:(id)arg1 ;
-(id)initWithReachabilityAnnouncer:(id)arg1 analytics:(id)arg2 sessionId:(id)arg3 runnerDelegate:(id)arg4 ;
-(void)graphMessageSendRequestRunnerDidNotSendMessageDueToNoConnection:(id)arg1 error:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNFailedMessageHandlingListener;
@class MNMessageFailureHandlingManager;

@interface MNFailedMessageHandlingController : NSObject {

	MNMessageFailureHandlingManager* _messageFailureHandlingManager;
	id<MNFailedMessageHandlingListener> _failedMessageHandlingListener;

}
-(id)initWithMessageFailureHandlingManager:(id)arg1 failedMessageHandlingListener:(id)arg2 ;
-(void)handleFailedMessage:(id)arg1 fromView:(id)arg2 ;
-(void)_handleResult:(long long)arg1 forFailedMessage:(id)arg2 ;
-(void)_handleSelectRetrySendMessage:(id)arg1 ;
-(void)_handleSelectRetrySendAllMessages;
-(void)_handleSelectReportAProblem:(id)arg1 ;
-(void)_handleCancelFailedMessage:(id)arg1 ;
-(void)_handleViewFailedPhoto:(id)arg1 ;
-(void)_handlePlayFailedVideo:(id)arg1 ;
-(void)_handleListenToFailedAudio:(id)arg1 ;
@end

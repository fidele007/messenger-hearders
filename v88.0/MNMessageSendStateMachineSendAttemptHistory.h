/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface MNMessageSendStateMachineSendAttemptHistory : FBValueObject <NSCopying> {

	long long _numberOfAttemptsOnExtension;
	long long _numberOfAttemptsOnMqtt;
	long long _numberOfAttemptsOnGraph;
	double _sendDuration;
	unsigned long long _lastAttemptMessageSendMethod;
	unsigned long long _lastFailedMessageSendMethod;
	NSError* _lastSendError;

}

@property (nonatomic,readonly) long long numberOfAttemptsOnExtension;                        //@synthesize numberOfAttemptsOnExtension=_numberOfAttemptsOnExtension - In the implementation block
@property (nonatomic,readonly) long long numberOfAttemptsOnMqtt;                             //@synthesize numberOfAttemptsOnMqtt=_numberOfAttemptsOnMqtt - In the implementation block
@property (nonatomic,readonly) long long numberOfAttemptsOnGraph;                            //@synthesize numberOfAttemptsOnGraph=_numberOfAttemptsOnGraph - In the implementation block
@property (nonatomic,readonly) double sendDuration;                                          //@synthesize sendDuration=_sendDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long lastAttemptMessageSendMethod;              //@synthesize lastAttemptMessageSendMethod=_lastAttemptMessageSendMethod - In the implementation block
@property (nonatomic,readonly) unsigned long long lastFailedMessageSendMethod;               //@synthesize lastFailedMessageSendMethod=_lastFailedMessageSendMethod - In the implementation block
@property (nonatomic,copy,readonly) NSError * lastSendError;                                 //@synthesize lastSendError=_lastSendError - In the implementation block
-(unsigned long long)lastAttemptMessageSendMethod;
-(long long)numberOfAttemptsOnExtension;
-(long long)numberOfAttemptsOnMqtt;
-(long long)numberOfAttemptsOnGraph;
-(NSError *)lastSendError;
-(unsigned long long)lastFailedMessageSendMethod;
-(id)initWithNumberOfAttemptsOnExtension:(long long)arg1 numberOfAttemptsOnMqtt:(long long)arg2 numberOfAttemptsOnGraph:(long long)arg3 sendDuration:(double)arg4 lastAttemptMessageSendMethod:(unsigned long long)arg5 lastFailedMessageSendMethod:(unsigned long long)arg6 lastSendError:(id)arg7 ;
-(double)sendDuration;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBOutgoingMessageFailure;

@interface MNMessageSendStateInfo : FBValueObject <NSCopying> {

	unsigned long long _sendState;
	unsigned long long _sendTimestamp;
	FBOutgoingMessageFailure* _lastFailure;

}

@property (nonatomic,readonly) unsigned long long sendState;                             //@synthesize sendState=_sendState - In the implementation block
@property (nonatomic,readonly) unsigned long long sendTimestamp;                         //@synthesize sendTimestamp=_sendTimestamp - In the implementation block
@property (nonatomic,copy,readonly) FBOutgoingMessageFailure * lastFailure;              //@synthesize lastFailure=_lastFailure - In the implementation block
-(unsigned long long)sendState;
-(unsigned long long)sendTimestamp;
-(FBOutgoingMessageFailure *)lastFailure;
-(id)initWithSendState:(unsigned long long)arg1 sendTimestamp:(unsigned long long)arg2 lastFailure:(id)arg3 ;
@end


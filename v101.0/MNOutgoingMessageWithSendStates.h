/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBOutgoingMessage, MNMessageSendStateInfo;

@interface MNOutgoingMessageWithSendStates : FBValueObject <NSCopying, NSCoding> {

	FBOutgoingMessage* _message;
	MNMessageSendStateInfo* _sendStates;

}

@property (nonatomic,copy,readonly) FBOutgoingMessage * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) MNMessageSendStateInfo * sendStates;              //@synthesize sendStates=_sendStates - In the implementation block
-(MNMessageSendStateInfo *)sendStates;
-(id)initWithMessage:(id)arg1 sendStates:(id)arg2 ;
-(FBOutgoingMessage *)message;
@end

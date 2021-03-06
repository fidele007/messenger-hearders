/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSecureOutgoingMessage, NSSet, MNSecureMessageSendRetryInProgress;

@interface MNSecureMessageSendRetry : FBValueObject <NSCoding, NSCopying> {

	MNSecureOutgoingMessage* _message;
	unsigned long long _orginalSendTime;
	NSSet* _devicesWaitingForRetry;
	MNSecureMessageSendRetryInProgress* _deviceWithRetryInProgress;
	NSSet* _devicesAlreadyRetried;

}

@property (nonatomic,copy,readonly) MNSecureOutgoingMessage * message;                                           //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) unsigned long long orginalSendTime;                                               //@synthesize orginalSendTime=_orginalSendTime - In the implementation block
@property (nonatomic,copy,readonly) NSSet * devicesWaitingForRetry;                                              //@synthesize devicesWaitingForRetry=_devicesWaitingForRetry - In the implementation block
@property (nonatomic,copy,readonly) MNSecureMessageSendRetryInProgress * deviceWithRetryInProgress;              //@synthesize deviceWithRetryInProgress=_deviceWithRetryInProgress - In the implementation block
@property (nonatomic,copy,readonly) NSSet * devicesAlreadyRetried;                                               //@synthesize devicesAlreadyRetried=_devicesAlreadyRetried - In the implementation block
-(MNSecureMessageSendRetryInProgress *)deviceWithRetryInProgress;
-(unsigned long long)orginalSendTime;
-(NSSet *)devicesWaitingForRetry;
-(id)initWithMessage:(id)arg1 orginalSendTime:(unsigned long long)arg2 devicesWaitingForRetry:(id)arg3 deviceWithRetryInProgress:(id)arg4 devicesAlreadyRetried:(id)arg5 ;
-(NSSet *)devicesAlreadyRetried;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MNSecureOutgoingMessage *)message;
@end


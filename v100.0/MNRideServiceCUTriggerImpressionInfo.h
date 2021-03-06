/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNRideServiceCUTriggerImpressionInfo : FBValueObject <NSCopying> {

	NSString* _messageId;
	unsigned long long _timestamp;

}

@property (nonatomic,copy,readonly) NSString * messageId;                 //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithMessageId:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(unsigned long long)timestamp;
-(NSString *)messageId;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMSyncedThreadKey, NSSet;

@interface FBMDeliveryReceipt : FBValueObject <NSCopying> {

	NSString* _senderId;
	FBMSyncedThreadKey* _threadKey;
	long long _timestamp;
	NSSet* _messageIds;
	unsigned long long _source;

}

@property (nonatomic,copy,readonly) NSString * senderId;                         //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;              //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSSet * messageIds;                          //@synthesize messageIds=_messageIds - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                        //@synthesize source=_source - In the implementation block
-(NSString *)senderId;
-(id)initWithSenderId:(id)arg1 threadKey:(id)arg2 timestamp:(long long)arg3 messageIds:(id)arg4 source:(unsigned long long)arg5 ;
-(NSSet *)messageIds;
-(long long)timestamp;
-(unsigned long long)source;
-(FBMSyncedThreadKey *)threadKey;
@end

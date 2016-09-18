/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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


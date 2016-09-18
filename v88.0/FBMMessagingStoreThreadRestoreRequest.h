/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey;

@interface FBMMessagingStoreThreadRestoreRequest : FBValueObject <NSCopying> {

	FBMSyncedThreadKey* _threadKey;
	long long _numberOfMessagesRequested;
	unsigned long long _beforeTimestamp;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;              //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) long long numberOfMessagesRequested;              //@synthesize numberOfMessagesRequested=_numberOfMessagesRequested - In the implementation block
@property (nonatomic,readonly) unsigned long long beforeTimestamp;               //@synthesize beforeTimestamp=_beforeTimestamp - In the implementation block
-(id)initWithThreadKey:(id)arg1 numberOfMessagesRequested:(long long)arg2 beforeTimestamp:(unsigned long long)arg3 ;
-(long long)numberOfMessagesRequested;
-(unsigned long long)beforeTimestamp;
-(FBMSyncedThreadKey *)threadKey;
@end


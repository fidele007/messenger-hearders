/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMSyncedThreadKey;

@interface MNIncrementalPersistenceJobDescriptionMessageIdentifier : FBValueObject <NSCopying> {

	NSString* _messageId;
	NSString* _offlineThreadingId;
	FBMSyncedThreadKey* _threadKey;

}

@property (nonatomic,copy,readonly) NSString * messageId;                        //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * offlineThreadingId;               //@synthesize offlineThreadingId=_offlineThreadingId - In the implementation block
@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;              //@synthesize threadKey=_threadKey - In the implementation block
-(NSString *)offlineThreadingId;
-(id)initWithMessageId:(id)arg1 offlineThreadingId:(id)arg2 threadKey:(id)arg3 ;
-(FBMSyncedThreadKey *)threadKey;
-(NSString *)messageId;
@end

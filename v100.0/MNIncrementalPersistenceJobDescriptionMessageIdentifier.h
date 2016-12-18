/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSDictionary;

@interface MNForwardMessageBatchSendResultInfo : FBValueObject <NSCopying> {

	NSString* _batchId;
	NSSet* _succeededMessageIdsSet;
	NSDictionary* _messageIdToErrorMap;

}

@property (nonatomic,copy,readonly) NSString * batchId;                              //@synthesize batchId=_batchId - In the implementation block
@property (nonatomic,copy,readonly) NSSet * succeededMessageIdsSet;                  //@synthesize succeededMessageIdsSet=_succeededMessageIdsSet - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * messageIdToErrorMap;              //@synthesize messageIdToErrorMap=_messageIdToErrorMap - In the implementation block
-(id)initWithBatchId:(id)arg1 succeededMessageIdsSet:(id)arg2 messageIdToErrorMap:(id)arg3 ;
-(NSSet *)succeededMessageIdsSet;
-(NSDictionary *)messageIdToErrorMap;
-(NSString *)batchId;
@end


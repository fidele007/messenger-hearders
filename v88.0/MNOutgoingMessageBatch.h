/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MNOutgoingMessageBatch : FBValueObject <NSCopying> {

	NSString* _batchId;
	NSArray* _messages;

}

@property (nonatomic,copy,readonly) NSString * batchId;              //@synthesize batchId=_batchId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * messages;              //@synthesize messages=_messages - In the implementation block
-(id)initWithBatchId:(id)arg1 messages:(id)arg2 ;
-(NSArray *)messages;
-(NSString *)batchId;
@end


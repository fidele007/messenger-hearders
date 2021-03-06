/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNHandlerThreadSummaryRequest, MNHandlerMessageBatchRequest;

@interface MNHandlerJointRequest : FBValueObject <NSCopying> {

	MNHandlerThreadSummaryRequest* _threadSummaryRequest;
	MNHandlerMessageBatchRequest* _messageBatchRequest;

}

@property (nonatomic,copy,readonly) MNHandlerThreadSummaryRequest * threadSummaryRequest;              //@synthesize threadSummaryRequest=_threadSummaryRequest - In the implementation block
@property (nonatomic,copy,readonly) MNHandlerMessageBatchRequest * messageBatchRequest;                //@synthesize messageBatchRequest=_messageBatchRequest - In the implementation block
-(MNHandlerThreadSummaryRequest *)threadSummaryRequest;
-(MNHandlerMessageBatchRequest *)messageBatchRequest;
-(id)initWithThreadSummaryRequest:(id)arg1 messageBatchRequest:(id)arg2 ;
@end


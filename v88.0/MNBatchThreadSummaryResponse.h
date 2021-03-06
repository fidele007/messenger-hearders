/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSSet;

@interface MNBatchThreadSummaryResponse : FBValueObject <NSCopying> {

	NSDictionary* _threadQueryToThreadSummaryMap;
	NSSet* _threadQueriesWhoseThreadsDoNotExist;

}

@property (nonatomic,copy,readonly) NSDictionary * threadQueryToThreadSummaryMap;              //@synthesize threadQueryToThreadSummaryMap=_threadQueryToThreadSummaryMap - In the implementation block
@property (nonatomic,copy,readonly) NSSet * threadQueriesWhoseThreadsDoNotExist;               //@synthesize threadQueriesWhoseThreadsDoNotExist=_threadQueriesWhoseThreadsDoNotExist - In the implementation block
-(NSDictionary *)threadQueryToThreadSummaryMap;
-(id)initWithThreadQueryToThreadSummaryMap:(id)arg1 threadQueriesWhoseThreadsDoNotExist:(id)arg2 ;
-(NSSet *)threadQueriesWhoseThreadsDoNotExist;
@end


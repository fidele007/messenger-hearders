/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNAggregatedSeenHeadViewModel : FBValueObject <NSCopying> {

	unsigned long long _aggregatedCount;
	unsigned long long _seenHeadSize;

}

@property (nonatomic,readonly) unsigned long long aggregatedCount;              //@synthesize aggregatedCount=_aggregatedCount - In the implementation block
@property (nonatomic,readonly) unsigned long long seenHeadSize;                 //@synthesize seenHeadSize=_seenHeadSize - In the implementation block
-(unsigned long long)seenHeadSize;
-(unsigned long long)aggregatedCount;
-(id)initWithAggregatedCount:(unsigned long long)arg1 seenHeadSize:(unsigned long long)arg2 ;
@end


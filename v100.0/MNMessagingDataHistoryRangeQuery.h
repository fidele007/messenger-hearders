/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessagingDataHistoryRangeQuery : FBValueObject <NSCopying> {

	long long _maxNumberOfItems;
	unsigned long long _olderThanTimestamp;

}

@property (nonatomic,readonly) long long maxNumberOfItems;                         //@synthesize maxNumberOfItems=_maxNumberOfItems - In the implementation block
@property (nonatomic,readonly) unsigned long long olderThanTimestamp;              //@synthesize olderThanTimestamp=_olderThanTimestamp - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithMaxNumberOfItems:(long long)arg1 olderThanTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)olderThanTimestamp;
-(long long)maxNumberOfItems;
@end


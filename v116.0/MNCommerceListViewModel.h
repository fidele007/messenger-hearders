/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNCommerceListViewModel : FBValueObject <NSCopying> {

	NSArray* _items;
	unsigned long long _style;
	long long _totalCount;
	long long _maxVisibleCount;

}

@property (nonatomic,copy,readonly) NSArray * items;                   //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long style;               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long totalCount;                   //@synthesize totalCount=_totalCount - In the implementation block
@property (nonatomic,readonly) long long maxVisibleCount;              //@synthesize maxVisibleCount=_maxVisibleCount - In the implementation block
-(id)initWithItems:(id)arg1 style:(unsigned long long)arg2 totalCount:(long long)arg3 maxVisibleCount:(long long)arg4 ;
-(long long)maxVisibleCount;
-(NSArray *)items;
-(unsigned long long)style;
-(long long)totalCount;
@end


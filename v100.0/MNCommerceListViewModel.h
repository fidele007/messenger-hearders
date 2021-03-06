/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
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
-(long long)maxVisibleCount;
-(id)initWithItems:(id)arg1 style:(unsigned long long)arg2 totalCount:(long long)arg3 maxVisibleCount:(long long)arg4 ;
-(unsigned long long)style;
-(NSArray *)items;
-(long long)totalCount;
@end


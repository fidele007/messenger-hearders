/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNHorizontalLineLayoutSectionInfo : FBValueObject <NSCopying> {

	long long _itemsCount;
	UIEdgeInsets _sectionInsets;

}

@property (nonatomic,readonly) long long itemsCount;                    //@synthesize itemsCount=_itemsCount - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets sectionInsets;              //@synthesize sectionInsets=_sectionInsets - In the implementation block
-(id)initWithItemsCount:(long long)arg1 sectionInsets:(UIEdgeInsets)arg2 ;
-(long long)itemsCount;
-(UIEdgeInsets)sectionInsets;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNCollectionViewLayoutConfiguration : FBValueObject <NSCopying> {

	double _lineSpacing;
	double _interItemSpacing;
	unsigned long long _numberOfVisibleItems;
	unsigned long long _maximumNumberOfItems;
	CGSize _size;
	CGSize _itemSize;
	CGPoint _contentOffset;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) CGSize size;                                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) CGSize itemSize;                                      //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,readonly) double lineSpacing;                                   //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,readonly) double interItemSpacing;                              //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (nonatomic,readonly) CGPoint contentOffset;                                //@synthesize contentOffset=_contentOffset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInset;                            //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfVisibleItems;              //@synthesize numberOfVisibleItems=_numberOfVisibleItems - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNumberOfItems;              //@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 itemSize:(CGSize)arg2 lineSpacing:(double)arg3 interItemSpacing:(double)arg4 contentOffset:(CGPoint)arg5 contentInset:(UIEdgeInsets)arg6 numberOfVisibleItems:(unsigned long long)arg7 maximumNumberOfItems:(unsigned long long)arg8 ;
-(CGSize)size;
-(CGPoint)contentOffset;
-(UIEdgeInsets)contentInset;
-(double)lineSpacing;
-(CGSize)itemSize;
-(double)interItemSpacing;
-(unsigned long long)numberOfVisibleItems;
-(unsigned long long)maximumNumberOfItems;
@end


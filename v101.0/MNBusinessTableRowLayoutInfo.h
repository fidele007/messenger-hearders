/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNBusinessTableRowLayoutInfo : FBValueObject <NSCopying> {

	NSArray* _relativeWidths;
	double _topInset;
	double _minCellSpacing;

}

@property (nonatomic,copy,readonly) NSArray * relativeWidths;              //@synthesize relativeWidths=_relativeWidths - In the implementation block
@property (nonatomic,readonly) double topInset;                            //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,readonly) double minCellSpacing;                      //@synthesize minCellSpacing=_minCellSpacing - In the implementation block
+(id)MNBusinessTableRowLayoutBalancedWithColumnCount:(long long)arg1 tableRowSpacing:(double)arg2 tableCellSpacing:(double)arg3 ;
-(double)minCellSpacing;
-(NSArray *)relativeWidths;
-(id)initWithRelativeWidths:(id)arg1 topInset:(double)arg2 minCellSpacing:(double)arg3 ;
-(double)topInset;
@end


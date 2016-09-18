/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBListViewScrollState : NSObject {

	long long _rowIndex;
	double _scrollOffsetInCell;
	unsigned long long _scrollDirection;
	unsigned long long _preferredScrollPosition;
	CGPoint _fixedEdgeOffset;

}

@property (nonatomic,readonly) long long rowIndex;                                      //@synthesize rowIndex=_rowIndex - In the implementation block
@property (nonatomic,readonly) double scrollOffsetInCell;                               //@synthesize scrollOffsetInCell=_scrollOffsetInCell - In the implementation block
@property (nonatomic,readonly) unsigned long long scrollDirection;                      //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredScrollPosition;              //@synthesize preferredScrollPosition=_preferredScrollPosition - In the implementation block
@property (nonatomic,readonly) CGPoint fixedEdgeOffset;                                 //@synthesize fixedEdgeOffset=_fixedEdgeOffset - In the implementation block
-(id)initWithRowIndex:(long long)arg1 scrollOffsetInCell:(double)arg2 scrollDirection:(unsigned long long)arg3 preferredScrollPosition:(unsigned long long)arg4 fixedEdgeOffset:(CGPoint)arg5 ;
-(double)scrollOffsetInCell;
-(unsigned long long)preferredScrollPosition;
-(CGPoint)fixedEdgeOffset;
-(id)description;
-(long long)rowIndex;
-(unsigned long long)scrollDirection;
@end


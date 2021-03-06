/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBComponentWorkingRangeSnapshot.h>

@class NSArray;

@interface FBMutableComponentWorkingRangeSnapshot : FBComponentWorkingRangeSnapshot {

	NSArray* _itemViewStates;
	double _timestamp;
	/*^block*/id _completionBlock;
	CGRect _visibleBounds;

}

@property (assign,nonatomic) CGRect visibleBounds;                //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (nonatomic,copy) NSArray * itemViewStates;              //@synthesize itemViewStates=_itemViewStates - In the implementation block
@property (assign,nonatomic) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) id completionBlock;                    //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)setItemViewStates:(NSArray *)arg1 ;
-(NSArray *)itemViewStates;
-(double)timestamp;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)visibleBounds;
-(void)setVisibleBounds:(CGRect)arg1 ;
@end


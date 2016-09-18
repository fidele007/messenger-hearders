/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@protocol FBExpandableButtonContents;
@interface FBExpandableButton : UIControl {

	id<FBExpandableButtonContents> _contents;
	UIEdgeInsets _collapsedHitTestSlop;
	UIEdgeInsets _expandedHitTestSlop;
	double _expansionProgress;

}

@property (assign,nonatomic) double expansionProgress;              //@synthesize expansionProgress=_expansionProgress - In the implementation block
+(id)buttonWithType:(unsigned long long)arg1 ;
-(void)setExpansionProgress:(double)arg1 ;
-(double)expansionProgress;
-(CGRect)_transitionFrameWithExpansionProgress:(double)arg1 bounds:(CGRect)arg2 ;
-(void)_updatePositionsWithTransitionFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithContents:(id)arg1 ;
@end


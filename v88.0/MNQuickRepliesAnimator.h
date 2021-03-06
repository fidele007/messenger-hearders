/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNQuickRepliesView;

@interface MNQuickRepliesAnimator : NSObject {

	MNQuickRepliesView* _view;
	double _delayBetweenCells;
	double _duration;
	double _yOffset;

}

@property (assign,nonatomic) double delayBetweenCells;              //@synthesize delayBetweenCells=_delayBetweenCells - In the implementation block
@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double yOffset;                        //@synthesize yOffset=_yOffset - In the implementation block
-(void)updateStartingPositionsForAnimateInQuickReplies;
-(void)animateInQuickRepliesWithCenterIndex:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateOutQuickRepliesWithCenterIndex:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)revokeQuickRepliesAnimationPreparation;
-(id)_cellsToAnimate;
-(void)_animateQuickRepliesWithCells:(id)arg1 centerIndex:(int)arg2 offset:(double)arg3 completion:(/*^block*/id)arg4 ;
-(double)delayBetweenCells;
-(id)initWithQuickRepliesView:(id)arg1 ;
-(void)setDelayBetweenCells:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)yOffset;
-(void)setYOffset:(double)arg1 ;
@end


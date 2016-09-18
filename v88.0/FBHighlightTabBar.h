/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UISegmentedControl, UIView;

@interface FBHighlightTabBar : UIView {

	UISegmentedControl* _segmentControl;
	UIView* _highlightIndicatorView;
	long long _highlightedTabIndex;
	double _pagingProgress;

}

@property (assign,nonatomic) long long highlightedTabIndex;              //@synthesize highlightedTabIndex=_highlightedTabIndex - In the implementation block
@property (assign,nonatomic) double pagingProgress;                      //@synthesize pagingProgress=_pagingProgress - In the implementation block
-(id)initWithSegmentControl:(id)arg1 ;
-(CGRect)_frameForHighlightIndicatorViewAtTabIndex:(unsigned long long)arg1 ;
-(CGRect)_frameForHighlightIndicatorViewWithPagingProgress:(double)arg1 ;
-(CGRect)_apportionFameForHighlightIndicatorViewWithPagingProgress:(double)arg1 ;
-(CGRect)_nonApportionFameForHighlightIndicatorViewWithPagingProgress:(double)arg1 ;
-(CGRect)_apportionFrameForHighlightIndicatorViewAtTabIndex:(unsigned long long)arg1 ;
-(CGRect)_nonApportionFrameForHighlightIndicatorViewAtTabIndex:(unsigned long long)arg1 ;
-(void)setHighlightedTabIndex:(long long)arg1 ;
-(void)setPagingProgress:(double)arg1 ;
-(long long)highlightedTabIndex;
-(double)pagingProgress;
-(void)layoutSubviews;
@end


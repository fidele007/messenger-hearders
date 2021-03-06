/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>

@class FBKVOController;

@interface MNStackedContainerScrollView : UIScrollView {

	FBKVOController* _kvoController;
	double _scrollOffset;

}

@property (assign,nonatomic) double scrollOffset;              //@synthesize scrollOffset=_scrollOffset - In the implementation block
-(void)_didObserveContentSizeForObject:(id)arg1 withChange:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didAddSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(double)scrollOffset;
-(void)setScrollOffset:(double)arg1 ;
@end


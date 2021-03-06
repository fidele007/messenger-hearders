/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol MNBotMenuContainerViewDelegate;
@class MNBotMenuContainerScrollView, UIView, NSString;

@interface MNBotMenuContainerView : UIView <UIScrollViewDelegate> {

	MNBotMenuContainerScrollView* _scrollView;
	id<MNBotMenuContainerViewDelegate> _delegate;
	UIView* _contentView;

}

@property (assign,nonatomic,__weak) id<MNBotMenuContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                            //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)_topOffset;
-(double)contentVisibleHeight;
-(void)mn_invalidateLayoutForView:(id)arg1 ;
-(CGPoint)_bottomOffset;
-(void)_scrollsToTopOrBottomWithScrollView:(id)arg1 ;
-(void)scrollsToBottomAnimated:(BOOL)arg1 ;
-(void)scrollsToTopAnimated:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setDelegate:(id<MNBotMenuContainerViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNBotMenuContainerViewDelegate>)delegate;
@end


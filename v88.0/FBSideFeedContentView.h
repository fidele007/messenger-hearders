/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/FBAccessibilityInvalidationEventsListener.h>
#import <Messenger/FBSideFeedResizingViewProtocol.h>

@protocol FBSideFeedResizingViewDelegate, FBSideFeedContentViewDelegate;
@class FBSideFeedViewColumnLayout, UIView, UIScrollView, NSArray, NSString;

@interface FBSideFeedContentView : UIView <UIScrollViewDelegate, FBAccessibilityInvalidationEventsListener, FBSideFeedResizingViewProtocol> {

	FBSideFeedViewColumnLayout* _unitViewLayout;
	unsigned long long _exclusiveUnitViewIndex;
	CGPoint _scrollViewContentOffsetBeforeExclusiveAnimation;
	BOOL _hasLaidOutNewUnitViews;
	UIView* _card;
	UIEdgeInsets _cardInsets;
	id<FBSideFeedResizingViewDelegate> resizingViewDelegate;
	id<FBSideFeedContentViewDelegate> _delegate;
	UIScrollView* _scrollView;

}

@property (assign,nonatomic,__weak) id<FBSideFeedContentViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * unitViews; 
@property (nonatomic,readonly) UIScrollView * scrollView;                                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSideFeedResizingViewDelegate> resizingViewDelegate; 
-(void)didReceiveFontInvalidation;
-(double)_cachedContentHeight;
-(void)_layoutSubviewsAnimated:(BOOL)arg1 completionIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_layoutUnitViewsAnimated:(BOOL)arg1 completionIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_layoutScrollViewAnimated:(BOOL)arg1 ;
-(id<FBSideFeedResizingViewDelegate>)resizingViewDelegate;
-(void)contentViewScrolledToContentOffset:(double)arg1 visibleHeight:(double)arg2 ;
-(BOOL)_isAnimatingObject:(id)arg1 withKey:(id)arg2 ;
-(void)_animateScrollView:(id)arg1 toContentSize:(CGSize)arg2 ;
-(void)_layoutUnitViewAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CGPoint)_centerForUnitViewAtIndex:(unsigned long long)arg1 withBounds:(CGRect)arg2 ;
-(double)_rotationForUnitViewAtIndex:(unsigned long long)arg1 ;
-(void)_animateUnitView:(id)arg1 toBounds:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isInExclusiveUnitViewMode;
-(void)_animateUnitView:(id)arg1 toCenter:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(void)_animateUnitViewLayer:(id)arg1 toRotation:(double)arg2 ;
-(CGPoint)_topOffscreenCenterForBounds:(CGRect)arg1 ;
-(CGPoint)_bottomOffscreenCenterForBounds:(CGRect)arg1 ;
-(double)_topOffscreenRotation;
-(double)_bottomOffscreenRotation;
-(void)_animateScrollView:(id)arg1 toContentOffset:(CGPoint)arg2 ;
-(void)_animateExclusiveModeChangeForUnitViewAtIndex:(unsigned long long)arg1 ;
-(void)_animateExclusiveModeChangeForScrollView;
-(void)setUnitViewExclusiveAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setResizingViewDelegate:(id<FBSideFeedResizingViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 useScrollView:(BOOL)arg2 cardStyle:(long long)arg3 ;
-(NSArray *)unitViews;
-(void)setUnitViews:(NSArray *)arg1 ;
-(void)unitViewDidChangeHeightAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)scrollUnitViewToTopAtIndex:(unsigned long long)arg1 ;
-(void)removeUnitViewAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<FBSideFeedContentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBSideFeedContentViewDelegate>)delegate;
-(UIScrollView *)scrollView;
-(void)_layoutSubviewsAnimated:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContentRectProviding.h>
#import <Messenger/FBFeedScrollingDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, NSString;

@interface FBFeedScrollingTracker : NSObject <FBContentRectProviding, FBFeedScrollingDelegate, UIScrollViewDelegate> {

	UIScrollView* _scrollView;
	double _lastVerticalOffset;
	BOOL _scrollingDown;
	BOOL _scrollDecelerating;
	double _lastScrollingDirectionChangeTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double contentVerticalOffset; 
@property (nonatomic,readonly) double lastScrollingDirectionChange; 
@property (nonatomic,readonly) BOOL scrollDecelerating; 
@property (nonatomic,readonly) double playThreshold; 
@property (nonatomic,readonly) double slowdownScrollVelocityPlayThreshold; 
@property (nonatomic,readonly) BOOL providesScoreForContainerRect; 
+(id)newWithScrollView:(id)arg1 ;
-(double)contentVerticalOffset;
-(double)playThreshold;
-(float)scoreForContainerRect:(CGRect)arg1 withVisibleScrollViewRect:(CGRect)arg2 ;
-(double)lastScrollingDirectionChange;
-(BOOL)scrollDecelerating;
-(double)slowdownScrollVelocityPlayThreshold;
-(BOOL)providesScoreForContainerRect;
-(CGRect)fb_visibleContentRect;
-(void)_updateScrollingDirectionIfNeeded;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithScrollView:(id)arg1 ;
@end


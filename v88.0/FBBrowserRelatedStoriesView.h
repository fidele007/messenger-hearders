/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/FBBrowserRelatedStoryTileViewDelegate.h>

@protocol FBBrowserRelatedStoriesViewDelegate;
@class UIImageView, UIButton, UILabel, UIView, NSArray, UIScrollView, UIPageControl, NSString;

@interface FBBrowserRelatedStoriesView : UIView <UIScrollViewDelegate, FBBrowserRelatedStoryTileViewDelegate> {

	UIImageView* _appIconImageView;
	UIButton* _toggleMinimizeFooterButton;
	UILabel* _relatedStoriesTextLabel;
	UIView* _headerView;
	UIView* _belowHeaderThinLineView;
	UIView* _aboveHeaderThinLineView;
	NSArray* _tiles;
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	UIView* _paginatedScrollView;
	BOOL _isMinimized;
	id<FBBrowserRelatedStoriesViewDelegate> _relatedStoriesViewDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)relatedStoryTapped:(id)arg1 ;
-(void)_toggleMinimizeButtonTapped;
-(id)initWithRelatedStories:(id)arg1 relatedStoriesViewDelegate:(id)arg2 session:(id)arg3 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end


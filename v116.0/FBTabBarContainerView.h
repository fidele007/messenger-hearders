/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBTabBarContainerView.h>

@protocol FBTabBarContainerView
@property (assign,nonatomic) unsigned long long tabBarPosition; 
@property (assign,nonatomic) unsigned long long tabBarIconSize; 
@property (assign,nonatomic) double topLayoutGuideLength; 
@property (assign,nonatomic) double bottomLayoutGuideLength; 
@property (assign,nonatomic) BOOL extendViewBelowTabBar; 
@property (assign,nonatomic) BOOL hasFullScreenTabBarController; 
@required
-(void)remountTabBar;
-(unsigned long long)tabBarIconSize;
-(void)setTabBarView:(id)arg1;
-(void)setTabBarViewOffsetFraction:(double)arg1 animated:(BOOL)arg2;
-(unsigned long long)tabBarPosition;
-(void)setTabBarPosition:(unsigned long long)arg1;
-(void)setTabBarIconSize:(unsigned long long)arg1;
-(double)tabBarViewOffsetFraction;
-(BOOL)extendViewBelowTabBar;
-(void)setExtendViewBelowTabBar:(BOOL)arg1;
-(BOOL)hasFullScreenTabBarController;
-(void)setHasFullScreenTabBarController:(BOOL)arg1;
-(void)setMinimizedTabBarView:(id)arg1;
-(double)topLayoutGuideLength;
-(void)setTopLayoutGuideLength:(double)arg1;
-(void)setBottomLayoutGuideLength:(double)arg1;
-(double)bottomLayoutGuideLength;
-(void)setContentView:(id)arg1;
-(void)setNavigationBar:(id)arg1;

@end


@class UIView;

@interface FBTabBarContainerView : UIView <FBTabBarContainerView> {

	UIView* _navigationBar;
	UIView* _contentView;
	UIView* _minimizedTabBarView;
	BOOL _minimizedTabBarViewHasBeenLaidOut;
	UIView* _tabBarContainerView;
	double _tabBarViewOffsetFraction;
	BOOL _extendViewBelowTabBar;
	BOOL _hasFullScreenTabBarController;
	unsigned long long _tabBarPosition;
	unsigned long long _tabBarIconSize;
	double _topLayoutGuideLength;
	double _bottomLayoutGuideLength;

}

@property (assign,nonatomic) unsigned long long tabBarPosition;               //@synthesize tabBarPosition=_tabBarPosition - In the implementation block
@property (assign,nonatomic) unsigned long long tabBarIconSize;               //@synthesize tabBarIconSize=_tabBarIconSize - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                     //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) double bottomLayoutGuideLength;                  //@synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength - In the implementation block
@property (assign,nonatomic) BOOL extendViewBelowTabBar;                      //@synthesize extendViewBelowTabBar=_extendViewBelowTabBar - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenTabBarController;              //@synthesize hasFullScreenTabBarController=_hasFullScreenTabBarController - In the implementation block
-(void)remountTabBar;
-(unsigned long long)tabBarIconSize;
-(void)setTabBarView:(id)arg1 ;
-(void)setTabBarViewOffsetFraction:(double)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)tabBarPosition;
-(void)setTabBarPosition:(unsigned long long)arg1 ;
-(void)setTabBarIconSize:(unsigned long long)arg1 ;
-(double)tabBarViewOffsetFraction;
-(BOOL)extendViewBelowTabBar;
-(void)setExtendViewBelowTabBar:(BOOL)arg1 ;
-(BOOL)hasFullScreenTabBarController;
-(void)setHasFullScreenTabBarController:(BOOL)arg1 ;
-(void)setTabBarViewOffsetFraction:(double)arg1 ;
-(void)setMinimizedTabBarView:(id)arg1 ;
-(void)setTabBarViewPosition:(unsigned long long)arg1 ;
-(double)topLayoutGuideLength;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(void)setBottomLayoutGuideLength:(double)arg1 ;
-(double)bottomLayoutGuideLength;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(id)arg1 ;
-(void)layoutSubviews;
-(void)setNavigationBar:(id)arg1 ;
@end


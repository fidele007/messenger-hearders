/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBSegmentedViewDelegate.h>

@class FBSegmentedContainerView, FBKVOController, FBScenePathContext, NSMutableDictionary, FBSegmentedView, NSArray, UIViewController, NSString;

@interface FBSegmentedContainerViewController : UIViewController <FBSegmentedViewDelegate> {

	long long _displayedIndex;
	long long _selectedIndex;
	FBSegmentedContainerView* _containerView;
	FBKVOController* _observation;
	FBScenePathContext* _scenePathContext;
	NSMutableDictionary* _segmentTitles;
	BOOL _shouldUpdateTitle;
	FBSegmentedView* _segmentedView;
	NSArray* _viewControllers;
	long long _previousSelectedIndex;

}

@property (nonatomic,readonly) UIViewController * displayedViewController; 
@property (assign,nonatomic) BOOL shouldUpdateTitle;                                    //@synthesize shouldUpdateTitle=_shouldUpdateTitle - In the implementation block
@property (nonatomic,readonly) FBSegmentedView * segmentedView;                         //@synthesize segmentedView=_segmentedView - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers;                                   //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,readonly) UIViewController * selectedViewController; 
@property (assign,nonatomic) long long selectedIndex;                                   //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,readonly) long long previousSelectedIndex;                         //@synthesize previousSelectedIndex=_previousSelectedIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)analyticsHasCachedNetworkContent;
-(BOOL)analyticsRequiresNetworkContent;
-(id)analyticsUUID;
-(id)analyticsPresentedViewController;
-(void)segmentedView:(id)arg1 didSelectItemAtIndex:(long long)arg2 withSelectionType:(int)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 scenePathContext:(id)arg3 segmentedViewType:(unsigned long long)arg4 ;
-(void)setShouldUpdateTitle:(BOOL)arg1 ;
-(void)_setupSegmentedView;
-(void)_switchToViewController:(id)arg1 fromViewController:(id)arg2 ;
-(void)_setSegmentedViewTitle:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_setSegmentedViewSelectedIndex:(long long)arg1 ;
-(id)_segmentedViewItems;
-(BOOL)shouldUpdateRightBarButtonItem;
-(BOOL)shouldUpdateTitle;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 scenePathContext:(id)arg3 ;
-(FBSegmentedView *)segmentedView;
-(long long)previousSelectedIndex;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIViewController *)selectedViewController;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(UIViewController *)displayedViewController;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end


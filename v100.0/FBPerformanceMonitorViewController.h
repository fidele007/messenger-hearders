/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBPerformanceMetricProvider;
@class FBPerformanceMonitorGraphView, UIView, UILabel, UISegmentedControl, UIScrollView, UITextView, NSTimer, NSMutableArray, NSObject, FBPerformanceMonitorView, NSString;

@interface FBPerformanceMonitorViewController : UIViewController <UIScrollViewDelegate> {

	FBPerformanceMonitorGraphView* _graphView;
	UIView* _hostView;
	CGSize _monitorSize;
	UILabel* _contentLabel;
	UILabel* _leftArrow;
	UILabel* _rightArrow;
	UISegmentedControl* _segmentedControl;
	UIScrollView* _segmentedControlScrollView;
	UITextView* _contentView;
	NSTimer* _updateTimer;
	NSMutableArray* _metricProviders;
	NSObject*<FBPerformanceMetricProvider> _currentMetricProvider;

}

@property (assign,nonatomic,__weak) NSObject*<FBPerformanceMetricProvider> currentMetricProvider;              //@synthesize currentMetricProvider=_currentMetricProvider - In the implementation block
@property (nonatomic,retain) FBPerformanceMonitorView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_refreshView;
-(void)attachToView:(id)arg1 ;
-(void)detachFromView;
-(void)registerMetricProvider:(id)arg1 ;
-(void)unregisterAllMetricProviders;
-(void)unregisterMetricProvider:(id)arg1 ;
-(void)_didSelectSegment;
-(void)_stopRefresh;
-(void)setCurrentMetricProvider:(NSObject*<FBPerformanceMetricProvider>)arg1 ;
-(NSObject*<FBPerformanceMetricProvider>)currentMetricProvider;
-(void)_reattachToHostView;
-(void)_updateSelector;
-(void)_startRefresh;
-(void)_moveToNextMetric;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end


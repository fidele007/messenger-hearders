/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBCaptureCameraControllerFBCapturePerformanceTrackerController;
@class FBUserSession, UIView;

@interface FBCameraComponentBaseViewController : UIViewController {

	id<FBCaptureCameraController><FBCapturePerformanceTrackerController> _captureManager;
	FBUserSession* _session;
	UIView* _performanceMonitorView;
	BOOL _viewIsVisible;
	BOOL _showPerformanceMonitorView;

}

@property (assign,nonatomic) BOOL showPerformanceMonitorView;              //@synthesize showPerformanceMonitorView=_showPerformanceMonitorView - In the implementation block
@property (nonatomic,readonly) BOOL viewIsVisible;                         //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
-(void)setShowPerformanceMonitorView:(BOOL)arg1 ;
-(void)_updatePerformanceMonitorView;
-(BOOL)showPerformanceMonitorView;
-(BOOL)fb_hidesNavigationBar;
-(id)initWithCaptureManager:(id)arg1 session:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)viewIsVisible;
@end


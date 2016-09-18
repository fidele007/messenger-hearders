/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInterstitialViewController.h>
#import <Messenger/FBLocationServicesAlwaysNUXStepDelegate.h>
#import <Messenger/FBLocationAccessManagerDelegate.h>
#import <Messenger/FBNuxStepViewController.h>

@protocol FBLocationServicesAlwaysNUXControllerDelegate, FBNUXViewControllerDelegate;
@class FBLocationServicesAlwaysNUXStep, FBUserSession, NSString, FBLocationAccessManager, FBCrowdNoiseViewController;

@interface FBLocationServicesAlwaysNUXViewController : FBInterstitialViewController <FBLocationServicesAlwaysNUXStepDelegate, FBLocationAccessManagerDelegate, FBNuxStepViewController> {

	FBLocationServicesAlwaysNUXStep* _step;
	FBUserSession* _session;
	id<FBLocationServicesAlwaysNUXControllerDelegate> _controllerDelegate;
	NSString* _surface;
	FBLocationAccessManager* _locationAccessManager;
	BOOL _didPushViewController;
	FBCrowdNoiseViewController* _crowdNoiseViewController;
	id<FBNUXViewControllerDelegate> _delegate;
	unsigned long long _interfaceOrientationMask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBNUXViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceOrientationMask;                  //@synthesize interfaceOrientationMask=_interfaceOrientationMask - In the implementation block
-(void)didTapCloseButton;
-(void)locationAccessManager:(id)arg1 accessGranted:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2 ;
-(id)initWithStep:(id)arg1 ;
-(void)transitionToSubStep:(id)arg1 ;
-(void)setStepProgress:(unsigned long long)arg1 ofTotal:(unsigned long long)arg2 ;
-(void)didTapActionButton;
-(void)didTapNotNowButton;
-(void)didTapLearnMoreButton;
-(void)didTapSettingsButton;
-(void)_didTurnOnLocationServices;
-(void)setDelegate:(id<FBNUXViewControllerDelegate>)arg1 ;
-(id<FBNUXViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setInterfaceOrientationMask:(unsigned long long)arg1 ;
-(unsigned long long)interfaceOrientationMask;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCHostApplicationListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBWebRTCHostApplication, MNModalPresentation;
@class UIViewController, NSString;

@interface FBWebRTCUIDisplayCoordinator : NSObject <FBWebRTCHostApplicationListener, FBClassProvidable> {

	id<FBWebRTCHostApplication> _hostApplication;
	id<MNModalPresentation> _modalPresentation;
	unsigned long long _pendingState;
	UIViewController* _vcPendingPresentation;

}

@property (nonatomic,retain) UIViewController * vcPendingPresentation;              //@synthesize vcPendingPresentation=_vcPendingPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)hostApplicationReady:(BOOL)arg1 ;
-(void)cancelPendingVCPresentation;
-(void)presentViewControllerModally:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithHostApplication:(id)arg1 modalPresentation:(id)arg2 ;
-(void)_presentOrDeferViewControllerModally:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isPendingVCPresentation;
-(void)setVcPendingPresentation:(UIViewController *)arg1 ;
-(void)_presentDeferredViewControllerIfNeeded;
-(UIViewController *)vcPendingPresentation;
-(BOOL)_canPresentViewControllerNow;
-(void)_dismissAndPresentViewControllerModallyNowAnimated:(BOOL)arg1 ;
-(BOOL)_isApplicationInBackground;
-(void)_deferPresentViewController:(id)arg1 ;
-(void)_onApplicationWillEnterForeground:(id)arg1 ;
-(void)_onApplicationBecameActiveNotification:(id)arg1 ;
-(BOOL)isVCWaitingForVisible;
-(void)dealloc;
@end


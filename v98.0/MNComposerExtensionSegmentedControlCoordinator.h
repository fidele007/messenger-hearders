/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposeViewControllerListener.h>

@protocol MNComposerContaining, MNComposerExtensionSegmentedControlCoordinatorDelegate;
@class MNComposerExtensionSegmentedControlView, NSArray, UIView, NSString;

@interface MNComposerExtensionSegmentedControlCoordinator : NSObject <MNComposeViewControllerListener> {

	MNComposerExtensionSegmentedControlView* _extensionSegmentedControlView;
	NSArray* _eligibleExtensions;
	UIView*<MNComposerContaining> _composerContainerView;
	id<MNComposerExtensionSegmentedControlCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNComposerExtensionSegmentedControlCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTransitionToExtension:(id)arg1 ;
-(void)_didChangeSelectedSegmentIndex;
-(void)setUpWithCurrentExtensions:(id)arg1 composerContainerView:(id)arg2 ;
-(void)_updateEligibleExtensionWithCurrentExtensions:(id)arg1 ;
-(void)_updateComposerViewWithExtension:(id)arg1 ;
-(void)_updateSegmentedControlSelectStateWithExtension:(id)arg1 ;
-(void)_cleanUpExistingSegmentedControl;
-(void)_setUpSegmentedControl;
-(void)_configSegmentedControl;
-(void)setDelegate:(id<MNComposerExtensionSegmentedControlCoordinatorDelegate>)arg1 ;
-(id<MNComposerExtensionSegmentedControlCoordinatorDelegate>)delegate;
-(void)_updateSegmentedControl;
-(void)tearDown;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessengerCodeViewControllerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider, MNModalPresentation;
@class MNMessengerCodeViewController, MNThreadNavigationCoordinator, MNSoundController, FBAnalytics, NSString;

@interface MNMessengerCodeNavigationCoordinator : NSObject <MNMessengerCodeViewControllerDelegate, FBViewerContextClassProvidable> {

	id<FBProvider> _messengerCodeViewControllerProvider;
	MNMessengerCodeViewController* _presentedMessengerCodeViewController;
	id<MNModalPresentation> _modalPresenter;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNSoundController* _soundController;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)navigateToScanMessengerCodeWithEntrypoint:(id)arg1 ;
-(void)_navigateToMessengerCodeWithEntrypoint:(id)arg1 shouldShowScanView:(BOOL)arg2 ;
-(void)navigateToMyMessengerCodeWithEntrypoint:(id)arg1 ;
-(id)_initializeMessengerCodeViewControllerWithProvider:(id)arg1 ;
-(void)messengerCodeViewControllerDidTapCancel:(id)arg1 ;
-(void)messengerCodeViewController:(id)arg1 didDecodeUserId:(id)arg2 ;
@end


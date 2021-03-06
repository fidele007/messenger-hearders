/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttachmentDefaultViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <Messenger/MNMomentsAppInviteAttachmentViewDelegate.h>

@protocol MNNavigationPluginService, FBIntentHandler;
@class FBUserSession, NSString;

@interface MNMomentsAppInviteAttachmentViewController : MNAttachmentDefaultViewController <SKStoreProductViewControllerDelegate, MNMomentsAppInviteAttachmentViewDelegate> {

	FBUserSession* _session;
	id<MNNavigationPluginService> _navigationService;
	id<FBIntentHandler> _intentHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)momentsAppInviteViewPhotoWasTapped:(id)arg1 viewModel:(id)arg2 ;
-(void)momentsAppInviteViewButtonWasTapped:(id)arg1 button:(id)arg2 viewModel:(id)arg3 buttonIndex:(unsigned long long)arg4 ;
-(void)_handleButtonTapped:(id)arg1 button:(id)arg2 viewModel:(id)arg3 ;
-(id)initWithSession:(id)arg1 providerMapData:(id)arg2 navigationService:(id)arg3 ;
@end


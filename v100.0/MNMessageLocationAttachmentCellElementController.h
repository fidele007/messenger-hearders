/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNDefaultAttachmentCellElementController.h>
#import <Messenger/MNMessageLocationAttachmentViewDelegate.h>

@protocol MNModalPresentation, MNViewControllerNavigation;
@class MNMessageLocationAttachmentRideServicePresenter, NSString;

@interface MNMessageLocationAttachmentCellElementController : MNDefaultAttachmentCellElementController <MNMessageLocationAttachmentViewDelegate> {

	id<MNModalPresentation> _modalPresentationCoordinator;
	id<MNViewControllerNavigation> _navigationController;
	MNMessageLocationAttachmentRideServicePresenter* _rideServicePresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)messageLocationAttachmentView:(id)arg1 didSelectLocation:(id)arg2 ;
-(void)messageLocationAttachmentView:(id)arg1 didTapRideRequestCTAWithViewModel:(id)arg2 ;
-(id)initWithNavigationController:(id)arg1 modalPresentationCoordinator:(id)arg2 rideServicePresenter:(id)arg3 ;
@end

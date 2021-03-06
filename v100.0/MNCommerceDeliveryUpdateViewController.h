/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString, FBUserSession, MNBusinessNavigationHandler, MNCommerceDeliveryUpdateInformationView, UITableView, MNCommerceDeliveryUpdateView, MNCommerceDeliveryUpdateMapView, MNCommerceShipmentTrackingUpdatesView, MNBusinessLogoView, MNCommerceLabelWithHeaderView, MNCommerceDeliveryUpdateActionButtonHelper, MNCommerceDeliveryUpdateMapViewHelper, MNBusinessFetcher, FBMemMessengerRetailShipment, MNCommerceDeliveryUpdateInformationViewModel;

@interface MNCommerceDeliveryUpdateViewController : UIViewController {

	NSString* _shipmentID;
	NSString* _businessID;
	FBUserSession* _session;
	MNBusinessNavigationHandler* _navigationHandler;
	MNCommerceDeliveryUpdateInformationView* _informationView;
	UITableView* _actionButtonsView;
	MNCommerceDeliveryUpdateView* _deliveryUpdateView;
	MNCommerceDeliveryUpdateMapView* _mapView;
	MNCommerceShipmentTrackingUpdatesView* _shipmentTrackingUpdatesView;
	MNBusinessLogoView* _logoView;
	MNCommerceLabelWithHeaderView* _trackingNumberView;
	MNCommerceLabelWithHeaderView* _legalTextView;
	MNCommerceDeliveryUpdateActionButtonHelper* _actionButtonHelper;
	MNCommerceDeliveryUpdateMapViewHelper* _mapViewHelper;
	MNBusinessFetcher* _fetcher;
	FBMemMessengerRetailShipment* _shipment;
	MNCommerceDeliveryUpdateInformationViewModel* _informationViewModel;

}
-(void)_initiateGraphQLFetchForID:(id)arg1 ;
-(void)_handleResponseContent:(id)arg1 cachedContent:(BOOL)arg2 error:(id)arg3 startTime:(double)arg4 ;
-(BOOL)_packageWasDelivered;
-(id)initWithShipmentID:(id)arg1 businessID:(id)arg2 session:(id)arg3 navigationHandler:(id)arg4 ;
-(void)loadView;
-(void)_reloadViews;
@end


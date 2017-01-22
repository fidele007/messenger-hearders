/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNRideServiceProviderListPresenterDelegate.h>

@protocol FBProvider;
@class MNRideServiceProviderListPresenter, NSString;

@interface MNQuickReplyRideHandler : NSObject <MNRideServiceProviderListPresenterDelegate> {

	id<FBProvider> _rideServiceProviderListPresenterProvider;
	MNRideServiceProviderListPresenter* _rideServiceProviderListPresenter;
	/*^block*/id _completion;
	BOOL _didRequestRide;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRideServiceProviderListPresenterProvider:(id)arg1 ;
-(void)handleRideRequestWithProviderName:(id)arg1 destinationAddress:(id)arg2 destinationLocation:(id)arg3 entryPoint:(id)arg4 forThreadKey:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)rideServiceProviderListPresenter:(id)arg1 willPresentVC:(id)arg2 ;
-(void)rideServiceProviderListPresenter:(id)arg1 didDismissVC:(id)arg2 ;
-(void)rideServiceProviderListPresenterDidRequestRide:(id)arg1 ;
@end

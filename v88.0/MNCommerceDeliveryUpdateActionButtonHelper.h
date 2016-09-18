/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MNBusinessNavigationHandler, FBMemMessengerRetailShipment, NSString;

@interface MNCommerceDeliveryUpdateActionButtonHelper : NSObject <UITableViewDataSource, UITableViewDelegate> {

	MNBusinessNavigationHandler* _navigationHandler;
	FBMemMessengerRetailShipment* _shipment;
	NSString* _businessID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_commerceCellStyle;
-(id)initWithNavigationHandler:(id)arg1 ;
-(void)_configureCell:(id)arg1 withTitle:(id)arg2 disabled:(BOOL)arg3 ;
-(void)_didTapChangeShipping;
-(void)_didTapViewOrderDetails;
-(void)setShipment:(id)arg1 businessID:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end


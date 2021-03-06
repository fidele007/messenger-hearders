/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@class MNRideServiceMessageMapView, MNBusinessSeparatorView, MNBusinessLogoView, MNBusinessStackedContainerView, MNBusinessTableRowView, MNBusinessNavigationHandler, MNRideServiceMessageReceiptViewModel, NSString;

@interface MNRideServiceMessageReceiptView : UIControl <MNAttachmentView> {

	MNRideServiceMessageMapView* _mapView;
	MNBusinessSeparatorView* _mapBottomLine;
	MNBusinessLogoView* _logoView;
	MNBusinessStackedContainerView* _locationsView;
	MNBusinessStackedContainerView* _rideInfoView;
	MNBusinessSeparatorView* _footerSeparator;
	MNBusinessTableRowView* _footerView;
	MNBusinessNavigationHandler* _navigationHandler;
	MNRideServiceMessageReceiptViewModel* _viewModel;

}

@property (nonatomic,copy) MNRideServiceMessageReceiptViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_didSelectMessage;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 navigationHandler:(id)arg3 ;
-(void)layoutSubviews;
-(MNRideServiceMessageReceiptViewModel *)viewModel;
-(void)setViewModel:(MNRideServiceMessageReceiptViewModel *)arg1 ;
@end


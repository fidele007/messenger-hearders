/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBProvider;
@class MNRideServiceMessageMapViewModel, MNBusinessSeparatorViewModel, MNBusinessLabelViewModel, MNBusinessStackedContainerViewModel, MNBusinessButtonViewModel, NSString;

@interface MNRideServiceMessageOrderViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowUpdateDestinationButton;
	MNRideServiceMessageMapViewModel* _map;
	MNBusinessSeparatorViewModel* _line;
	MNBusinessLabelViewModel* _orderInfo;
	MNBusinessStackedContainerViewModel* _locations;
	MNBusinessButtonViewModel* _updateDestinationButton;
	id<FBProvider> _locationSearchViewControllerProvider;
	NSString* _messageId;
	NSString* _rideRequestId;

}

@property (nonatomic,copy,readonly) MNRideServiceMessageMapViewModel * map;                           //@synthesize map=_map - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessSeparatorViewModel * line;                              //@synthesize line=_line - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLabelViewModel * orderInfo;                             //@synthesize orderInfo=_orderInfo - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * locations;                  //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowUpdateDestinationButton;                                //@synthesize shouldShowUpdateDestinationButton=_shouldShowUpdateDestinationButton - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessButtonViewModel * updateDestinationButton;              //@synthesize updateDestinationButton=_updateDestinationButton - In the implementation block
@property (nonatomic,readonly) id<FBProvider> locationSearchViewControllerProvider;                   //@synthesize locationSearchViewControllerProvider=_locationSearchViewControllerProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageId;                                             //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * rideRequestId;                                         //@synthesize rideRequestId=_rideRequestId - In the implementation block
-(NSString *)rideRequestId;
-(id)initWithMap:(id)arg1 line:(id)arg2 orderInfo:(id)arg3 locations:(id)arg4 shouldShowUpdateDestinationButton:(BOOL)arg5 updateDestinationButton:(id)arg6 locationSearchViewControllerProvider:(id)arg7 messageId:(id)arg8 rideRequestId:(id)arg9 ;
-(MNBusinessLabelViewModel *)orderInfo;
-(MNBusinessButtonViewModel *)updateDestinationButton;
-(id<FBProvider>)locationSearchViewControllerProvider;
-(BOOL)shouldShowUpdateDestinationButton;
-(MNBusinessSeparatorViewModel *)line;
-(MNRideServiceMessageMapViewModel *)map;
-(MNBusinessStackedContainerViewModel *)locations;
-(NSString *)messageId;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, MNCommerceListViewModel;

@interface MNCommerceDeliveryUpdateInformationViewModel : FBValueObject <NSCopying> {

	NSString* _scheduledDeliveryDate;
	NSArray* _addressLines;
	NSString* _shippingMethod;
	MNCommerceListViewModel* _listViewModel;

}

@property (nonatomic,copy,readonly) NSString * scheduledDeliveryDate;                     //@synthesize scheduledDeliveryDate=_scheduledDeliveryDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * addressLines;                               //@synthesize addressLines=_addressLines - In the implementation block
@property (nonatomic,copy,readonly) NSString * shippingMethod;                            //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,copy,readonly) MNCommerceListViewModel * listViewModel;              //@synthesize listViewModel=_listViewModel - In the implementation block
-(id)initWithScheduledDeliveryDate:(id)arg1 addressLines:(id)arg2 shippingMethod:(id)arg3 listViewModel:(id)arg4 ;
-(NSString *)scheduledDeliveryDate;
-(MNCommerceListViewModel *)listViewModel;
-(NSArray *)addressLines;
-(NSString *)shippingMethod;
@end


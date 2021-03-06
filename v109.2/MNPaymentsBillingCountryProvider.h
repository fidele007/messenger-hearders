/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsBillingCountryProviding.h>

@class NSString;

@interface MNPaymentsBillingCountryProvider : NSObject <FBPaymentsBillingCountryProviding> {

	NSString* _billingCountry;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * billingCountry;               //@synthesize billingCountry=_billingCountry - In the implementation block
+(id)announcerIdentifier;
-(id)initWithCountryCode:(id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(long long)dataLoadingStatus;
-(NSString *)billingCountry;
-(void)loadBillingCountry;
-(void)setBillingCountry:(NSString *)arg1 ;
-(void)addUpdateListener:(id)arg1 ;
@end


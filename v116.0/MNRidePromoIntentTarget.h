/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBIntentTarget.h>

@class NSString;

@interface MNRidePromoIntentTarget : FBIntentTarget {

	NSString* _providerName;
	NSString* _promoData;

}

@property (nonatomic,copy,readonly) NSString * providerName;              //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * promoData;                 //@synthesize promoData=_promoData - In the implementation block
+(id)ridePromoIntentTargetWithProviderName:(id)arg1 promoData:(id)arg2 ;
-(NSString *)promoData;
-(id)fallbackURLs;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)providerName;
@end


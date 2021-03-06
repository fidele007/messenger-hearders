/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

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


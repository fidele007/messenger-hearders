/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNRideServiceSurgeInfo;

@interface MNRideServiceRequestResponse : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _success_successMessage;
	MNRideServiceSurgeInfo* _surge_surgeInfo;
	NSString* _error_errorMessage;
	NSString* _updatePayment_errorMessage;
	NSString* _confirmLyftLinePrice_priceToken;
	NSString* _confirmLyftLinePrice_errorMessage;

}
+(id)successWithSuccessMessage:(id)arg1 ;
+(id)surgeWithSurgeInfo:(id)arg1 ;
+(id)updatePaymentWithErrorMessage:(id)arg1 ;
+(id)confirmLyftLinePriceWithPriceToken:(id)arg1 errorMessage:(id)arg2 ;
+(id)errorWithErrorMessage:(id)arg1 ;
-(void)matchSuccess:(/*^block*/id)arg1 surge:(/*^block*/id)arg2 error:(/*^block*/id)arg3 updatePayment:(/*^block*/id)arg4 confirmLyftLinePrice:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


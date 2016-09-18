/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBLocationManagerGSMInfo : FBGraphQLInput {

	NSNumber* _cellId;
	NSNumber* _locationAreaCode;
	NSNumber* _mobileCountryCode;
	NSNumber* _mobileNetworkCode;
	NSNumber* _primaryScramblingCode;
	NSNumber* _rssiDbm;

}

@property (nonatomic,copy) NSNumber * cellId;                             //@synthesize cellId=_cellId - In the implementation block
@property (nonatomic,copy) NSNumber * locationAreaCode;                   //@synthesize locationAreaCode=_locationAreaCode - In the implementation block
@property (nonatomic,copy) NSNumber * mobileCountryCode;                  //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (nonatomic,copy) NSNumber * mobileNetworkCode;                  //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (nonatomic,copy) NSNumber * primaryScramblingCode;              //@synthesize primaryScramblingCode=_primaryScramblingCode - In the implementation block
@property (nonatomic,copy) NSNumber * rssiDbm;                            //@synthesize rssiDbm=_rssiDbm - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)locationAreaCode;
-(void)setLocationAreaCode:(NSNumber *)arg1 ;
-(NSNumber *)primaryScramblingCode;
-(void)setPrimaryScramblingCode:(NSNumber *)arg1 ;
-(NSNumber *)rssiDbm;
-(void)setRssiDbm:(NSNumber *)arg1 ;
-(void)setCellId:(NSNumber *)arg1 ;
-(NSNumber *)cellId;
-(NSNumber *)mobileCountryCode;
-(NSNumber *)mobileNetworkCode;
-(void)setMobileCountryCode:(NSNumber *)arg1 ;
-(void)setMobileNetworkCode:(NSNumber *)arg1 ;
@end


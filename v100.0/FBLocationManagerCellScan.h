/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber, FBLocationManagerCDMAInfo, FBLocationManagerGSMInfo, FBLocationManagerLTEInfo, FBLocationManagerWCDMAInfo;

@interface FBLocationManagerCellScan : FBGraphQLInput {

	NSNumber* _ageMs;
	FBLocationManagerCDMAInfo* _cdmaInfo;
	FBLocationManagerGSMInfo* _gsmInfo;
	FBLocationManagerLTEInfo* _lteInfo;
	FBLocationManagerWCDMAInfo* _wcdmaInfo;

}

@property (nonatomic,copy) NSNumber * ageMs;                                    //@synthesize ageMs=_ageMs - In the implementation block
@property (nonatomic,copy) FBLocationManagerCDMAInfo * cdmaInfo;                //@synthesize cdmaInfo=_cdmaInfo - In the implementation block
@property (nonatomic,copy) FBLocationManagerGSMInfo * gsmInfo;                  //@synthesize gsmInfo=_gsmInfo - In the implementation block
@property (nonatomic,copy) FBLocationManagerLTEInfo * lteInfo;                  //@synthesize lteInfo=_lteInfo - In the implementation block
@property (nonatomic,copy) FBLocationManagerWCDMAInfo * wcdmaInfo;              //@synthesize wcdmaInfo=_wcdmaInfo - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBLocationManagerCDMAInfo *)cdmaInfo;
-(void)setCdmaInfo:(FBLocationManagerCDMAInfo *)arg1 ;
-(FBLocationManagerGSMInfo *)gsmInfo;
-(void)setGsmInfo:(FBLocationManagerGSMInfo *)arg1 ;
-(FBLocationManagerLTEInfo *)lteInfo;
-(void)setLteInfo:(FBLocationManagerLTEInfo *)arg1 ;
-(FBLocationManagerWCDMAInfo *)wcdmaInfo;
-(void)setWcdmaInfo:(FBLocationManagerWCDMAInfo *)arg1 ;
-(NSNumber *)ageMs;
-(void)setAgeMs:(NSNumber *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBPulsarBLE : FBGraphQLInput {

	NSString* _payload;
	NSNumber* _rssi;

}

@property (nonatomic,copy) NSString * payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSNumber * rssi;                 //@synthesize rssi=_rssi - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)payload;
-(void)setPayload:(NSString *)arg1 ;
-(void)setRssi:(NSNumber *)arg1 ;
-(NSNumber *)rssi;
@end


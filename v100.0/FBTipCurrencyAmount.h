/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBTipCurrencyAmount : FBGraphQLInput {

	NSString* _currency;
	NSNumber* _amount;
	NSString* _useCash;

}

@property (nonatomic,copy) NSString * currency;              //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSNumber * amount;                //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * useCash;               //@synthesize useCash=_useCash - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)useCash;
-(void)setUseCash:(NSString *)arg1 ;
-(void)setAmount:(NSNumber *)arg1 ;
-(NSNumber *)amount;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
@end


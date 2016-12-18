/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBAddressFieldsElementFields : FBGraphQLInput {

	NSString* _address1;
	NSString* _address2;
	NSString* _address3;
	NSString* _zipcode;
	NSString* _city;
	NSString* _state;
	NSString* _country;

}

@property (nonatomic,copy) NSString * address1;              //@synthesize address1=_address1 - In the implementation block
@property (nonatomic,copy) NSString * address2;              //@synthesize address2=_address2 - In the implementation block
@property (nonatomic,copy) NSString * address3;              //@synthesize address3=_address3 - In the implementation block
@property (nonatomic,copy) NSString * zipcode;               //@synthesize zipcode=_zipcode - In the implementation block
@property (nonatomic,copy) NSString * city;                  //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * country;               //@synthesize country=_country - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)address1;
-(void)setAddress1:(NSString *)arg1 ;
-(NSString *)address2;
-(void)setAddress2:(NSString *)arg1 ;
-(NSString *)address3;
-(void)setAddress3:(NSString *)arg1 ;
-(NSString *)zipcode;
-(void)setZipcode:(NSString *)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)country;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)city;
@end


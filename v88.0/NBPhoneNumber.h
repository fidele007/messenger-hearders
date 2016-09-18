/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface NBPhoneNumber : NSObject <NSCopying> {

	BOOL italianLeadingZero;
	unsigned countryCode;
	unsigned long long nationalNumber;
	NSString* extension;
	NSString* rawInput;
	NSNumber* countryCodeSource;
	NSString* preferredDomesticCarrierCode;
	NSString* pauseComponent;

}

@property (assign,nonatomic) unsigned countryCode; 
@property (assign,nonatomic) unsigned long long nationalNumber; 
@property (nonatomic,retain) NSString * extension; 
@property (assign,nonatomic) BOOL italianLeadingZero; 
@property (nonatomic,retain) NSString * rawInput; 
@property (nonatomic,retain) NSNumber * countryCodeSource; 
@property (nonatomic,retain) NSString * preferredDomesticCarrierCode; 
@property (nonatomic,retain) NSString * pauseComponent; 
-(NSString *)rawInput;
-(unsigned long long)nationalNumber;
-(void)setNationalNumber:(unsigned long long)arg1 ;
-(void)setCountryCodeSource:(NSNumber *)arg1 ;
-(void)setItalianLeadingZero:(BOOL)arg1 ;
-(void)setPauseComponent:(NSString *)arg1 ;
-(NSNumber *)countryCodeSource;
-(NSString *)preferredDomesticCarrierCode;
-(NSString *)pauseComponent;
-(BOOL)italianLeadingZero;
-(void)setRawInput:(NSString *)arg1 ;
-(void)setPreferredDomesticCarrierCode:(NSString *)arg1 ;
-(void)clearCountryCodeSource;
-(int)getCountryCodeSourceOrDefault;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)extension;
-(void)setExtension:(NSString *)arg1 ;
-(unsigned)countryCode;
-(void)setCountryCode:(unsigned)arg1 ;
-(BOOL)isEqualToObject:(id)arg1 ;
@end


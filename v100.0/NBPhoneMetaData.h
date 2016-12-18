/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NBPhoneNumberDesc, NSString, NSMutableArray;

@interface NBPhoneMetaData : NSObject {

	BOOL sameMobileAndFixedLinePattern;
	BOOL mainCountryForCode;
	BOOL leadingZeroPossible;
	unsigned countryCode;
	NBPhoneNumberDesc* generalDesc;
	NBPhoneNumberDesc* fixedLine;
	NBPhoneNumberDesc* mobile;
	NBPhoneNumberDesc* tollFree;
	NBPhoneNumberDesc* premiumRate;
	NBPhoneNumberDesc* sharedCost;
	NBPhoneNumberDesc* personalNumber;
	NBPhoneNumberDesc* voip;
	NBPhoneNumberDesc* pager;
	NBPhoneNumberDesc* uan;
	NBPhoneNumberDesc* emergency;
	NBPhoneNumberDesc* voicemail;
	NBPhoneNumberDesc* noInternationalDialling;
	NSString* codeID;
	NSString* internationalPrefix;
	NSString* preferredInternationalPrefix;
	NSString* nationalPrefix;
	NSString* preferredExtnPrefix;
	NSString* nationalPrefixForParsing;
	NSString* nationalPrefixTransformRule;
	NSMutableArray* numberFormats;
	NSMutableArray* intlNumberFormats;
	NSString* leadingDigits;

}

@property (nonatomic,retain) NBPhoneNumberDesc * generalDesc; 
@property (nonatomic,retain) NBPhoneNumberDesc * fixedLine; 
@property (nonatomic,retain) NBPhoneNumberDesc * mobile; 
@property (nonatomic,retain) NBPhoneNumberDesc * tollFree; 
@property (nonatomic,retain) NBPhoneNumberDesc * premiumRate; 
@property (nonatomic,retain) NBPhoneNumberDesc * sharedCost; 
@property (nonatomic,retain) NBPhoneNumberDesc * personalNumber; 
@property (nonatomic,retain) NBPhoneNumberDesc * voip; 
@property (nonatomic,retain) NBPhoneNumberDesc * pager; 
@property (nonatomic,retain) NBPhoneNumberDesc * uan; 
@property (nonatomic,retain) NBPhoneNumberDesc * emergency; 
@property (nonatomic,retain) NBPhoneNumberDesc * voicemail; 
@property (nonatomic,retain) NBPhoneNumberDesc * noInternationalDialling; 
@property (nonatomic,retain) NSString * codeID; 
@property (assign,nonatomic) unsigned countryCode; 
@property (nonatomic,retain) NSString * internationalPrefix; 
@property (nonatomic,retain) NSString * preferredInternationalPrefix; 
@property (nonatomic,retain) NSString * nationalPrefix; 
@property (nonatomic,retain) NSString * preferredExtnPrefix; 
@property (nonatomic,retain) NSString * nationalPrefixForParsing; 
@property (nonatomic,retain) NSString * nationalPrefixTransformRule; 
@property (assign,nonatomic) BOOL sameMobileAndFixedLinePattern; 
@property (nonatomic,retain) NSMutableArray * numberFormats; 
@property (nonatomic,retain) NSMutableArray * intlNumberFormats; 
@property (assign,nonatomic) BOOL mainCountryForCode; 
@property (nonatomic,retain) NSString * leadingDigits; 
@property (assign,nonatomic) BOOL leadingZeroPossible; 
-(void)setNumberFormats:(NSMutableArray *)arg1 ;
-(void)setIntlNumberFormats:(NSMutableArray *)arg1 ;
-(void)setLeadingZeroPossible:(BOOL)arg1 ;
-(void)setMainCountryForCode:(BOOL)arg1 ;
-(NSString *)codeID;
-(NBPhoneNumberDesc *)emergency;
-(BOOL)mainCountryForCode;
-(void)setGeneralDesc:(NBPhoneNumberDesc *)arg1 ;
-(void)setFixedLine:(NBPhoneNumberDesc *)arg1 ;
-(void)setMobile:(NBPhoneNumberDesc *)arg1 ;
-(void)setTollFree:(NBPhoneNumberDesc *)arg1 ;
-(void)setPremiumRate:(NBPhoneNumberDesc *)arg1 ;
-(void)setSharedCost:(NBPhoneNumberDesc *)arg1 ;
-(void)setPersonalNumber:(NBPhoneNumberDesc *)arg1 ;
-(void)setVoip:(NBPhoneNumberDesc *)arg1 ;
-(void)setPager:(NBPhoneNumberDesc *)arg1 ;
-(void)setUan:(NBPhoneNumberDesc *)arg1 ;
-(void)setEmergency:(NBPhoneNumberDesc *)arg1 ;
-(void)setNoInternationalDialling:(NBPhoneNumberDesc *)arg1 ;
-(void)setCodeID:(NSString *)arg1 ;
-(void)setInternationalPrefix:(NSString *)arg1 ;
-(void)setPreferredInternationalPrefix:(NSString *)arg1 ;
-(void)setNationalPrefix:(NSString *)arg1 ;
-(void)setPreferredExtnPrefix:(NSString *)arg1 ;
-(void)setNationalPrefixForParsing:(NSString *)arg1 ;
-(void)setNationalPrefixTransformRule:(NSString *)arg1 ;
-(void)setSameMobileAndFixedLinePattern:(BOOL)arg1 ;
-(id)numberFormatArrayFromData:(id)arg1 ;
-(void)setLeadingDigits:(NSString *)arg1 ;
-(void)buildData:(id)arg1 ;
-(NSString *)nationalPrefix;
-(NSString *)internationalPrefix;
-(NSString *)preferredInternationalPrefix;
-(NSMutableArray *)numberFormats;
-(NSMutableArray *)intlNumberFormats;
-(NBPhoneNumberDesc *)generalDesc;
-(NSString *)preferredExtnPrefix;
-(NBPhoneNumberDesc *)premiumRate;
-(NBPhoneNumberDesc *)tollFree;
-(NBPhoneNumberDesc *)mobile;
-(NBPhoneNumberDesc *)fixedLine;
-(NBPhoneNumberDesc *)sharedCost;
-(NBPhoneNumberDesc *)voip;
-(NBPhoneNumberDesc *)personalNumber;
-(NBPhoneNumberDesc *)pager;
-(NBPhoneNumberDesc *)uan;
-(NBPhoneNumberDesc *)voicemail;
-(BOOL)sameMobileAndFixedLinePattern;
-(NSString *)leadingDigits;
-(BOOL)leadingZeroPossible;
-(NSString *)nationalPrefixForParsing;
-(NSString *)nationalPrefixTransformRule;
-(NBPhoneNumberDesc *)noInternationalDialling;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(unsigned)countryCode;
-(void)setCountryCode:(unsigned)arg1 ;
-(void)setVoicemail:(NBPhoneNumberDesc *)arg1 ;
@end


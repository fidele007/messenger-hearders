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

@interface FBContactPersonalName : FBGraphQLInput {

	NSString* _formatted;
	NSString* _prefix;
	NSString* _first;
	NSString* _middle;
	NSString* _last;
	NSString* _firstPhonetic;
	NSString* _middlePhonetic;
	NSString* _lastPhonetic;
	NSString* _locale;

}

@property (nonatomic,copy) NSString * formatted;                   //@synthesize formatted=_formatted - In the implementation block
@property (nonatomic,copy) NSString * prefix;                      //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * first;                       //@synthesize first=_first - In the implementation block
@property (nonatomic,copy) NSString * middle;                      //@synthesize middle=_middle - In the implementation block
@property (nonatomic,copy) NSString * last;                        //@synthesize last=_last - In the implementation block
@property (nonatomic,copy) NSString * firstPhonetic;               //@synthesize firstPhonetic=_firstPhonetic - In the implementation block
@property (nonatomic,copy) NSString * middlePhonetic;              //@synthesize middlePhonetic=_middlePhonetic - In the implementation block
@property (nonatomic,copy) NSString * lastPhonetic;                //@synthesize lastPhonetic=_lastPhonetic - In the implementation block
@property (nonatomic,copy) NSString * locale;                      //@synthesize locale=_locale - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)middle;
-(void)setMiddle:(NSString *)arg1 ;
-(NSString *)firstPhonetic;
-(void)setFirstPhonetic:(NSString *)arg1 ;
-(NSString *)middlePhonetic;
-(void)setMiddlePhonetic:(NSString *)arg1 ;
-(NSString *)lastPhonetic;
-(void)setLastPhonetic:(NSString *)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)prefix;
-(NSString *)first;
-(void)setFirst:(NSString *)arg1 ;
-(NSString *)formatted;
-(void)setFormatted:(NSString *)arg1 ;
-(NSString *)last;
-(void)setLast:(NSString *)arg1 ;
@end


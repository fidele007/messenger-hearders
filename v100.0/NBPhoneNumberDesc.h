/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString;

@interface NBPhoneNumberDesc : NSObject {

	NSString* nationalNumberPattern;
	NSString* possibleNumberPattern;
	NSString* exampleNumber;

}

@property (nonatomic,retain) NSString * nationalNumberPattern; 
@property (nonatomic,retain) NSString * possibleNumberPattern; 
@property (nonatomic,retain) NSString * exampleNumber; 
-(void)setNationalNumberPattern:(NSString *)arg1 ;
-(void)setPossibleNumberPattern:(NSString *)arg1 ;
-(void)setExampleNumber:(NSString *)arg1 ;
-(NSString *)exampleNumber;
-(NSString *)nationalNumberPattern;
-(NSString *)possibleNumberPattern;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
@end


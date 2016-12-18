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

@interface FBContactInfoFieldsElementFields : FBGraphQLInput {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _email;
	NSString* _verifiedEmail;
	NSString* _phone;

}

@property (nonatomic,copy) NSString * firstName;                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * email;                      //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * verifiedEmail;              //@synthesize verifiedEmail=_verifiedEmail - In the implementation block
@property (nonatomic,copy) NSString * phone;                      //@synthesize phone=_phone - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)verifiedEmail;
-(void)setVerifiedEmail:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(void)setPhone:(NSString *)arg1 ;
-(NSString *)email;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)phone;
@end

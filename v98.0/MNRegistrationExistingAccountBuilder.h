/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPPhoneNumber, NSString;

@interface MNRegistrationExistingAccountBuilder : NSObject {

	LPPhoneNumber* _phoneNumber;
	NSString* _accountID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _profilePhotoURL;
	BOOL _isPartial;
	BOOL _isTwoFacUser;
	unsigned long long _matchingType;

}
+(id)registrationExistingAccount;
+(id)registrationExistingAccountFromExistingRegistrationExistingAccount:(id)arg1 ;
-(id)withAccountID:(id)arg1 ;
-(id)withFullName:(id)arg1 ;
-(id)withProfilePhotoURL:(id)arg1 ;
-(id)withMatchingType:(unsigned long long)arg1 ;
-(id)withPhoneNumber:(id)arg1 ;
-(id)withFirstName:(id)arg1 ;
-(id)withLastName:(id)arg1 ;
-(id)withIsPartial:(BOOL)arg1 ;
-(id)withIsTwoFacUser:(BOOL)arg1 ;
-(id)build;
@end

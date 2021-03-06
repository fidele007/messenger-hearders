/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
+(id)registrationExistingAccountFromExistingRegistrationExistingAccount:(id)arg1 ;
+(id)registrationExistingAccount;
-(id)withPhoneNumber:(id)arg1 ;
-(id)withIsPartial:(BOOL)arg1 ;
-(id)withIsTwoFacUser:(BOOL)arg1 ;
-(id)withAccountID:(id)arg1 ;
-(id)withFullName:(id)arg1 ;
-(id)withProfilePhotoURL:(id)arg1 ;
-(id)withMatchingType:(unsigned long long)arg1 ;
-(id)withFirstName:(id)arg1 ;
-(id)withLastName:(id)arg1 ;
-(id)build;
@end


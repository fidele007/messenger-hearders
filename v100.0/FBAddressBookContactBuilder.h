/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSArray;

@interface FBAddressBookContactBuilder : NSObject {

	unsigned long long _identifier;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _displayName;
	NSDate* _modifiedDate;
	NSArray* _phoneNumbers;

}
+(id)addressBookContact;
+(id)addressBookContactFromExistingAddressBookContact:(id)arg1 ;
-(id)withFirstName:(id)arg1 ;
-(id)withLastName:(id)arg1 ;
-(id)withIdentifier:(unsigned long long)arg1 ;
-(id)withDisplayName:(id)arg1 ;
-(id)withMiddleName:(id)arg1 ;
-(id)withModifiedDate:(id)arg1 ;
-(id)withPhoneNumbers:(id)arg1 ;
-(id)build;
@end


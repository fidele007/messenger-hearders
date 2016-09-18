/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPPhoneNumber, NSString;

@interface MNRegistrationExistingAccount : FBValueObject <NSCopying> {

	BOOL _isPartial;
	BOOL _isTwoFacUser;
	LPPhoneNumber* _phoneNumber;
	NSString* _accountID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _profilePhotoURL;
	unsigned long long _matchingType;

}

@property (nonatomic,copy,readonly) LPPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountID;                     //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                      //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName;                      //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * profilePhotoURL;               //@synthesize profilePhotoURL=_profilePhotoURL - In the implementation block
@property (nonatomic,readonly) BOOL isPartial;                                //@synthesize isPartial=_isPartial - In the implementation block
@property (nonatomic,readonly) BOOL isTwoFacUser;                             //@synthesize isTwoFacUser=_isTwoFacUser - In the implementation block
@property (nonatomic,readonly) unsigned long long matchingType;               //@synthesize matchingType=_matchingType - In the implementation block
-(unsigned long long)matchingType;
-(NSString *)profilePhotoURL;
-(BOOL)isTwoFacUser;
-(id)initWithPhoneNumber:(id)arg1 accountID:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 fullName:(id)arg5 profilePhotoURL:(id)arg6 isPartial:(BOOL)arg7 isTwoFacUser:(BOOL)arg8 matchingType:(unsigned long long)arg9 ;
-(LPPhoneNumber *)phoneNumber;
-(BOOL)isPartial;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)accountID;
-(NSString *)fullName;
@end


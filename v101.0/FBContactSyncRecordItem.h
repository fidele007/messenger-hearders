/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class FBContactImporterAddressbookPerson, NSString;

@interface FBContactSyncRecordItem : NSObject <NSCoding> {

	FBContactImporterAddressbookPerson* _addressBookPerson;
	NSString* _signature;

}

@property (nonatomic,readonly) FBContactImporterAddressbookPerson * addressBookPerson;              //@synthesize addressBookPerson=_addressBookPerson - In the implementation block
@property (nonatomic,copy,readonly) NSString * signature;                                           //@synthesize signature=_signature - In the implementation block
-(FBContactImporterAddressbookPerson *)addressBookPerson;
-(id)_hashForPerson:(id)arg1 ;
-(id)initWithAddressBookPerson:(id)arg1 signature:(id)arg2 ;
-(id)initWithAddressBookPerson:(id)arg1 ;
-(unsigned long long)compareWithRecordItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)signature;
@end

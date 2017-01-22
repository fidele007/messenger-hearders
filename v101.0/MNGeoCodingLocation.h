/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber;

@interface MNGeoCodingLocation : FBValueObject <NSCopying, NSCoding> {

	NSString* _street;
	NSString* _city;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _name;
	NSNumber* _latitude;
	NSNumber* _longitude;

}

@property (nonatomic,copy,readonly) NSString * street;                  //@synthesize street=_street - In the implementation block
@property (nonatomic,copy,readonly) NSString * city;                    //@synthesize city=_city - In the implementation block
@property (nonatomic,copy,readonly) NSString * state;                   //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSString * postalCode;              //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;                 //@synthesize country=_country - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * latitude;                //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * longitude;               //@synthesize longitude=_longitude - In the implementation block
-(id)initWithStreet:(id)arg1 city:(id)arg2 state:(id)arg3 postalCode:(id)arg4 country:(id)arg5 name:(id)arg6 latitude:(id)arg7 longitude:(id)arg8 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSString *)name;
-(NSString *)country;
-(NSString *)street;
-(NSString *)city;
-(NSString *)postalCode;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
@end

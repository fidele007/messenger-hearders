/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBGeoCodingLocation : FBValueObject <NSCopying> {

	NSString* _address;
	NSString* _city;
	NSString* _state;
	double _latitude;
	double _longitude;

}

@property (nonatomic,copy,readonly) NSString * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSString * city;                 //@synthesize city=_city - In the implementation block
@property (nonatomic,copy,readonly) NSString * state;                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double latitude;                      //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                     //@synthesize longitude=_longitude - In the implementation block
-(id)initWithAddress:(id)arg1 city:(id)arg2 state:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 ;
-(NSString *)state;
-(NSString *)address;
-(double)latitude;
-(double)longitude;
-(NSString *)city;
@end


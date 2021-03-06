/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface MNEventsReminderLocation : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _place_pageFBID;
	NSString* _place_name;
	NSString* _place_address;
	NSNumber* _place_latitude;
	NSNumber* _place_longitude;
	NSString* _freeform_name;
	NSString* _address_name;
	NSNumber* _address_latitude;
	NSNumber* _address_longitude;

}
+(id)placeWithPageFBID:(id)arg1 name:(id)arg2 address:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 ;
+(id)addressWithName:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 ;
+(id)freeformWithName:(id)arg1 ;
-(void)matchPlace:(/*^block*/id)arg1 freeform:(/*^block*/id)arg2 address:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


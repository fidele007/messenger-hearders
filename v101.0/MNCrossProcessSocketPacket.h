/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface MNCrossProcessSocketPacket : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	int _establishPacket_clientType;
	NSString* _payloadPacket_topicTypeName;
	NSData* _payloadPacket_data;

}
+(id)establishPacketWithClientType:(int)arg1 ;
+(id)payloadPacketWithTopicTypeName:(id)arg1 data:(id)arg2 ;
-(void)matchEstablishPacket:(/*^block*/id)arg1 payloadPacket:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

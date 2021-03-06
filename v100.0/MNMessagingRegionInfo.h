/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNMessagingRegionInfo : FBValueObject <NSCopying, NSCoding> {

	NSString* _messengerRegion;
	NSString* _messengerMQTTRegion;

}

@property (nonatomic,copy,readonly) NSString * messengerRegion;                  //@synthesize messengerRegion=_messengerRegion - In the implementation block
@property (nonatomic,copy,readonly) NSString * messengerMQTTRegion;              //@synthesize messengerMQTTRegion=_messengerMQTTRegion - In the implementation block
-(NSString *)messengerMQTTRegion;
-(NSString *)messengerRegion;
-(id)initWithMessengerRegion:(id)arg1 messengerMQTTRegion:(id)arg2 ;
@end


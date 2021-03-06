/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBFeedUDPPrimingPacket, NSString;

@interface FBFeedUDPPrimingInfo : FBValueObject <NSCopying, NSCoding> {

	FBFeedUDPPrimingPacket* _packet;
	NSString* _locationIdentifier;
	NSString* _buildVersion;

}

@property (nonatomic,copy,readonly) FBFeedUDPPrimingPacket * packet;              //@synthesize packet=_packet - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationIdentifier;                //@synthesize locationIdentifier=_locationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * buildVersion;                      //@synthesize buildVersion=_buildVersion - In the implementation block
-(id)initWithPacket:(id)arg1 locationIdentifier:(id)arg2 buildVersion:(id)arg3 ;
-(NSString *)buildVersion;
-(NSString *)locationIdentifier;
-(FBFeedUDPPrimingPacket *)packet;
@end


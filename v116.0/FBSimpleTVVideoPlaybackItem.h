/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBSimpleTVVideoPlaybackItem : FBValueObject <NSCopying, NSCoding> {

	NSString* _videoID;
	NSString* _payload;
	double _position;

}

@property (nonatomic,copy,readonly) NSString * videoID;              //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) double position;                      //@synthesize position=_position - In the implementation block
-(id)initWithVideoID:(id)arg1 payload:(id)arg2 position:(double)arg3 ;
-(NSString *)payload;
-(double)position;
-(NSString *)videoID;
@end


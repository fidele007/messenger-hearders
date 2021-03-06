/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNRoomSuggestionInfo, MNRoomSuggestionReason, NSString;

@interface MNRoomSuggestionRow : FBValueObject <NSCopying> {

	BOOL _isUnread;
	BOOL _isNew;
	MNRoomSuggestionInfo* _roomInfo;
	MNRoomSuggestionReason* _suggestionReason;
	NSString* _trackingData;

}

@property (nonatomic,copy,readonly) MNRoomSuggestionInfo * roomInfo;                        //@synthesize roomInfo=_roomInfo - In the implementation block
@property (nonatomic,copy,readonly) MNRoomSuggestionReason * suggestionReason;              //@synthesize suggestionReason=_suggestionReason - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackingData;                                //@synthesize trackingData=_trackingData - In the implementation block
@property (nonatomic,readonly) BOOL isUnread;                                               //@synthesize isUnread=_isUnread - In the implementation block
@property (nonatomic,readonly) BOOL isNew;                                                  //@synthesize isNew=_isNew - In the implementation block
-(MNRoomSuggestionInfo *)roomInfo;
-(MNRoomSuggestionReason *)suggestionReason;
-(NSString *)trackingData;
-(id)initWithRoomInfo:(id)arg1 suggestionReason:(id)arg2 trackingData:(id)arg3 isUnread:(BOOL)arg4 isNew:(BOOL)arg5 ;
-(BOOL)isNew;
-(BOOL)isUnread;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNRoomSuggestionInfo, MNRoomSuggestionReason, NSString;

@interface MNRoomSuggestionRow : FBValueObject <NSCopying> {

	BOOL _ignoredByViewer;
	MNRoomSuggestionInfo* _roomInfo;
	MNRoomSuggestionReason* _suggestionReason;
	NSString* _trackingData;

}

@property (nonatomic,copy,readonly) MNRoomSuggestionInfo * roomInfo;                        //@synthesize roomInfo=_roomInfo - In the implementation block
@property (nonatomic,copy,readonly) MNRoomSuggestionReason * suggestionReason;              //@synthesize suggestionReason=_suggestionReason - In the implementation block
@property (nonatomic,readonly) BOOL ignoredByViewer;                                        //@synthesize ignoredByViewer=_ignoredByViewer - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackingData;                                //@synthesize trackingData=_trackingData - In the implementation block
-(MNRoomSuggestionInfo *)roomInfo;
-(MNRoomSuggestionReason *)suggestionReason;
-(NSString *)trackingData;
-(id)initWithRoomInfo:(id)arg1 suggestionReason:(id)arg2 ignoredByViewer:(BOOL)arg3 trackingData:(id)arg4 ;
-(BOOL)ignoredByViewer;
@end

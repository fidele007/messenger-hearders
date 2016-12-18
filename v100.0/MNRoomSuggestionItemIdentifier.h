/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNRoomSuggestionItemIdentifier : FBValueObject <NSCopying> {

	NSString* _inboxUnitId;
	NSString* _suggestionItemId;

}

@property (nonatomic,copy,readonly) NSString * inboxUnitId;                   //@synthesize inboxUnitId=_inboxUnitId - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionItemId;              //@synthesize suggestionItemId=_suggestionItemId - In the implementation block
-(NSString *)suggestionItemId;
-(NSString *)inboxUnitId;
-(id)initWithInboxUnitId:(id)arg1 suggestionItemId:(id)arg2 ;
@end


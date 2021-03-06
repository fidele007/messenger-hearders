/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNRoomSuggestionReason;

@interface MNRoomSuggestionItemContentViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	MNRoomSuggestionReason* _suggestionReason;

}

@property (nonatomic,copy,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) MNRoomSuggestionReason * suggestionReason;              //@synthesize suggestionReason=_suggestionReason - In the implementation block
-(MNRoomSuggestionReason *)suggestionReason;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 suggestionReason:(id)arg3 ;
-(NSString *)title;
-(NSString *)subtitle;
@end


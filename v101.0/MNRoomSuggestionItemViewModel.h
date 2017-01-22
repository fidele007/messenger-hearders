/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNRoomSuggestionItemIdentifier, MNRoomSuggestionRow, MNInboxImpressionLoggingData;

@interface MNRoomSuggestionItemViewModel : FBValueObject <NSCopying> {

	MNRoomSuggestionItemIdentifier* _itemIdentifier;
	MNRoomSuggestionRow* _suggestionRow;
	MNInboxImpressionLoggingData* _loggingData;

}

@property (nonatomic,copy,readonly) MNRoomSuggestionItemIdentifier * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) MNRoomSuggestionRow * suggestionRow;                          //@synthesize suggestionRow=_suggestionRow - In the implementation block
@property (nonatomic,copy,readonly) MNInboxImpressionLoggingData * loggingData;                   //@synthesize loggingData=_loggingData - In the implementation block
-(MNRoomSuggestionRow *)suggestionRow;
-(MNInboxImpressionLoggingData *)loggingData;
-(id)initWithItemIdentifier:(id)arg1 suggestionRow:(id)arg2 loggingData:(id)arg3 ;
-(MNRoomSuggestionItemIdentifier *)itemIdentifier;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNViewModelElementKey;

@interface MNGroupsRoomsSuggestionViewModelKey : FBValueObject <NSCopying> {

	MNViewModelElementKey* _key;
	unsigned long long _roomSuggestionListType;

}

@property (nonatomic,copy,readonly) MNViewModelElementKey * key;                       //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long roomSuggestionListType;              //@synthesize roomSuggestionListType=_roomSuggestionListType - In the implementation block
-(id)initWithKey:(id)arg1 roomSuggestionListType:(unsigned long long)arg2 ;
-(unsigned long long)roomSuggestionListType;
-(MNViewModelElementKey *)key;
@end


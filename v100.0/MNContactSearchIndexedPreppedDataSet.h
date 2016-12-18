/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface MNContactSearchIndexedPreppedDataSet : NSObject <NSCopying> {

	NSDictionary* _threadSummariesByThreadFbId;
	NSDictionary* _usersByUserId;
	NSDictionary* _addressBookContactsByIdentifier;

}
-(id)userForPerson:(id)arg1 ;
-(id)initWithThreadSummariesByThreadFbId:(id)arg1 usersByUserId:(id)arg2 addressBookContactsByIdentifier:(id)arg3 ;
-(id)preppedDataForContact:(id)arg1 ;
-(id)summaryForGroup:(id)arg1 ;
-(id)userSetForParticipantsInGroup:(id)arg1 ;
-(id)userForPage:(id)arg1 ;
-(id)addressBookContactForEntry:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

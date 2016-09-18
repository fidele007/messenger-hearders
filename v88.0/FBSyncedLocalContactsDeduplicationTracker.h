/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray;

@interface FBSyncedLocalContactsDeduplicationTracker : NSObject {

	NSMutableSet* _cumulativeSeenContactIDs;
	NSMutableArray* _matchedContactIDs;

}

@property (nonatomic,copy,readonly) NSMutableSet * cumulativeSeenContactIDs;              //@synthesize cumulativeSeenContactIDs=_cumulativeSeenContactIDs - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * matchedContactIDs;                   //@synthesize matchedContactIDs=_matchedContactIDs - In the implementation block
-(id)initWithMatchedContactIDs:(id)arg1 cumulativeSeenContactIDs:(id)arg2 ;
-(NSMutableSet *)cumulativeSeenContactIDs;
-(NSMutableArray *)matchedContactIDs;
@end

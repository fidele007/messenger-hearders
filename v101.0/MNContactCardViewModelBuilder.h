/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMSyncedThreadKey, NSString, NSArray;

@interface MNContactCardViewModelBuilder : NSObject {

	FBMSyncedThreadKey* _threadKey;
	NSString* _fullName;
	NSString* _mutualFriendsContext;
	NSArray* _timelineContextStrings;
	NSString* _profilePicHash;
	BOOL _addContactButtonEnabled;

}
+(id)contactCardViewModelFromExistingContactCardViewModel:(id)arg1 ;
+(id)contactCardViewModel;
-(id)withFullName:(id)arg1 ;
-(id)withAddContactButtonEnabled:(BOOL)arg1 ;
-(id)withThreadKey:(id)arg1 ;
-(id)withMutualFriendsContext:(id)arg1 ;
-(id)withTimelineContextStrings:(id)arg1 ;
-(id)withProfilePicHash:(id)arg1 ;
-(id)build;
@end

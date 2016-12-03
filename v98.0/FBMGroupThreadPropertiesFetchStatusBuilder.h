/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMGroupThreadPropertiesFetchStatusBuilder : NSObject {

	BOOL _hasFetchedFbId;
	BOOL _hasFetchedOtherParticipantIds;
	BOOL _hasFetchedCustomName;
	BOOL _hasFetchedThreadDescription;
	BOOL _hasFetchedCustomPicHash;
	BOOL _hasFetchedAdminUserIds;
	BOOL _hasFetchedFbGroupId;
	BOOL _hasFetchedFbEventId;
	BOOL _hasFetchedThreadQueueType;
	BOOL _hasFetchedThreadCallData;

}
+(id)groupThreadPropertiesFetchStatus;
+(id)groupThreadPropertiesFetchStatusFromExistingGroupThreadPropertiesFetchStatus:(id)arg1 ;
-(id)withHasFetchedFbId:(BOOL)arg1 ;
-(id)withHasFetchedOtherParticipantIds:(BOOL)arg1 ;
-(id)withHasFetchedCustomName:(BOOL)arg1 ;
-(id)withHasFetchedThreadDescription:(BOOL)arg1 ;
-(id)withHasFetchedCustomPicHash:(BOOL)arg1 ;
-(id)withHasFetchedAdminUserIds:(BOOL)arg1 ;
-(id)withHasFetchedFbGroupId:(BOOL)arg1 ;
-(id)withHasFetchedFbEventId:(BOOL)arg1 ;
-(id)withHasFetchedThreadQueueType:(BOOL)arg1 ;
-(id)withHasFetchedThreadCallData:(BOOL)arg1 ;
-(id)build;
@end

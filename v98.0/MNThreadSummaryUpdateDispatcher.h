/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNThreadParticipantUpdater, MNThreadCustomNameUpdater, MNThreadMuteSettingUpdater, MNThreadPicHashUpdater, MNThreadArchivedStateUpdater, MNThreadReadStateUpdater, MNThreadTimestampUpdater, MNThreadFlaggedAsImportantUpdater, MNThreadFolderTypeUpdater, MNThreadEphemeralityUpdater, MNThreadCustomizationInfoUpdater, MNThreadEventsReminderUpdater, MNThreadAdminsUpdater, MNThreadGameDataUpdater, MNThreadCallDataUpdater, MNThreadLiveLocationUpdater;

@interface MNThreadSummaryUpdateDispatcher : NSObject {

	MNThreadParticipantUpdater* _participantUpdater;
	MNThreadCustomNameUpdater* _customNameUpdater;
	MNThreadMuteSettingUpdater* _muteSettingsUpdater;
	MNThreadPicHashUpdater* _picHashUpdater;
	MNThreadArchivedStateUpdater* _archivedUpdater;
	MNThreadReadStateUpdater* _readStateUpdater;
	MNThreadTimestampUpdater* _timestampUpdater;
	MNThreadFlaggedAsImportantUpdater* _flaggedAsImportantUpdater;
	MNThreadFolderTypeUpdater* _folderTypeUpdater;
	MNThreadEphemeralityUpdater* _ephemeralityUpdater;
	MNThreadCustomizationInfoUpdater* _customizationInfoUpdater;
	MNThreadEventsReminderUpdater* _eventsReminderUpdater;
	MNThreadAdminsUpdater* _threadAdminsUpdater;
	MNThreadGameDataUpdater* _threadGameDataUpdater;
	MNThreadCallDataUpdater* _threadCallDataUpdater;
	MNThreadLiveLocationUpdater* _threadLiveLocationUpdater;

}
-(id)initWithAuthenticationManager:(id)arg1 ;
-(id)applySummaryUpdate:(id)arg1 toThreadSummary:(id)arg2 ;
@end


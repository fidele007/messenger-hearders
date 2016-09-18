/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBImportedContactsSyncStatusBuilder : NSObject {

	unsigned long long _numberOfContactsAttemptedToMatch;
	NSArray* _importedSyncPersons;

}
+(id)importedContactsSyncStatusFromExistingImportedContactsSyncStatus:(id)arg1 ;
+(id)importedContactsSyncStatus;
-(id)withImportedSyncPersons:(id)arg1 ;
-(id)withNumberOfContactsAttemptedToMatch:(unsigned long long)arg1 ;
-(id)build;
@end


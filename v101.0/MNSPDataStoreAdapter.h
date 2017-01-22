/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSyncProtocolPerUserValueStoring.h>
#import <Messenger/MNSyncProtocolUserIdProviding.h>

@protocol MNAuthenticationManager, MNSPDataStoreListening;
@class NSString, MNUserSettings, MNSPDataStore;

@interface MNSPDataStoreAdapter : NSObject <MNSyncProtocolPerUserValueStoring, MNSyncProtocolUserIdProviding> {

	MNUserSettings* _settings;
	id<MNAuthenticationManager> _authManager;
	id<MNSPDataStoreListening> _listener;
	MNSPDataStore* _dataStore;

}

@property (nonatomic,retain,readonly) MNSPDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * mailboxViewerFbId; 
-(NSString *)mailboxViewerFbId;
-(id)initWithUserSettings:(id)arg1 authManager:(id)arg2 listener:(id)arg3 ;
-(void)writeObject:(id)arg1 forKey:(id)arg2 andUserId:(id)arg3 ;
-(id)readObjectForKey:(id)arg1 userId:(id)arg2 ;
-(MNSPDataStore *)dataStore;
@end

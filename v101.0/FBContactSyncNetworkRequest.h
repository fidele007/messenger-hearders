/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class FBContactSyncRecord, NSString, FBUserSession, FBCurrentCountryManager;

@interface FBContactSyncNetworkRequest : FBNetworkerRequest {

	FBContactSyncRecord* _insertedRecord;
	FBContactSyncRecord* _removedRecord;
	NSString* _importID;
	long long _flow;
	FBUserSession* _session;
	BOOL _isFullUpload;
	FBCurrentCountryManager* _countryManager;
	NSString* _JSONString;

}
-(id)networkRequest;
-(id)_contactsJSONString;
-(id)_paramsForRecordItem:(id)arg1 withModifier:(unsigned long long)arg2 ;
-(id)initWithCallbackPerformer:(id)arg1 importID:(id)arg2 flow:(long long)arg3 session:(id)arg4 insertedRecord:(id)arg5 removedRecord:(id)arg6 isFullUpload:(BOOL)arg7 ;
@end


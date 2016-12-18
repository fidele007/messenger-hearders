/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

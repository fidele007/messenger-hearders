/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNSecureMessagingMessagingCollectionAddress, NSString, NSData, MNSecureMessagingSignedPublicKeyWithID, MNSecureMessagingPublicKeyWithID, MNSecureMessagingLookupResult;

@interface MNSecureMessagingLookupResponsePayload : NSObject <TBase, NSCoding> {

	MNSecureMessagingMessagingCollectionAddress* __msg_to;
	NSString* __suggested_codename;
	NSData* __identity_key;
	MNSecureMessagingSignedPublicKeyWithID* __signed_pre_key_with_id;
	MNSecureMessagingPublicKeyWithID* __pre_key_with_id;
	MNSecureMessagingLookupResult* __lookup_result;
	BOOL __msg_to_isset;
	BOOL __suggested_codename_isset;
	BOOL __identity_key_isset;
	BOOL __signed_pre_key_with_id_isset;
	BOOL __pre_key_with_id_isset;
	BOOL __lookup_result_isset;

}

@property (setter=setMsg_to:,getter=msg_to,nonatomic,retain) MNSecureMessagingMessagingCollectionAddress * msg_to; 
@property (setter=setSuggested_codename:,getter=suggested_codename,nonatomic,retain) NSString * suggested_codename; 
@property (setter=setIdentity_key:,getter=identity_key,nonatomic,retain) NSData * identity_key; 
@property (setter=setSigned_pre_key_with_id:,getter=signed_pre_key_with_id,nonatomic,retain) MNSecureMessagingSignedPublicKeyWithID * signed_pre_key_with_id; 
@property (setter=setPre_key_with_id:,getter=pre_key_with_id,nonatomic,retain) MNSecureMessagingPublicKeyWithID * pre_key_with_id; 
@property (setter=setLookup_result:,getter=lookup_result,nonatomic,retain) MNSecureMessagingLookupResult * lookup_result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(MNSecureMessagingMessagingCollectionAddress *)msg_to;
-(id)initWithMsg_to:(id)arg1 suggested_codename:(id)arg2 identity_key:(id)arg3 signed_pre_key_with_id:(id)arg4 pre_key_with_id:(id)arg5 lookup_result:(id)arg6 ;
-(MNSecureMessagingPublicKeyWithID *)pre_key_with_id;
-(MNSecureMessagingSignedPublicKeyWithID *)signed_pre_key_with_id;
-(NSData *)identity_key;
-(void)setMsg_to:(MNSecureMessagingMessagingCollectionAddress *)arg1 ;
-(BOOL)msg_toIsSet;
-(void)unsetMsg_to;
-(void)setSuggested_codename:(NSString *)arg1 ;
-(void)setIdentity_key:(NSData *)arg1 ;
-(void)setSigned_pre_key_with_id:(MNSecureMessagingSignedPublicKeyWithID *)arg1 ;
-(NSString *)suggested_codename;
-(BOOL)suggested_codenameIsSet;
-(void)unsetSuggested_codename;
-(BOOL)identity_keyIsSet;
-(void)unsetIdentity_key;
-(BOOL)signed_pre_key_with_idIsSet;
-(void)unsetSigned_pre_key_with_id;
-(void)setPre_key_with_id:(MNSecureMessagingPublicKeyWithID *)arg1 ;
-(void)setLookup_result:(MNSecureMessagingLookupResult *)arg1 ;
-(BOOL)pre_key_with_idIsSet;
-(void)unsetPre_key_with_id;
-(MNSecureMessagingLookupResult *)lookup_result;
-(BOOL)lookup_resultIsSet;
-(void)unsetLookup_result;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, MNSecureMessagingSignedPublicKeyWithID, NSString;

@interface MNSecureMessagingPreKeyUploadPayload : NSObject <TBase, NSCoding> {

	NSMutableArray* __pre_keys;
	MNSecureMessagingSignedPublicKeyWithID* __signed_pre_key_with_id;
	BOOL __pre_keys_isset;
	BOOL __signed_pre_key_with_id_isset;

}

@property (setter=setPre_keys:,getter=pre_keys,nonatomic,retain) NSMutableArray * pre_keys; 
@property (setter=setSigned_pre_key_with_id:,getter=signed_pre_key_with_id,nonatomic,retain) MNSecureMessagingSignedPublicKeyWithID * signed_pre_key_with_id; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setSigned_pre_key_with_id:(MNSecureMessagingSignedPublicKeyWithID *)arg1 ;
-(MNSecureMessagingSignedPublicKeyWithID *)signed_pre_key_with_id;
-(BOOL)signed_pre_key_with_idIsSet;
-(void)unsetSigned_pre_key_with_id;
-(void)setPre_keys:(NSMutableArray *)arg1 ;
-(id)initWithPre_keys:(id)arg1 signed_pre_key_with_id:(id)arg2 ;
-(NSMutableArray *)pre_keys;
-(BOOL)pre_keysIsSet;
-(void)unsetPre_keys;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end


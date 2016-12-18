/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNSecureMessagingRegisterResponsePayload, MNSecureMessagingLookupResponsePayload, MNSecureMessagingSendResultPayload, MNSecureMessagingCreateThreadResponsePayload, MNSecureMessagingBatchLookupResponsePayload, MNSecureMessagingParticipantsListPayload, NSString;

@interface MNSecureMessagingStoredProcedureResponseBody : NSObject <TBase, NSCoding> {

	MNSecureMessagingRegisterResponsePayload* __register_response_payload;
	MNSecureMessagingLookupResponsePayload* __lookup_response_payload;
	MNSecureMessagingSendResultPayload* __send_result_payload;
	MNSecureMessagingCreateThreadResponsePayload* __create_thread_response_payload;
	MNSecureMessagingBatchLookupResponsePayload* __batch_lookup_response_payload;
	MNSecureMessagingParticipantsListPayload* __participants_list_payload;
	BOOL __register_response_payload_isset;
	BOOL __lookup_response_payload_isset;
	BOOL __send_result_payload_isset;
	BOOL __create_thread_response_payload_isset;
	BOOL __batch_lookup_response_payload_isset;
	BOOL __participants_list_payload_isset;

}

@property (setter=setRegister_response_payload:,getter=register_response_payload,nonatomic,retain) MNSecureMessagingRegisterResponsePayload * register_response_payload; 
@property (setter=setLookup_response_payload:,getter=lookup_response_payload,nonatomic,retain) MNSecureMessagingLookupResponsePayload * lookup_response_payload; 
@property (setter=setSend_result_payload:,getter=send_result_payload,nonatomic,retain) MNSecureMessagingSendResultPayload * send_result_payload; 
@property (setter=setCreate_thread_response_payload:,getter=create_thread_response_payload,nonatomic,retain) MNSecureMessagingCreateThreadResponsePayload * create_thread_response_payload; 
@property (setter=setBatch_lookup_response_payload:,getter=batch_lookup_response_payload,nonatomic,retain) MNSecureMessagingBatchLookupResponsePayload * batch_lookup_response_payload; 
@property (setter=setParticipants_list_payload:,getter=participants_list_payload,nonatomic,retain) MNSecureMessagingParticipantsListPayload * participants_list_payload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setRegister_response_payload:(MNSecureMessagingRegisterResponsePayload *)arg1 ;
-(void)setLookup_response_payload:(MNSecureMessagingLookupResponsePayload *)arg1 ;
-(void)setSend_result_payload:(MNSecureMessagingSendResultPayload *)arg1 ;
-(void)setCreate_thread_response_payload:(MNSecureMessagingCreateThreadResponsePayload *)arg1 ;
-(void)setBatch_lookup_response_payload:(MNSecureMessagingBatchLookupResponsePayload *)arg1 ;
-(void)setParticipants_list_payload:(MNSecureMessagingParticipantsListPayload *)arg1 ;
-(id)initWithRegister_response_payload:(id)arg1 lookup_response_payload:(id)arg2 send_result_payload:(id)arg3 create_thread_response_payload:(id)arg4 batch_lookup_response_payload:(id)arg5 participants_list_payload:(id)arg6 ;
-(MNSecureMessagingRegisterResponsePayload *)register_response_payload;
-(BOOL)register_response_payloadIsSet;
-(void)unsetRegister_response_payload;
-(MNSecureMessagingLookupResponsePayload *)lookup_response_payload;
-(BOOL)lookup_response_payloadIsSet;
-(void)unsetLookup_response_payload;
-(MNSecureMessagingSendResultPayload *)send_result_payload;
-(BOOL)send_result_payloadIsSet;
-(void)unsetSend_result_payload;
-(MNSecureMessagingCreateThreadResponsePayload *)create_thread_response_payload;
-(BOOL)create_thread_response_payloadIsSet;
-(void)unsetCreate_thread_response_payload;
-(MNSecureMessagingBatchLookupResponsePayload *)batch_lookup_response_payload;
-(BOOL)batch_lookup_response_payloadIsSet;
-(void)unsetBatch_lookup_response_payload;
-(MNSecureMessagingParticipantsListPayload *)participants_list_payload;
-(BOOL)participants_list_payloadIsSet;
-(void)unsetParticipants_list_payload;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

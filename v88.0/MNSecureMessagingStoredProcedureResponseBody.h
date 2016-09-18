/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNSecureMessagingRegisterResponsePayload, MNSecureMessagingLookupResponsePayload, MNSecureMessagingSendResultPayload, NSString;

@interface MNSecureMessagingStoredProcedureResponseBody : NSObject <TBase, NSCoding> {

	MNSecureMessagingRegisterResponsePayload* __register_response_payload;
	MNSecureMessagingLookupResponsePayload* __lookup_response_payload;
	MNSecureMessagingSendResultPayload* __send_result_payload;
	BOOL __register_response_payload_isset;
	BOOL __lookup_response_payload_isset;
	BOOL __send_result_payload_isset;

}

@property (setter=setRegister_response_payload:,getter=register_response_payload,nonatomic,retain) MNSecureMessagingRegisterResponsePayload * register_response_payload; 
@property (setter=setLookup_response_payload:,getter=lookup_response_payload,nonatomic,retain) MNSecureMessagingLookupResponsePayload * lookup_response_payload; 
@property (setter=setSend_result_payload:,getter=send_result_payload,nonatomic,retain) MNSecureMessagingSendResultPayload * send_result_payload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setRegister_response_payload:(MNSecureMessagingRegisterResponsePayload *)arg1 ;
-(void)setLookup_response_payload:(MNSecureMessagingLookupResponsePayload *)arg1 ;
-(void)setSend_result_payload:(MNSecureMessagingSendResultPayload *)arg1 ;
-(id)initWithRegister_response_payload:(id)arg1 lookup_response_payload:(id)arg2 send_result_payload:(id)arg3 ;
-(MNSecureMessagingRegisterResponsePayload *)register_response_payload;
-(BOOL)register_response_payloadIsSet;
-(void)unsetRegister_response_payload;
-(MNSecureMessagingLookupResponsePayload *)lookup_response_payload;
-(BOOL)lookup_response_payloadIsSet;
-(void)unsetLookup_response_payload;
-(MNSecureMessagingSendResultPayload *)send_result_payload;
-(BOOL)send_result_payloadIsSet;
-(void)unsetSend_result_payload;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end


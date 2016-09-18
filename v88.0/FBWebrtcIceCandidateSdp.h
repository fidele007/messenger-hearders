/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcIceCandidateSdp : NSObject <TBase, NSCoding> {

	NSString* __foundation;
	unsigned char __componentId;
	int __transport;
	int __priority;
	NSString* __address;
	int __port;
	int __protocolType;
	NSString* __relatedAddress;
	int __relatedPort;
	NSString* __username;
	NSString* __password;
	int __generation;
	int __tcptype;
	BOOL __foundation_isset;
	BOOL __componentId_isset;
	BOOL __transport_isset;
	BOOL __priority_isset;
	BOOL __address_isset;
	BOOL __port_isset;
	BOOL __protocolType_isset;
	BOOL __relatedAddress_isset;
	BOOL __relatedPort_isset;
	BOOL __username_isset;
	BOOL __password_isset;
	BOOL __generation_isset;
	BOOL __tcptype_isset;

}

@property (setter=setFoundation:,getter=foundation,nonatomic,retain) NSString * foundation; 
@property (assign,setter=setComponentId:,getter=componentId,nonatomic) unsigned char componentId; 
@property (assign,setter=setTransport:,getter=transport,nonatomic) int transport; 
@property (assign,setter=setPriority:,getter=priority,nonatomic) int priority; 
@property (setter=setAddress:,getter=address,nonatomic,retain) NSString * address; 
@property (assign,setter=setPort:,getter=port,nonatomic) int port; 
@property (assign,setter=setProtocolType:,getter=protocolType,nonatomic) int protocolType; 
@property (setter=setRelatedAddress:,getter=relatedAddress,nonatomic,retain) NSString * relatedAddress; 
@property (assign,setter=setRelatedPort:,getter=relatedPort,nonatomic) int relatedPort; 
@property (setter=setUsername:,getter=username,nonatomic,retain) NSString * username; 
@property (setter=setPassword:,getter=password,nonatomic,retain) NSString * password; 
@property (assign,setter=setGeneration:,getter=generation,nonatomic) int generation; 
@property (assign,setter=setTcptype:,getter=tcptype,nonatomic) int tcptype; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setFoundation:(NSString *)arg1 ;
-(void)setComponentId:(unsigned char)arg1 ;
-(void)setProtocolType:(int)arg1 ;
-(void)setRelatedAddress:(NSString *)arg1 ;
-(void)setRelatedPort:(int)arg1 ;
-(void)setTcptype:(int)arg1 ;
-(id)initWithFoundation:(id)arg1 componentId:(unsigned char)arg2 transport:(int)arg3 priority:(int)arg4 address:(id)arg5 port:(int)arg6 protocolType:(int)arg7 relatedAddress:(id)arg8 relatedPort:(int)arg9 username:(id)arg10 password:(id)arg11 generation:(int)arg12 tcptype:(int)arg13 ;
-(NSString *)foundation;
-(BOOL)foundationIsSet;
-(void)unsetFoundation;
-(unsigned char)componentId;
-(BOOL)componentIdIsSet;
-(void)unsetComponentId;
-(BOOL)transportIsSet;
-(void)unsetTransport;
-(BOOL)priorityIsSet;
-(void)unsetPriority;
-(BOOL)addressIsSet;
-(void)unsetAddress;
-(BOOL)portIsSet;
-(void)unsetPort;
-(int)protocolType;
-(BOOL)protocolTypeIsSet;
-(void)unsetProtocolType;
-(NSString *)relatedAddress;
-(BOOL)relatedAddressIsSet;
-(void)unsetRelatedAddress;
-(int)relatedPort;
-(BOOL)relatedPortIsSet;
-(void)unsetRelatedPort;
-(BOOL)usernameIsSet;
-(void)unsetUsername;
-(BOOL)passwordIsSet;
-(void)unsetPassword;
-(BOOL)generationIsSet;
-(void)unsetGeneration;
-(int)tcptype;
-(BOOL)tcptypeIsSet;
-(void)unsetTcptype;
-(void)setPort:(int)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void)validate;
-(int)port;
-(void)setAddress:(NSString *)arg1 ;
-(void)setGeneration:(int)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(NSString *)address;
-(void)write:(id)arg1 ;
-(int)generation;
-(int)transport;
-(void)setTransport:(int)arg1 ;
@end


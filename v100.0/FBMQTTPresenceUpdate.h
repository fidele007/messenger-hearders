/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTPresenceUpdate : NSObject <TBase, NSCoding> {

	long long __uid;
	int __state;
	long long __lastActiveTimeSec;
	short __detailedClientPresence;
	long long __voipCapabilities;
	BOOL __uid_isset;
	BOOL __state_isset;
	BOOL __lastActiveTimeSec_isset;
	BOOL __detailedClientPresence_isset;
	BOOL __voipCapabilities_isset;

}

@property (assign,setter=setUid:,getter=uid,nonatomic) long long uid; 
@property (assign,setter=setState:,getter=state,nonatomic) int state; 
@property (assign,setter=setLastActiveTimeSec:,getter=lastActiveTimeSec,nonatomic) long long lastActiveTimeSec; 
@property (assign,setter=setDetailedClientPresence:,getter=detailedClientPresence,nonatomic) short detailedClientPresence; 
@property (assign,setter=setVoipCapabilities:,getter=voipCapabilities,nonatomic) long long voipCapabilities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(long long)lastActiveTimeSec;
-(long long)voipCapabilities;
-(void)setLastActiveTimeSec:(long long)arg1 ;
-(void)setDetailedClientPresence:(short)arg1 ;
-(void)setVoipCapabilities:(long long)arg1 ;
-(id)initWithUid:(long long)arg1 state:(int)arg2 lastActiveTimeSec:(long long)arg3 detailedClientPresence:(short)arg4 voipCapabilities:(long long)arg5 ;
-(BOOL)uidIsSet;
-(void)unsetUid;
-(BOOL)stateIsSet;
-(void)unsetState;
-(BOOL)lastActiveTimeSecIsSet;
-(void)unsetLastActiveTimeSec;
-(short)detailedClientPresence;
-(BOOL)detailedClientPresenceIsSet;
-(void)unsetDetailedClientPresence;
-(BOOL)voipCapabilitiesIsSet;
-(void)unsetVoipCapabilities;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(long long)uid;
-(void)validate;
-(void)setUid:(long long)arg1 ;
-(void)write:(id)arg1 ;
@end


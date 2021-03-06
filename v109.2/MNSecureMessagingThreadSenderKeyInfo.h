/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSMutableDictionary, NSString;

@interface MNSecureMessagingThreadSenderKeyInfo : NSObject <TBase, NSCoding> {

	long long __thread_fbid;
	NSData* __sender_key;
	NSMutableDictionary* __thread_participants;
	BOOL __thread_fbid_isset;
	BOOL __sender_key_isset;
	BOOL __thread_participants_isset;

}

@property (assign,setter=setThread_fbid:,getter=thread_fbid,nonatomic) long long thread_fbid; 
@property (setter=setSender_key:,getter=sender_key,nonatomic,retain) NSData * sender_key; 
@property (setter=setThread_participants:,getter=thread_participants,nonatomic,retain) NSMutableDictionary * thread_participants; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThread_fbid:(long long)arg1 ;
-(long long)thread_fbid;
-(BOOL)thread_fbidIsSet;
-(void)unsetThread_fbid;
-(void)setSender_key:(NSData *)arg1 ;
-(void)setThread_participants:(NSMutableDictionary *)arg1 ;
-(id)initWithThread_fbid:(long long)arg1 sender_key:(id)arg2 thread_participants:(id)arg3 ;
-(NSData *)sender_key;
-(BOOL)sender_keyIsSet;
-(void)unsetSender_key;
-(NSMutableDictionary *)thread_participants;
-(BOOL)thread_participantsIsSet;
-(void)unsetThread_participants;
-(void)read:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableDictionary;

@interface FBMQTTAndroidNotificationPayload : NSObject <TBase, NSCoding> {

	NSString* __type;
	long long __time;
	NSString* __message;
	int __unread_count;
	long long __target_uid;
	NSString* __href;
	NSMutableDictionary* __params;
	BOOL __is_logged_out_push;
	BOOL __type_isset;
	BOOL __time_isset;
	BOOL __message_isset;
	BOOL __unread_count_isset;
	BOOL __target_uid_isset;
	BOOL __href_isset;
	BOOL __params_isset;
	BOOL __is_logged_out_push_isset;

}

@property (setter=setType:,getter=type,nonatomic,retain) NSString * type; 
@property (assign,setter=setTime:,getter=time,nonatomic) long long time; 
@property (setter=setMessage:,getter=message,nonatomic,retain) NSString * message; 
@property (assign,setter=setUnread_count:,getter=unread_count,nonatomic) int unread_count; 
@property (assign,setter=setTarget_uid:,getter=target_uid,nonatomic) long long target_uid; 
@property (setter=setHref:,getter=href,nonatomic,retain) NSString * href; 
@property (setter=setParams:,getter=params,nonatomic,retain) NSMutableDictionary * params; 
@property (assign,setter=setIs_logged_out_push:,getter=is_logged_out_push,nonatomic) BOOL is_logged_out_push; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)messageIsSet;
-(void)unsetMessage;
-(BOOL)typeIsSet;
-(void)unsetType;
-(void)setParams:(NSMutableDictionary *)arg1 ;
-(void)setUnread_count:(int)arg1 ;
-(void)setTarget_uid:(long long)arg1 ;
-(void)setIs_logged_out_push:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 time:(long long)arg2 message:(id)arg3 unread_count:(int)arg4 target_uid:(long long)arg5 href:(id)arg6 params:(id)arg7 is_logged_out_push:(BOOL)arg8 ;
-(BOOL)timeIsSet;
-(void)unsetTime;
-(int)unread_count;
-(BOOL)unread_countIsSet;
-(void)unsetUnread_count;
-(long long)target_uid;
-(BOOL)target_uidIsSet;
-(void)unsetTarget_uid;
-(BOOL)hrefIsSet;
-(void)unsetHref;
-(BOOL)paramsIsSet;
-(void)unsetParams;
-(BOOL)is_logged_out_push;
-(BOOL)is_logged_out_pushIsSet;
-(void)unsetIs_logged_out_push;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)message;
-(void)setTime:(long long)arg1 ;
-(long long)time;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(void)validate;
-(NSMutableDictionary *)params;
-(void)write:(id)arg1 ;
@end


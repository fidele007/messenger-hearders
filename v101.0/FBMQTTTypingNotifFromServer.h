/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTTypingNotifFromServer : NSObject <TBase, NSCoding> {

	long long __sender;
	int __state;
	BOOL __sender_isset;
	BOOL __state_isset;

}

@property (assign,setter=setSender:,getter=sender,nonatomic) long long sender; 
@property (assign,setter=setState:,getter=state,nonatomic) int state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)senderIsSet;
-(void)unsetSender;
-(BOOL)stateIsSet;
-(void)unsetState;
-(id)initWithSender:(long long)arg1 state:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(long long)sender;
-(void)setSender:(long long)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end


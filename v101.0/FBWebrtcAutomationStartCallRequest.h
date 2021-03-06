/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcAutomationStartCallRequest : NSObject <TBase, NSCoding> {

	long long __calleeId;
	int __callType;
	BOOL __calleeId_isset;
	BOOL __callType_isset;

}

@property (assign,setter=setCalleeId:,getter=calleeId,nonatomic) long long calleeId; 
@property (assign,setter=setCallType:,getter=callType,nonatomic) int callType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setCalleeId:(long long)arg1 ;
-(id)initWithCalleeId:(long long)arg1 callType:(int)arg2 ;
-(long long)calleeId;
-(BOOL)calleeIdIsSet;
-(void)unsetCalleeId;
-(BOOL)callTypeIsSet;
-(void)unsetCallType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setCallType:(int)arg1 ;
-(int)callType;
-(void)write:(id)arg1 ;
@end


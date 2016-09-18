/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTCallability : NSObject <TBase, NSCoding> {

	long long __thrift_userId;
	BOOL __thrift_has_permission;
	BOOL __thrift_is_callable_mobile;
	BOOL __thrift_is_callable_webrtc;
	int __thrift_reason_code;
	BOOL __thrift_userId_set;
	BOOL __thrift_has_permission_set;
	BOOL __thrift_is_callable_mobile_set;
	BOOL __thrift_is_callable_webrtc_set;
	BOOL __thrift_reason_code_set;

}

@property (assign,nonatomic) long long userId; 
@property (assign,nonatomic) BOOL has_permission; 
@property (assign,nonatomic) BOOL is_callable_mobile; 
@property (assign,nonatomic) BOOL is_callable_webrtc; 
@property (assign,nonatomic) int reason_code; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setHas_permission:(BOOL)arg1 ;
-(void)setIs_callable_mobile:(BOOL)arg1 ;
-(void)setIs_callable_webrtc:(BOOL)arg1 ;
-(void)setReason_code:(int)arg1 ;
-(id)initWithUserId:(long long)arg1 has_permission:(BOOL)arg2 is_callable_mobile:(BOOL)arg3 is_callable_webrtc:(BOOL)arg4 reason_code:(int)arg5 ;
-(BOOL)userIdIsSet;
-(void)unsetUserId;
-(BOOL)has_permission;
-(BOOL)has_permissionIsSet;
-(void)unsetHas_permission;
-(BOOL)is_callable_mobile;
-(BOOL)is_callable_mobileIsSet;
-(void)unsetIs_callable_mobile;
-(BOOL)is_callable_webrtc;
-(BOOL)is_callable_webrtcIsSet;
-(void)unsetIs_callable_webrtc;
-(int)reason_code;
-(BOOL)reason_codeIsSet;
-(void)unsetReason_code;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)write:(id)arg1 ;
-(void)setUserId:(long long)arg1 ;
-(long long)userId;
@end


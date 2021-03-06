/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBVSPDeltaPinCode : NSObject <TBase, NSCoding> {

	long long __pinFbId;
	BOOL __paymentsProtected;
	BOOL __pinFbId_isset;
	BOOL __paymentsProtected_isset;

}

@property (assign,setter=setPinFbId:,getter=pinFbId,nonatomic) long long pinFbId; 
@property (assign,setter=setPaymentsProtected:,getter=paymentsProtected,nonatomic) BOOL paymentsProtected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPinFbId:(long long)arg1 ;
-(void)setPaymentsProtected:(BOOL)arg1 ;
-(id)initWithPinFbId:(long long)arg1 paymentsProtected:(BOOL)arg2 ;
-(long long)pinFbId;
-(BOOL)pinFbIdIsSet;
-(void)unsetPinFbId;
-(BOOL)paymentsProtected;
-(BOOL)paymentsProtectedIsSet;
-(void)unsetPaymentsProtected;
-(void)read:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end


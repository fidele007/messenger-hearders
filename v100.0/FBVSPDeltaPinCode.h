/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
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
-(BOOL)pinFbIdIsSet;
-(void)read:(id)arg1 ;
-(void)setPinFbId:(long long)arg1 ;
-(void)setPaymentsProtected:(BOOL)arg1 ;
-(id)initWithPinFbId:(long long)arg1 paymentsProtected:(BOOL)arg2 ;
-(long long)pinFbId;
-(void)unsetPinFbId;
-(BOOL)paymentsProtected;
-(BOOL)paymentsProtectedIsSet;
-(void)unsetPaymentsProtected;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end


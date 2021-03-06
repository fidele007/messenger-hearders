/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@class MNContactAddAlertControllerInjector, NSString;

@interface MNContactAddAlertController : NSObject <FBClassInjectable> {

	MNContactAddAlertControllerInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)presentAlertIfNecessaryForCanonicalThreadKey:(id)arg1 userFullName:(id)arg2 addContactButton:(id)arg3 acceptedBlock:(/*^block*/id)arg4 canceledBlock:(/*^block*/id)arg5 contactAddSource:(id)arg6 ;
-(void)_presentAlertForCanonicalThreadKey:(id)arg1 userFullName:(id)arg2 addContactButton:(id)arg3 acceptedBlock:(/*^block*/id)arg4 canceledBlock:(/*^block*/id)arg5 contactAddSource:(id)arg6 ;
-(void)_didTapCancelAddContactConfirmationForCanonicalThreadKey:(id)arg1 canceledBlock:(/*^block*/id)arg2 contactAddSource:(id)arg3 ;
-(void)_didConfirmAddContactWithAcceptedBlock:(/*^block*/id)arg1 canonicalThreadKey:(id)arg2 contactAddSource:(id)arg3 ;
-(void)_logEvent:(id)arg1 canonicalThreadKey:(id)arg2 contactAddSource:(id)arg3 ;
-(void)_saveDidAcceptAddContactAlert;
@end


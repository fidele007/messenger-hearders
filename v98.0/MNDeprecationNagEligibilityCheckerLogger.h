/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@class MNDeprecationNagEligibilityCheckerLoggerInjector, NSString;

@interface MNDeprecationNagEligibilityCheckerLogger : NSObject <FBClassInjectable> {

	MNDeprecationNagEligibilityCheckerLoggerInjector* _injector;
	BOOL _isUsingExperimentalSchedule;
	BOOL _isConfigured;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)configureWithIsUsingExperimentalSchedule:(BOOL)arg1 ;
-(void)logIneligibleBecauseUpToDate;
-(void)logEligibleWithDeprecationPhase:(long long)arg1 ;
-(void)logIneligibleBecauseInCooldownForDeprecationPhase:(long long)arg1 ;
-(void)_logIneligibleWithReason:(id)arg1 deprecationPhase:(long long)arg2 ;
@end

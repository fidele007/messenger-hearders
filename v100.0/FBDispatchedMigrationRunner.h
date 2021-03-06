/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject, NSDictionary;

@interface FBDispatchedMigrationRunner : NSObject {

	NSUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _completedMigrations;

}

@property (copy) NSDictionary * completedMigrations;              //@synthesize completedMigrations=_completedMigrations - In the implementation block
-(void)_runStepIndex:(unsigned long long)arg1 ofSteps:(id)arg2 withConfig:(id)arg3 completion:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(BOOL)_hasAlreadyExecutedStep:(unsigned long long)arg1 ofMigrationWithConfig:(id)arg2 ;
-(void)_recordSuccesfulExecutionOfMigrationWithConfig:(id)arg1 stepIndex:(unsigned long long)arg2 ;
-(NSDictionary *)completedMigrations;
-(void)setCompletedMigrations:(NSDictionary *)arg1 ;
-(void)_loadCompletedMigrationsIfNecessary;
-(id)initWithUserDefault:(id)arg1 queue:(id)arg2 ;
-(void)runSteps:(id)arg1 withConfig:(id)arg2 completion:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
@end


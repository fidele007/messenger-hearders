/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBApplicationModulesConfiguration : NSObject {

	NSArray* _loginIndependentModuleFactories;
	NSArray* _loginDependentModuleFactories;

}

@property (nonatomic,copy,readonly) NSArray * loginIndependentModuleFactories;              //@synthesize loginIndependentModuleFactories=_loginIndependentModuleFactories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * loginDependentModuleFactories;                //@synthesize loginDependentModuleFactories=_loginDependentModuleFactories - In the implementation block
-(id)initWithLoginIndependentModuleFactories:(id)arg1 loginDependentModuleFactories:(id)arg2 ;
-(NSArray *)loginIndependentModuleFactories;
-(NSArray *)loginDependentModuleFactories;
-(id)init;
@end


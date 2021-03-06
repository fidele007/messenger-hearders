/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:16 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNKeysConfiguration, NSArray, NSString, FBExceptionHandler;

@interface MNAppDelegateConfiguration : NSObject {

	MNKeysConfiguration* _keysConfiguration;
	NSArray* _providerModules;
	NSString* _flytrapCategoryID;
	/*^block*/id _sessionControllerInitializerBlock;
	unsigned long long _logOptions;
	FBExceptionHandler* _exceptionHandler;

}

@property (nonatomic,copy) MNKeysConfiguration * keysConfiguration;              //@synthesize keysConfiguration=_keysConfiguration - In the implementation block
@property (nonatomic,copy) NSArray * providerModules;                            //@synthesize providerModules=_providerModules - In the implementation block
@property (nonatomic,copy) NSString * flytrapCategoryID;                         //@synthesize flytrapCategoryID=_flytrapCategoryID - In the implementation block
@property (nonatomic,copy) id sessionControllerInitializerBlock;                 //@synthesize sessionControllerInitializerBlock=_sessionControllerInitializerBlock - In the implementation block
@property (assign,nonatomic) unsigned long long logOptions;                      //@synthesize logOptions=_logOptions - In the implementation block
@property (nonatomic,retain) FBExceptionHandler * exceptionHandler;              //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
+(id)sharedInstance;
-(void)setKeysConfiguration:(MNKeysConfiguration *)arg1 ;
-(void)setProviderModules:(NSArray *)arg1 ;
-(void)setFlytrapCategoryID:(NSString *)arg1 ;
-(void)setLogOptions:(unsigned long long)arg1 ;
-(void)setSessionControllerInitializerBlock:(id)arg1 ;
-(MNKeysConfiguration *)keysConfiguration;
-(NSArray *)providerModules;
-(NSString *)flytrapCategoryID;
-(id)sessionControllerInitializerBlock;
-(FBExceptionHandler *)exceptionHandler;
-(unsigned long long)logOptions;
-(id)init;
-(void)setExceptionHandler:(FBExceptionHandler *)arg1 ;
@end

